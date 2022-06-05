#include "quoridor.h"
#include "ui_quoridor.h"

QString next_m = "";

void Quoridor::next_move(){

    QList<QString> moves1;
    QList<QString> moves2;

    int p1_y = player_red.last().y; int p1_x = player_red.last().x;
    int p2_y = player_blue.last().y; int p2_x = player_blue.last().x;

    moves1.append("m " + QString::number(p1_y) + " " + QString::number(p1_x) + " r");
    moves1.append("m " + QString::number(p2_y) + " " + QString::number(p2_x) + " b");

    moves2.append("m " + QString::number(p1_y) + " " + QString::number(p1_x) + " r");
    moves2.append("m " + QString::number(p2_y) + " " + QString::number(p2_x) + " b");

    QString move1 = best_move(board_matrix, place(p1_y, p1_x), place(p2_y, p2_x), 16);
    QString move2 = best_wall(board_matrix, place(p2_y, p2_x), place(p1_y, p1_x), 0);

    moves1.append(move1);
    moves2.append(move2);

    if(!check_wall_number()){
        next_m = move1;
        return;
    }

    if(minimax(moves1, false, 4) > minimax(moves2, false, 4))
        next_m = move1;
    else
        if(move2.at(0) != 'e')
            next_m = move2;
        else
            next_m = move1;

}

int Quoridor::minimax(QList<QString> moves, bool max, int level){

    QList<QString> moves1;
    QList<QString> moves2;
    int curr_blue_y = 99; int curr_blue_x = 99;
    int curr_red_y = 99; int curr_red_x = 99;
    int board_copy[17][17];

    // create new board
    for (int y=0; y < 17; y++) {
        for (int x=0; x < 17; x++) {
            board_copy[y][x] = board_matrix[y][x];
            board_copy_s[y][x] = board_matrix[y][x];
        }
    }

    // load chosen moves
    if(!moves.isEmpty())
        for(int i=0; i < moves.size(); i++){
            if(moves[i].at(0) == 'e')
                continue;
            ui->textBrowser_2->setText(moves[i]);
            moves1.append(moves[i]);
            moves2.append(moves[i]);
            int y = moves[i].split(QChar(' ')).at(1).toInt();
            int x = moves[i].split(QChar(' ')).at(2).toInt();

            if(moves[i].at(0) == 'm'){
                if(moves[i].split(QChar(' ')).at(3) == "r"){
                    curr_red_y = y;
                    curr_red_x = x;
                }

                if(moves[i].split(QChar(' ')).at(3) == "b"){
                    curr_blue_y = y;
                    curr_blue_x = x;
                }
            }
            if(moves[i].at(0) == 'v'){
                board_copy[y][x] = 1; board_copy[y+1][x] = 1; board_copy[y+2][x] = 1;
                board_copy_s[y][x] = 1; board_copy_s[y+1][x] = 1; board_copy_s[y+2][x] = 1;
            }
            if(moves[i].at(0) == 'h'){
                board_copy[y][x] = 1; board_copy[y][x+1] = 1; board_copy[y][x+2] = 1;
                board_copy_s[y][x] = 1; board_copy_s[y][x+1] = 1; board_copy_s[y][x+2] = 1;
            }
        }

    board_copy[curr_red_y][curr_red_x] = 1;
    board_copy[curr_blue_y][curr_blue_x] = 1;

    if(level == 0){
        shortest_path(curr_red_y, curr_red_x, 16);
        int score_red = distance;

        for (int y=0; y < 17; y++) {
            for (int x=0; x < 17; x++) {
                board_copy_s[y][x] = board_copy[y][x];
            }
        }

        shortest_path(curr_blue_y, curr_blue_x, 0);
        int score_blue = distance;
        return score_red - score_blue;
    }


    if(max){
        moves1.append(best_move(board_copy, place(curr_red_y, curr_red_x), place(curr_blue_y, curr_blue_x), 16));
        moves2.append(best_wall(board_copy, place(curr_blue_y, curr_blue_x), place(curr_red_y, curr_red_x), 0));
        return std::max(minimax(moves1, false, level-1), minimax(moves2, false, level-1));
    }
    else{
        moves1.append(best_move(board_copy, place(curr_blue_y, curr_blue_x), place(curr_red_y, curr_red_x), 0));
        moves2.append(best_wall(board_copy, place(curr_red_y, curr_red_x), place(curr_blue_y, curr_blue_x), 16));
        return std::min(minimax(moves1, true, level-1), minimax(moves2, true, level-1));
    }

}

QString Quoridor::best_move(int board_copy[][17], place p1, place p2, int goal){

    QList<place> near_nodes;
    int shortest = 999;
    int yy = 99; int xx = 99;
    QString player;

    int up[] = {-1,-1};
    int down[] = {-1,-1};
    int left[] = {-1,-1};
    int right[] = {-1,-1};

    int jump_left[] = {-1,-1};
    int jump_right[] = {-1,-1};


    if(p1.x > 0 && board_copy[p1.y][p1.x-1] != 1){
        left[0] = p1.y; left[1] = p1.x -2;}

    if(p1.y > 0  && board_copy[p1.y-1][p1.x] != 1){
        up[0] = p1.y -2; up[1] = p1.x;}

    if(p1.x < 16 && board_copy[p1.y][p1.x+1] != 1){
        right[0] = p1.y; right[1] = p1.x +2;}

    if(p1.y < 16 && board_copy[p1.y+1][p1.x] != 1){
        down[0] = p1.y +2; down[1] = p1.x;}



    if(p1.y == p2.y && p1.x-2 == p2.x && board_copy[p1.y][p1.x-1] != 1){
        left[0] = -1; left[1] = -1;
        if(board_copy[p1.y][p1.x-3] != 1 && p1.x > 2){
            left[0] = p1.y; left[1] = p1.x-4;}
        if(board_copy[p1.y][p1.x-3] == 1 && p1.y > 0 && p1.y < 16){
            if(board_copy[p1.y-1][p1.x-2] != 1){
                jump_right[0] = p1.y-2; jump_right[1] = p1.x-2;}
            if(board_copy[p1.y+1][p1.x-2] != 1){
                jump_left[0] = p1.y+2; jump_left[1] = p1.x-2;}}}


    if(p1.y-2 == p2.y && p1.x == p2.x && board_copy[p1.y-1][p1.x] != 1){
        up[0] = -1; up[1] = -1;
        if(board_copy[p1.y-3][p1.x] != 1 && p1.y > 2 && board_copy[p1.y-1][p1.x] != 1){
            up[0] = p1.y-4; up[1] = p1.x;}
        if(board_copy[p1.y-3][p1.x] == 1 && p1.x > 0 && p1.x < 16){
            if(board_copy[p1.y-2][p1.x+1] != 1){
                jump_right[0] = p1.y-2; jump_right[1] = p1.x+2;}
            if(board_copy[p1.y-2][p1.x-1] != 1){
                jump_left[0] = p1.y-2; jump_left[1] = p1.x-2;}}}


    if(p1.y == p2.y && p1.x+2 == p2.x && board_copy[p1.y][p1.x+1] != 1){
        right[0] = -1; right[1] = -1;
        if(board_copy[p1.y][p1.x+3] != 1 && p1.x < 14){
            right[0] = p1.y; right[1] = p1.x+4;}
        if(board_copy[p1.y][p1.x+3] == 1 && p1.y > 0 && p1.y < 16){
            if(board_copy[p1.y+1][p1.x+2] != 1){
                jump_right[0] = p1.y+2; jump_right[1] = p1.x+2;}
            if(board_copy[p1.y-1][p1.x+2] != 1){
                jump_left[0] = p1.y-2; jump_left[1] = p1.x+2;}}}


    if(p1.y+2 == p2.y && p1.x == p2.x && board_copy[p1.y+1][p1.x] != 1){
        down[0] = -1; down[1] = -1;
        if(board_copy[p1.y+3][p1.x] != 1 && p1.y < 14){
            down[0] = p1.y+4; down[1] = p1.x;}
        if(board_copy[p1.y+3][p1.x] == 1 && p1.x > 0 && p1.x < 16){
            if(board_copy[p1.y+2][p1.x-1] != 1){
                jump_right[0] = p1.y+2; jump_right[1] = p1.x-2;}
            if(board_copy[p1.y+2][p1.x+1] != 1){
                jump_left[0] = p1.y+2; jump_left[1] = p1.x+2;}}}


    if(up[0] != -1 && board_copy[up[0]][up[1]] != 1){
        near_nodes.append(place(up[0], up[1]));
    }
    if(down[0] != -1 && board_copy[down[0]][down[1]] != 1){
        near_nodes.append(place(down[0], down[1]));
    }
    if(left[0] != -1 && board_copy[left[0]][left[1]] != 1){
        near_nodes.append(place(left[0], left[1]));
    }
    if(right[0] != -1 && board_copy[right[0]][right[1]] != 1){
        near_nodes.append(place(right[0], right[1]));
    }
    if(jump_left[0] != -1 && board_copy[jump_left[0]][jump_right[1]] != 1){
        near_nodes.append(place(jump_left[0], jump_left[1]));
    }
    if(jump_right[0] != -1 && board_copy[jump_right[0]][jump_right[1]] != 1){
        near_nodes.append(place(jump_right[0], jump_right[1]));
    }


    if(!near_nodes.isEmpty()){
        for(int i=0; i < near_nodes.size(); i++){
            for (int y=0; y < 17; y++) {
                for (int x=0; x < 17; x++) {
                    board_copy_s[y][x] = board_copy[y][x];
                }
            }
            shortest_path(near_nodes[i].y, near_nodes[i].x, goal);
            if(distance < shortest){
                shortest = distance;
                yy = near_nodes[i].y;
                xx = near_nodes[i].x;
            }
        }
    }


    if(goal == 16)
        player = "r";

    if(goal == 0)
        player = "b";


    return "m " + QString(QString::number(yy)) + " " + QString(QString::number(xx)) + " " + player;
}

QString Quoridor::best_wall(int board_copy[][17], place p1, place p2, int goal){

    int longest = 0;
    int yy = 99;
    int xx = 99;
    QString hv;


//    if(p1.y > 0 && p1.x > 0 && board_copy[p1.y-2][p1.x-1] != 1 && board_copy[p1.y-1][p1.x-1] != 1 && board_copy[p1.y][p1.x-1] != 1){
//        for (int y=0; y<17; y++) {
//            for (int x=0; x<17; x++) {
//                board_copy_1[y][x] = board_copy[y][x];
//                board_copy_2[y][x] = board_copy[y][x];
//                board_copy_s[y][x] = board_copy[y][x];
//            }
//        }
//        board_copy_1[p1.y-2][p1.x-1] = 1; board_copy_1[p1.y-1][p1.x-1] = 1; board_copy_1[p1.y][p1.x-1] = 1;
//        board_copy_2[p1.y-2][p1.x-1] = 1; board_copy_2[p1.y-1][p1.x-1] = 1; board_copy_2[p1.y][p1.x-1] = 1;
//        check_placeble_1(p1.y, p1.x); check_placeble_2(p2.y, p2.x);
//        if(placeble_1 && placeble_2){
//            board_copy_s[p1.y-2][p1.x-1] = 1; board_copy_s[p1.y-1][p1.x-1] = 1; board_copy_s[p1.y][p1.x-1] = 1;
//            shortest_path(p1.y, p1.x, goal);
//            if(distance > longest){
//                longest = distance;
//                yy = p1.y-2;
//                xx = p1.x-1;
//                hv += "v";
//            }
//        }
//        placeble_1 = false; placeble_2 = false;
//    }
//    if(p1.y > 0 && p1.x < 16 && board_copy[p1.y-2][p1.x+1] != 1 && board_copy[p1.y-1][p1.x+1] != 1 && board_copy[p1.y][p1.x+1] != 1){
//        for (int y=0; y<17; y++) {
//            for (int x=0; x<17; x++) {
//                board_copy_1[y][x] = board_copy[y][x];
//                board_copy_2[y][x] = board_copy[y][x];
//                board_copy_s[y][x] = board_copy[y][x];
//            }
//        }
//        board_copy_1[p1.y-2][p1.x-1] = 1; board_copy_1[p1.y-1][p1.x-1] = 1; board_copy_1[p1.y][p1.x-1] = 1;
//        board_copy_2[p1.y-2][p1.x-1] = 1; board_copy_2[p1.y-1][p1.x-1] = 1; board_copy_2[p1.y][p1.x-1] = 1;
//        check_placeble_1(p1.y, p1.x); check_placeble_2(p2.y, p2.x);
//        if(placeble_1 && placeble_2){
//            board_copy_s[p1.y-2][p1.x+1] = 1; board_copy_s[p1.y-1][p1.x+1] = 1; board_copy_s[p1.y][p1.x+1] = 1;
//            shortest_path(p1.y, p1.x, goal);
//            if(distance > longest){
//                longest = distance;
//                yy = p1.y-2;
//                xx = p1.x+1;
//                hv = "v";
//            }
//        }
//        placeble_1 = false; placeble_2 = false;
//    }
//    if(p1.y < 16 && p1.x > 0 && board_copy[p1.y][p1.x-1] != 1 && board_copy[p1.y+1][p1.x-1] != 1 && board_copy[p1.y+2][p1.x-1] != 1){
//        for (int y=0; y<17; y++) {
//            for (int x=0; x<17; x++) {
//                board_copy_1[y][x] = board_copy[y][x];
//                board_copy_2[y][x] = board_copy[y][x];
//                board_copy_s[y][x] = board_copy[y][x];
//            }
//        }
//        board_copy_1[p1.y][p1.x-1] = 1; board_copy_1[p1.y+1][p1.x-1] = 1; board_copy_1[p1.y][p1.x-2] = 1;
//        board_copy_2[p1.y][p1.x-1] = 1; board_copy_2[p1.y+1][p1.x-1] = 1; board_copy_2[p1.y][p1.x-2] = 1;
//        check_placeble_1(p1.y, p1.x); check_placeble_2(p2.y, p2.x);
//        if(placeble_1 && placeble_2){
//            board_copy_s[p1.y][p1.x-1] = 1; board_copy_s[p1.y+1][p1.x-1] = 1; board_copy_s[p1.y][p1.x-2] = 1;
//            shortest_path(p1.y, p1.x, goal);
//            if(distance > longest){
//                longest = distance;
//                yy = p1.y;
//                xx = p1.x-1;
//                hv = "v";
//            }
//        }
//        placeble_1 = false; placeble_2 = false;
//    }
//    if(p1.y < 16 && p1.x < 16 && board_copy[p1.y][p1.x+1] != 1 && board_copy[p1.y+1][p1.x+1] != 1 && board_copy[p1.y+2][p1.x+1] != 1){
//        for (int y=0; y<17; y++) {
//            for (int x=0; x<17; x++) {
//                board_copy_1[y][x] = board_copy[y][x];
//                board_copy_2[y][x] = board_copy[y][x];
//                board_copy_s[y][x] = board_copy[y][x];
//            }
//        }
//        board_copy_1[p1.y][p1.x-1] = 1; board_copy_1[p1.y+1][p1.x-1] = 1; board_copy_1[p1.y][p1.x-2] = 1;
//        board_copy_2[p1.y][p1.x-1] = 1; board_copy_2[p1.y+1][p1.x-1] = 1; board_copy_2[p1.y][p1.x-2] = 1;
//        check_placeble_1(p1.y, p1.x); check_placeble_2(p2.y, p2.x);
//        if(placeble_1 && placeble_2){
//            board_copy_s[p1.y][p1.x-1] = 1; board_copy_s[p1.y+1][p1.x-1] = 1; board_copy_s[p1.y][p1.x-2] = 1;
//            shortest_path(p1.y, p1.x, goal);
//            if(distance > longest){
//                longest = distance;
//                yy = p1.y;
//                xx = p1.x+1;
//                hv = "v";
//            }
//        }
//        placeble_1 = false; placeble_2 = false;
//    }

//    if(p1.y > 0 && p1.x > 0 && board_copy[p1.y-1][p1.x-2] != 1 && board_copy[p1.y-1][p1.x-1] != 1 && board_copy[p1.y-1][p1.x] != 1){
//        for (int y=0; y<17; y++) {
//            for (int x=0; x<17; x++) {
//                board_copy_1[y][x] = board_copy[y][x];
//                board_copy_2[y][x] = board_copy[y][x];
//                board_copy_s[y][x] = board_copy[y][x];
//            }
//        }
//        board_copy_1[p1.y-1][p1.x-2] = 1; board_copy_1[p1.y-1][p1.x-1] = 1; board_copy_1[p1.y-1][p1.x] = 1;
//        board_copy_2[p1.y-1][p1.x-2] = 1; board_copy_2[p1.y-1][p1.x-1] = 1; board_copy_2[p1.y-1][p1.x] = 1;
//        check_placeble_1(p1.y, p1.x); check_placeble_2(p2.y, p2.x);
//        if(placeble_1 && placeble_2){
//            board_copy_s[p1.y-1][p1.x-2] = 1; board_copy_s[p1.y-1][p1.x-1] = 1; board_copy_s[p1.y-1][p1.x] = 1;
//            shortest_path(p1.y, p1.x, goal);
//            if(distance > longest){
//                longest = distance;
//                yy = p1.y-1;
//                xx = p1.x-2;
//                hv = "h";
//            }
//        }
//        placeble_1 = false; placeble_2 = false;
//    }
//    if(p1.y < 16 && p1.x > 0 && board_copy[p1.y+1][p1.x-2] != 1 && board_copy[p1.y+1][p1.x-1] != 1 && board_copy[p1.y+1][p1.x] != 1){
//        for (int y=0; y<17; y++) {
//            for (int x=0; x<17; x++) {
//                board_copy_1[y][x] = board_copy[y][x];
//                board_copy_2[y][x] = board_copy[y][x];
//                board_copy_s[y][x] = board_copy[y][x];
//            }
//        }
//        board_copy_1[p1.y-1][p1.x-2] = 1; board_copy_1[p1.y-1][p1.x-1] = 1; board_copy_1[p1.y-1][p1.x] = 1;
//        board_copy_2[p1.y-1][p1.x-2] = 1; board_copy_2[p1.y-1][p1.x-1] = 1; board_copy_2[p1.y-1][p1.x] = 1;
//        check_placeble_1(p1.y, p1.x); check_placeble_2(p2.y, p2.x);
//        if(placeble_1 && placeble_2){
//            board_copy_s[p1.y-1][p1.x-2] = 1; board_copy_s[p1.y-1][p1.x-1] = 1; board_copy_s[p1.y-1][p1.x] = 1;
//            shortest_path(p1.y, p1.x, goal);
//            if(distance > longest){
//                longest = distance;
//                yy = p1.y+1;
//                xx = p1.x-2;
//                hv = "h";
//            }
//        }
//        placeble_1 = false; placeble_2 = false;
//    }
//    if(p1.y > 0 && p1.x < 16 && board_copy[p1.y-1][p1.x] != 1 && board_copy[p1.y-1][p1.x+1] != 1 && board_copy[p1.y-1][p1.x+2] != 1){
//        for (int y=0; y<17; y++) {
//            for (int x=0; x<17; x++) {
//                board_copy_1[y][x] = board_copy[y][x];
//                board_copy_2[y][x] = board_copy[y][x];
//                board_copy_s[y][x] = board_copy[y][x];
//            }
//        }
//        board_copy_1[p1.y-1][p1.x] = 1; board_copy_1[p1.y-1][p1.x+1] = 1; board_copy_1[p1.y-1][p1.x+2] = 1;
//        board_copy_2[p1.y-1][p1.x] = 1; board_copy_2[p1.y-1][p1.x+1] = 1; board_copy_2[p1.y-1][p1.x+2] = 1;
//        check_placeble_1(p1.y, p1.x); check_placeble_2(p2.y, p2.x);
//        if(placeble_1 && placeble_2){
//            board_copy_s[p1.y-1][p1.x] = 1; board_copy_s[p1.y-1][p1.x+1] = 1; board_copy_s[p1.y-1][p1.x+2] = 1;
//            shortest_path(p1.y, p1.x, goal);
//            if(distance > longest){
//                longest = distance;
//                yy = p1.y-1;
//                xx = p1.x;
//                hv = "h";
//            }
//        }
//        placeble_1 = false; placeble_2 = false;
//    }
//    if(p1.y < 16 && p1.x < 16 &&  board_copy[p1.y+1][p1.x] != 1 && board_copy[p1.y+1][p1.x+1] != 1 && board_copy[p1.y+1][p1.x+2] != 1){
//        for (int y=0; y<17; y++) {
//            for (int x=0; x<17; x++) {
//                board_copy_1[y][x] = board_copy[y][x];
//                board_copy_2[y][x] = board_copy[y][x];
//                board_copy_s[y][x] = board_copy[y][x];
//            }
//        }
//        board_copy_1[p1.y-1][p1.x] = 1; board_copy_1[p1.y-1][p1.x-1] = 1; board_copy_1[p1.y-1][p1.x] = 1;
//        board_copy_2[p1.y-1][p1.x] = 1; board_copy_2[p1.y-1][p1.x-1] = 1; board_copy_2[p1.y-1][p1.x] = 1;
//        check_placeble_1(p1.y, p1.x); check_placeble_2(p2.y, p2.x);
//        if(placeble_1 && placeble_2){
//            board_copy_s[p1.y-1][p1.x] = 1; board_copy_s[p1.y-1][p1.x-1] = 1; board_copy_s[p1.y-1][p1.x] = 1;
//            shortest_path(p1.y, p1.x, goal);
//            if(distance > longest){
//                longest = distance;
//                yy = p1.y+1;
//                xx = p1.x;
//                hv = "h";
//            }
//        }
//        placeble_1 = false; placeble_2 = false;
//    }



    for (int y=p1.y-3; y<14; y++) {
        for (int x=p1.x-3; x<14; x++) {
            if(y >= 0 && x >= 0){
                if(y%2 == 0)
                    if(board_copy[y][x] != 1 && board_copy[y+1][x] != 1 && board_copy[y+2][x] != 1){
                        for (int y=0; y<17; y++) {
                            for (int x=0; x<17; x++) {
                                board_copy_1[y][x] = board_copy[y][x];
                                board_copy_2[y][x] = board_copy[y][x];
                                board_copy_s[y][x] = board_copy[y][x];
                            }
                        }
                        board_copy_1[y][x] = 1; board_copy_1[y+1][x] = 1; board_copy_1[y+2][x] = 1;
                        board_copy_2[y][x] = 1; board_copy_2[y+1][x] = 1; board_copy_2[y+2][x] = 1;
                        check_placeble_1(y, x); check_placeble_2(p2.y, p2.x);
                        if(placeble_1 && placeble_2){
                            board_copy_s[y][x] = 1; board_copy_s[y+1][x] = 1; board_copy_s[y+2][x] = 1;
                            shortest_path(y, x, goal);
                            if(distance > longest){
                                longest = distance;
                                yy = y;
                                xx = x;
                                hv = "v";
                            }
                        }
                        placeble_1 = false; placeble_2 = false;
                    }

                if(x%2 == 0)
                    if(board_copy[y][x] != 1 && board_copy[y][x+1] != 1 && board_copy[y][x+2] != 1){
                        for (int y=0; y<17; y++) {
                            for (int x=0; x<17; x++) {
                                board_copy_1[y][x] = board_copy[y][x];
                                board_copy_2[y][x] = board_copy[y][x];
                                board_copy_s[y][x] = board_copy[y][x];
                            }
                        }
                        board_copy_1[y][x] = 1; board_copy_1[y][x+1] = 1; board_copy_1[y+2][x+2] = 1;
                        board_copy_2[y][x] = 1; board_copy_2[y][x+1] = 1; board_copy_2[y+2][x+2] = 1;
                        check_placeble_1(y, x); check_placeble_2(p2.y, p2.x);
                        if(placeble_1 && placeble_2){
                            board_copy_s[y][x] = 1; board_copy_s[y][x+1] = 1; board_copy_s[y][x+2] = 1;
                            shortest_path(y, x, goal);
                            if(distance > longest){
                                longest = distance;
                                yy = y;
                                xx = x;
                                hv = "h";
                            }
                        }
                        placeble_1 = false; placeble_2 = false;
                    }
            }
        }
    }

    if(yy == 99 || xx == 99)
        return "e";

    return hv + " " + QString(QString::number(yy)) + " " + QString(QString::number(xx));

}
