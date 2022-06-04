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

    QString move1 = best_move(board_matrix, p1_y, p1_x, 16);
    QString move2 = best_wall(board_matrix, p2_y, p2_x, 0);

    moves1.append(move1);
    moves2.append(move2);


    if(minimax(moves1, false, 5) > minimax(moves2, false, 5))
        next_m = move1;
    else
        next_m = move2;

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
        int score_red = 1000 - distance;
        shortest_path(curr_blue_y, curr_blue_x, 0);
        int score_blue = 1000 - distance;
        return std::max(score_red, score_blue);
    }

    if(max){
        moves1.append(best_move(board_copy, curr_red_y, curr_red_x, 16));
        moves2.append(best_wall(board_copy, curr_blue_y, curr_blue_x, 0));
        return std::max(minimax(moves1, false, level-1), minimax(moves2, false, level-1));
    }
    else{
        moves1.append(best_move(board_copy, curr_blue_y, curr_blue_x, 0));
        moves2.append(best_wall(board_copy, curr_red_y, curr_red_x, 16));
        return std::min(minimax(moves1, true, level-1), minimax(moves2, true, level-1));
    }

}

QString Quoridor::best_move(int board_copy[][17], int y, int x, int goal){

    QList<place> near_nodes;
    int shortest = 999;
    int yy = 99; int xx = 99;
    QString ggg;

    int opp_y = 99;
    int opp_x = 99;

    int up[] = {-1,-1};
    int down[] = {-1,-1};
    int left[] = {-1,-1};
    int right[] = {-1,-1};

    int jump_left[] = {-1,-1};
    int jump_right[] = {-1,-1};


    if(goal == 0){
        opp_y = player_red.last().y;
        opp_x = player_red.last().x;
    }

    if(goal == 16){
        opp_y = player_blue.last().y;
        opp_x = player_blue.last().x;
    }

    if(x > 0 && board_copy[y][x-1] != 1){
        left[0] = y; left[1] = x -2;}

    if(y > 0  && board_copy[y-1][x] != 1){
        up[0] = y -2; up[1] = x;}

    if(x < 16 && board_copy[y][x+1] != 1){
        right[0] = y; right[1] = x +2;}

    if(y < 16 && board_copy[y+1][x] != 1){
        down[0] = y +2; down[1] = x;}



    if(y == opp_y && x-2 == opp_x && board_copy[y][x-1] != 1){
        left[0] = -1; left[1] = -1;
        if(board_copy[y][x-3] != 1 && x > 2){
            left[0] = y; left[1] = x-4;}
        if(board_copy[y][x-3] == 1 && y > 0 && y < 16){
            if(board_copy[y-1][x-2] != 1){
                jump_right[0] = y-2; jump_right[1] = x-2;}
            if(board_copy[y+1][x-2] != 1){
                jump_left[0] = y+2; jump_left[1] = x-2;}}}


    if(y-2 == opp_y && x == opp_x && board_copy[y-1][x] != 1){
        up[0] = -1; up[1] = -1;
        if(board_copy[y-3][x] != 1 && y > 2 && board_copy[y-1][x] != 1){
            up[0] = y-4; up[1] = x;}
        if(board_copy[y-3][x] == 1 && x > 0 && x < 16){
            if(board_copy[y-2][x+1] != 1){
                jump_right[0] = y-2; jump_right[1] = x+2;}
            if(board_copy[y-2][x-1] != 1){
                jump_left[0] = y-2; jump_left[1] = x-2;}}}


    if(y == opp_y && x+2 == opp_x && board_copy[y][x+1] != 1){
        right[0] = -1; right[1] = -1;
        if(board_copy[y][x+3] != 1 && x < 14){
            right[0] = y; right[1] = x+4;}
        if(board_copy[y][x+3] == 1 && y > 0 && y < 16){
            if(board_copy[y+1][x+2] != 1){
                jump_right[0] = y+2; jump_right[1] = x+2;}
            if(board_copy[y-1][x+2] != 1){
                jump_left[0] = y-2; jump_left[1] = x+2;}}}


    if(y+2 == opp_y && x == opp_x && board_copy[y+1][x] != 1){
        down[0] = -1; down[1] = -1;
        if(board_copy[y+3][x] != 1 && y < 14){
            down[0] = y+4; down[1] = x;}
        if(board_copy[y+3][x] == 1 && x > 0 && x < 16){
            if(board_copy[y+2][x-1] != 1){
                jump_right[0] = y+2; jump_right[1] = x-2;}
            if(board_copy[y+2][x+1] != 1){
                jump_left[0] = y+2; jump_left[1] = x+2;}}}


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


    for (int y=0; y < 17; y++) {
        for (int x=0; x < 17; x++) {
            board_copy_s[y][x] = board_copy[y][x];
        }
    }

    if(!near_nodes.isEmpty()){
        for(int i=0; i < near_nodes.size(); i++){
            shortest_path(near_nodes[i].y, near_nodes[i].x, goal);
            if(distance < shortest){
                shortest = distance;
                yy = near_nodes[i].y;
                xx = near_nodes[i].x;
            }
        }
    }


    if(goal == 16)
        ggg = "r";

    if(goal == 0)
        ggg = "b";


    return "m " + QString(QString::number(yy)) + " " + QString(QString::number(xx)) + " " + ggg;
}

QString Quoridor::best_wall(int board_copy[][17], int y, int x, int goal){

    int longest = 0;
    int yy = 99;
    int xx = 99;
    QString hv;
    int red_y = player_red.last().y;
    int red_x = player_red.last().x;


    if(y > 0 && x > 0 && board_copy[y-2][x-1] != 1 && board_copy[y-1][x-1] != 1 && board_copy[y][x-1] != 1){
        for (int y=0; y<17; y++) {
            for (int x=0; x<17; x++) {
                board_copy_1[y][x] = board_copy[y][x];
                board_copy_2[y][x] = board_copy[y][x];
                board_copy_s[y][x] = board_copy[y][x];
            }
        }
        board_copy_1[y-2][x-1] = 1; board_copy_1[y-1][x-1] = 1; board_copy_1[y][x-1] = 1;
        board_copy_2[y-2][x-1] = 1; board_copy_2[y-1][x-1] = 1; board_copy_2[y][x-1] = 1;
        check_placeble_1(y, x); check_placeble_2(red_y, red_x);
        if(placeble_1 && placeble_2){
            board_copy_s[y-2][x-1] = 1; board_copy_s[y-1][x-1] = 1; board_copy_s[y][x-1] = 1;
            shortest_path(y, x, goal);
            if(distance > longest){
                longest = distance;
                yy = y-2;
                xx = x-1;
                hv += "v";
            }
            placeble_1 = false; placeble_2 = false;
        }
    }
    if(y > 0 && x < 16 && board_copy[y-2][x+1] != 1 && board_copy[y-1][x+1] != 1 && board_copy[y][x+1] != 1){
        for (int y=0; y<17; y++) {
            for (int x=0; x<17; x++) {
                board_copy_1[y][x] = board_copy[y][x];
                board_copy_2[y][x] = board_copy[y][x];
                board_copy_s[y][x] = board_copy[y][x];
            }
        }
        board_copy_1[y-2][x-1] = 1; board_copy_1[y-1][x-1] = 1; board_copy_1[y][x-1] = 1;
        board_copy_2[y-2][x-1] = 1; board_copy_2[y-1][x-1] = 1; board_copy_2[y][x-1] = 1;
        check_placeble_1(y, x); check_placeble_2(red_y, red_x);
        if(placeble_1 && placeble_2){
            board_copy_s[y-2][x+1] = 1; board_copy_s[y-1][x+1] = 1; board_copy_s[y][x+1] = 1;
            shortest_path(y, x, goal);
            if(distance > longest){
                longest = distance;
                yy = y-2;
                xx = x+1;
                hv = "v";
            }
            placeble_1 = false; placeble_2 = false;
        }
    }
    if(y < 16 && x > 0 && board_copy[y][x-1] != 1 && board_copy[y+1][x-1] != 1 && board_copy[y+2][x-1] != 1){
        for (int y=0; y<17; y++) {
            for (int x=0; x<17; x++) {
                board_copy_1[y][x] = board_copy[y][x];
                board_copy_2[y][x] = board_copy[y][x];
                board_copy_s[y][x] = board_copy[y][x];
            }
        }
        board_copy_1[y][x-1] = 1; board_copy_1[y+1][x-1] = 1; board_copy_1[y][x-2] = 1;
        board_copy_2[y][x-1] = 1; board_copy_2[y+1][x-1] = 1; board_copy_2[y][x-2] = 1;
        check_placeble_1(y, x); check_placeble_2(red_y, red_x);
        if(placeble_1 && placeble_2){
            board_copy_s[y][x-1] = 1; board_copy_s[y+1][x-1] = 1; board_copy_s[y][x-2] = 1;
            shortest_path(y, x, goal);
            if(distance > longest){
                longest = distance;
                yy = y;
                xx = x-1;
                hv = "v";
            }
            placeble_1 = false; placeble_2 = false;
        }
    }
    if(y < 16 && x < 16 && board_copy[y][x+1] != 1 && board_copy[y+1][x+1] != 1 && board_copy[y+2][x+1] != 1){
        for (int y=0; y<17; y++) {
            for (int x=0; x<17; x++) {
                board_copy_1[y][x] = board_copy[y][x];
                board_copy_2[y][x] = board_copy[y][x];
                board_copy_s[y][x] = board_copy[y][x];
            }
        }
        board_copy_1[y][x-1] = 1; board_copy_1[y+1][x-1] = 1; board_copy_1[y][x-2] = 1;
        board_copy_2[y][x-1] = 1; board_copy_2[y+1][x-1] = 1; board_copy_2[y][x-2] = 1;
        check_placeble_1(y, x); check_placeble_2(red_y, red_x);
        if(placeble_1 && placeble_2){
            board_copy_s[y][x-1] = 1; board_copy_s[y+1][x-1] = 1; board_copy_s[y][x-2] = 1;
            shortest_path(y, x, goal);
            if(distance > longest){
                longest = distance;
                yy = y;
                xx = x+1;
                hv = "v";
            }
            placeble_1 = false; placeble_2 = false;
        }
    }

    if(y > 0 && x > 0 && board_copy[y-1][x-2] != 1 && board_copy[y-1][x-1] != 1 && board_copy[y-1][x] != 1){
        for (int y=0; y<17; y++) {
            for (int x=0; x<17; x++) {
                board_copy_1[y][x] = board_copy[y][x];
                board_copy_2[y][x] = board_copy[y][x];
                board_copy_s[y][x] = board_copy[y][x];
            }
        }
        board_copy_1[y-1][x-2] = 1; board_copy_1[y-1][x-1] = 1; board_copy_1[y-1][x] = 1;
        board_copy_2[y-1][x-2] = 1; board_copy_2[y-1][x-1] = 1; board_copy_2[y-1][x] = 1;
        board_copy_s[y-1][x-2] = 1; board_copy_s[y-1][x-1] = 1; board_copy_s[y-1][x] = 1;
        check_placeble_1(y, x); check_placeble_2(red_y, red_x);
        if(placeble_1 && placeble_2){
            shortest_path(y, x, goal);
            if(distance > longest){
                longest = distance;
                yy = y-1;
                xx = x-2;
                hv = "h";
            }
            placeble_1 = false; placeble_2 = false;
        }
    }
    if(y < 16 && x > 0 && board_copy[y+1][x-2] != 1 && board_copy[y+1][x-1] != 1 && board_copy[y+1][x] != 1){
        for (int y=0; y<17; y++) {
            for (int x=0; x<17; x++) {
                board_copy_1[y][x] = board_copy[y][x];
                board_copy_2[y][x] = board_copy[y][x];
                board_copy_s[y][x] = board_copy[y][x];
            }
        }
        board_copy_1[y-1][x-2] = 1; board_copy_1[y-1][x-1] = 1; board_copy_1[y-1][x] = 1;
        board_copy_2[y-1][x-2] = 1; board_copy_2[y-1][x-1] = 1; board_copy_2[y-1][x] = 1;
        check_placeble_1(y, x); check_placeble_2(red_y, red_x);
        if(placeble_1 && placeble_2){
            board_copy_s[y-1][x-2] = 1; board_copy_s[y-1][x-1] = 1; board_copy_s[y-1][x] = 1;
            shortest_path(y, x, goal);
            if(distance > longest){
                longest = distance;
                yy = y+1;
                xx = x-2;
                hv = "h";
            }
            placeble_1 = false; placeble_2 = false;
        }
    }
    if(y > 0 && x < 16 && board_copy[y-1][x] != 1 && board_copy[y-1][x+1] != 1 && board_copy[y-1][x+2] != 1){
        for (int y=0; y<17; y++) {
            for (int x=0; x<17; x++) {
                board_copy_1[y][x] = board_copy[y][x];
                board_copy_2[y][x] = board_copy[y][x];
                board_copy_s[y][x] = board_copy[y][x];
            }
        }
        board_copy_1[y-1][x] = 1; board_copy_1[y-1][x+1] = 1; board_copy_1[y-1][x+2] = 1;
        board_copy_2[y-1][x] = 1; board_copy_2[y-1][x+1] = 1; board_copy_2[y-1][x+2] = 1;
        check_placeble_1(y, x); check_placeble_2(red_y, red_x);
        if(placeble_1 && placeble_2){
            board_copy_s[y-1][x] = 1; board_copy_s[y-1][x+1] = 1; board_copy_s[y-1][x+2] = 1;
            shortest_path(y, x, goal);
            if(distance > longest){
                longest = distance;
                yy = y-1;
                xx = x;
                hv = "h";
            }
            placeble_1 = false; placeble_2 = false;
        }
    }
    if(y < 16 && x < 16 &&  board_copy[y+1][x] != 1 && board_copy[y+1][x+1] != 1 && board_copy[y+1][x+2] != 1){
        for (int y=0; y<17; y++) {
            for (int x=0; x<17; x++) {
                board_copy_1[y][x] = board_copy[y][x];
                board_copy_2[y][x] = board_copy[y][x];
                board_copy_s[y][x] = board_copy[y][x];
            }
        }
        board_copy_1[y-1][x] = 1; board_copy_1[y-1][x-1] = 1; board_copy_1[y-1][x] = 1;
        board_copy_2[y-1][x] = 1; board_copy_2[y-1][x-1] = 1; board_copy_2[y-1][x] = 1;
        check_placeble_1(y, x); check_placeble_2(red_y, red_x);
        if(placeble_1 && placeble_2){
            board_copy_s[y-1][x] = 1; board_copy_s[y-1][x-1] = 1; board_copy_s[y-1][x] = 1;
            shortest_path(y, x, goal);
            if(distance > longest){
                longest = distance;
                yy = y+1;
                xx = x;
                hv = "h";
            }
            placeble_1 = false; placeble_2 = false;
        }
    }

    return hv + " " + QString(QString::number(yy)) + " " + QString(QString::number(xx));

}
