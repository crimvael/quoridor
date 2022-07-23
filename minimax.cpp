#include "quoridor.h"
#include "ui_quoridor.h"

extern QList<snap> IN; extern QList<snap> OUT;
extern QString mover; extern QString move1; extern QString move2;

QList<snap> IN; QList<snap> OUT;
QString mover; QString move1; QString move2;

void Quoridor::next_move(){

    snap curr(place(player_red.last().y, player_red.last().x), place(player_blue.last().y, player_blue.last().x), 16);

    for (int y=0; y < 17; y++) {
        for (int x=0; x < 17; x++) {
            curr.board[y][x] = board_matrix[y][x];
        }
    }

    curr.move = "move";
    IN.append(best_move(curr));
    move1 = "m " + QString::number(IN[0].p1.y) + " " + QString::number(IN[0].p1.x);

    curr.move = "wall";
    IN.append(best_wall(curr));
    move2 = IN[1].wall;

    int n = 0;

    while(n > 0){

        minimax();

        if (n == 1){
            evaluate();
            OUT.clear();
            break;
        }

        OUT.clear();

        n--;
    }

    //if(mover == "move")
        //next_m = move1;

    //if(mover == "wall")
        next_m = move2;

    IN.clear();

}

void Quoridor::minimax(){

    for(int x=0; x<IN.size(); x++){
        OUT.append(best_move(IN[x]));
        OUT.append(best_wall(IN[x]));
    }


    IN.clear();

    for(int x=0; x<OUT.size(); x++)
        IN.append(OUT[x]);

    return;

}

void Quoridor::evaluate(){

    QList<int> diffs;
    int dist1 = 0;
    int dist2 = 0;
    int index = 0;
    int min = 999;

    for(int x=0; x<OUT.size(); x++){

        for (int y=0; y < 17; y++) {
            for (int x=0; x < 17; x++) {
                board_copy_s[y][x] = OUT[x].board[y][x];
            }
        }

        shortest_path(OUT[x].p1, OUT[x].p2, 16);

        dist1 = distance;

        for (int y=0; y < 17; y++) {
            for (int x=0; x < 17; x++) {
                board_copy_s[y][x] = OUT[x].board[y][x];
            }
        }

        shortest_path(OUT[x].p2, OUT[x].p1, 0);

        dist2 = distance;

        diffs.append(dist1 - dist2);

    }

    for(int x=0; x<diffs.size(); x++){
        if(diffs[x] < min){
            min = diffs[x];
            index = x;
        }
    }

    mover = OUT[index].move;

}

snap Quoridor::best_move(snap s){

    QList<place> near_nodes;
    int shortest = 999;
    int yy = 99; int xx = 99;

    int up[] = {-1,-1};
    int down[] = {-1,-1};
    int left[] = {-1,-1};
    int right[] = {-1,-1};

    int jump_left[] = {-1,-1};
    int jump_right[] = {-1,-1};


    if(s.p1.x > 0 && s.board[s.p1.y][s.p1.x-1] != 1){
        left[0] = s.p1.y; left[1] = s.p1.x -2;}

    if(s.p1.y > 0  && s.board[s.p1.y-1][s.p1.x] != 1){
        up[0] = s.p1.y -2; up[1] = s.p1.x;}

    if(s.p1.x < 16 && s.board[s.p1.y][s.p1.x+1] != 1){
        right[0] = s.p1.y; right[1] = s.p1.x +2;}

    if(s.p1.y < 16 && s.board[s.p1.y+1][s.p1.x] != 1){
        down[0] = s.p1.y +2; down[1] = s.p1.x;}



    if(s.p1.y == s.p2.y && s.p1.x-2 == s.p2.x && s.board[s.p1.y][s.p1.x-1] != 1){
        left[0] = -1; left[1] = -1;
        if(s.board[s.p1.y][s.p1.x-3] != 1 && s.p1.x > 2){
            left[0] = s.p1.y; left[1] = s.p1.x-4;}
        if(s.board[s.p1.y][s.p1.x-3] == 1 && s.p1.y > 0 && s.p1.y < 16){
            if(s.board[s.p1.y-1][s.p1.x-2] != 1){
                jump_right[0] = s.p1.y-2; jump_right[1] = s.p1.x-2;}
            if(s.board[s.p1.y+1][s.p1.x-2] != 1){
                jump_left[0] = s.p1.y+2; jump_left[1] = s.p1.x-2;}}}


    if(s.p1.y-2 == s.p2.y && s.p1.x == s.p2.x && s.board[s.p1.y-1][s.p1.x] != 1){
        up[0] = -1; up[1] = -1;
        if(s.board[s.p1.y-3][s.p1.x] != 1 && s.p1.y > 2 && s.board[s.p1.y-1][s.p1.x] != 1){
            up[0] = s.p1.y-4; up[1] = s.p1.x;}
        if(s.board[s.p1.y-3][s.p1.x] == 1 && s.p1.x > 0 && s.p1.x < 16){
            if(s.board[s.p1.y-2][s.p1.x+1] != 1){
                jump_right[0] = s.p1.y-2; jump_right[1] = s.p1.x+2;}
            if(s.board[s.p1.y-2][s.p1.x-1] != 1){
                jump_left[0] = s.p1.y-2; jump_left[1] = s.p1.x-2;}}}


    if(s.p1.y == s.p2.y && s.p1.x+2 == s.p2.x && s.board[s.p1.y][s.p1.x+1] != 1){
        right[0] = -1; right[1] = -1;
        if(s.board[s.p1.y][s.p1.x+3] != 1 && s.p1.x < 14){
            right[0] = s.p1.y; right[1] = s.p1.x+4;}
        if(s.board[s.p1.y][s.p1.x+3] == 1 && s.p1.y > 0 && s.p1.y < 16){
            if(s.board[s.p1.y+1][s.p1.x+2] != 1){
                jump_right[0] = s.p1.y+2; jump_right[1] = s.p1.x+2;}
            if(s.board[s.p1.y-1][s.p1.x+2] != 1){
                jump_left[0] = s.p1.y-2; jump_left[1] = s.p1.x+2;}}}


    if(s.p1.y+2 == s.p2.y && s.p1.x == s.p2.x && s.board[s.p1.y+1][s.p1.x] != 1){
        down[0] = -1; down[1] = -1;
        if(s.board[s.p1.y+3][s.p1.x] != 1 && s.p1.y < 14){
            down[0] = s.p1.y+4; down[1] = s.p1.x;}
        if(s.board[s.p1.y+3][s.p1.x] == 1 && s.p1.x > 0 && s.p1.x < 16){
            if(s.board[s.p1.y+2][s.p1.x-1] != 1){
                jump_right[0] = s.p1.y+2; jump_right[1] = s.p1.x-2;}
            if(s.board[s.p1.y+2][s.p1.x+1] != 1){
                jump_left[0] = s.p1.y+2; jump_left[1] = s.p1.x+2;}}}


    if(up[0] != -1 && s.board[up[0]][up[1]] != 1){
        near_nodes.append(place(up[0], up[1]));
    }
    if(down[0] != -1 && s.board[down[0]][down[1]] != 1){
        near_nodes.append(place(down[0], down[1]));
    }
    if(left[0] != -1 && s.board[left[0]][left[1]] != 1){
        near_nodes.append(place(left[0], left[1]));
    }
    if(right[0] != -1 && s.board[right[0]][right[1]] != 1){
        near_nodes.append(place(right[0], right[1]));
    }
    if(jump_left[0] != -1 && s.board[jump_left[0]][jump_right[1]] != 1){
        near_nodes.append(place(jump_left[0], jump_left[1]));
    }
    if(jump_right[0] != -1 && s.board[jump_right[0]][jump_right[1]] != 1){
        near_nodes.append(place(jump_right[0], jump_right[1]));
    }


    if(!near_nodes.isEmpty()){
        for(int i=0; i < near_nodes.size(); i++){
            for (int y=0; y < 17; y++) {
                for (int x=0; x < 17; x++) {
                    board_copy_s[y][x] = s.board[y][x];
                }
            }
            shortest_path(place(near_nodes[i].y, near_nodes[i].x), s.p2, s.goal);
            if(distance < shortest){
                shortest = distance;
                yy = near_nodes[i].y;
                xx = near_nodes[i].x;
            }
        }
    }



    if(s.goal == 16){

        snap next(place(yy, xx), s.p2, 0);

        for (int y=0; y < 17; y++) {
            for (int x=0; x < 17; x++) {
                next.board[y][x] = s.board[y][x];
            }
        }

        return next;
    }

    if(s.goal == 0){

        snap next(place(yy, xx), s.p2, 16);

        for (int y=0; y < 17; y++) {
            for (int x=0; x < 17; x++) {
                next.board[y][x] = s.board[y][x];
            }
        }

        return next;
    }

    snap next(place(yy, xx), s.p2, 16);

    for (int y=0; y < 17; y++) {
        for (int x=0; x < 17; x++) {
            next.board[y][x] = s.board[y][x];
        }
    }

    return next;

}

snap Quoridor::best_wall(snap s){

    int longest = 0;
    int yy = 99;
    int xx = 99;
    int changes = 0;
    QString hv;

    for (int y=s.p1.y-6; y<15; y++) {
        for (int x=s.p1.x-6; x<15; x++) {
            if(y >= 0 && x >= 0){
                if(y%2 == 0 && x%2 != 0)
                    if(s.board[y][x] != 1 && s.board[y+1][x] != 1 && s.board[y+2][x] != 1){
                        for (int y=0; y<17; y++) {
                            for (int x=0; x<17; x++) {
                                board_copy_1[y][x] = s.board[y][x];
                                board_copy_2[y][x] = s.board[y][x];
                                board_copy_s[y][x] = s.board[y][x];
                            }
                        }
                        board_copy_1[y][x] = 1; board_copy_1[y+1][x] = 1; board_copy_1[y+2][x] = 1;
                        board_copy_2[y][x] = 1; board_copy_2[y+1][x] = 1; board_copy_2[y+2][x] = 1;
                        check_placeble_1(s.p1.y, s.p1.x); check_placeble_2(s.p2.y, s.p2.x);
                        if(placeble_1 && placeble_2){
                            board_copy_s[y][x] = 1; board_copy_s[y+1][x] = 1; board_copy_s[y+2][x] = 1;
                            shortest_path(s.p1, s.p2, s.goal);
                            if(distance > longest){
                                longest = distance;
                                yy = y;
                                xx = x;
                                hv = "v";
                                changes++;
                            }
                            placeble_1 = false; placeble_2 = false;
                        }
                    }

                if(x%2 == 0 && y%2 != 0)
                    if(s.board[y][x] != 1 && s.board[y][x+1] != 1 && s.board[y][x+2] != 1){
                        for (int y=0; y<17; y++) {
                            for (int x=0; x<17; x++) {
                                board_copy_1[y][x] = s.board[y][x];
                                board_copy_2[y][x] = s.board[y][x];
                                board_copy_s[y][x] = s.board[y][x];
                            }
                        }
                        board_copy_1[y][x] = 1; board_copy_1[y][x+1] = 1; board_copy_1[y+2][x+2] = 1;
                        board_copy_2[y][x] = 1; board_copy_2[y][x+1] = 1; board_copy_2[y+2][x+2] = 1;
                        check_placeble_1(s.p1.y, s.p1.x); check_placeble_2(s.p2.y, s.p2.x);
                        if(placeble_1 && placeble_2){
                            board_copy_s[y][x] = 1; board_copy_s[y][x+1] = 1; board_copy_s[y][x+2] = 1;
                            shortest_path(s.p1, s.p2, s.goal);
                            if(distance > longest){
                                longest = distance;
                                yy = y;
                                xx = x;
                                hv = "h";
                                changes++;
                            }
                            placeble_1 = false; placeble_2 = false;
                        }
                    }
            }
        }
    }


    if(hv == "v"){

        snap next(s.p1, s.p2, 16);

        for (int y=0; y < 17; y++) {
            for (int x=0; x < 17; x++) {
                next.board[y][x] = s.board[y][x];
            }
        }

        s.board[yy][xx] = 1; s.board[yy+1][xx] = 1; s.board[yy+2][xx] = 1;
        next.wall = hv + " " + QString::number(yy) + " " + QString::number(xx);

        return next;
    }

    if(hv == "h"){

        snap next(s.p1, s.p2, 16);

        for (int y=0; y < 17; y++) {
            for (int x=0; x < 17; x++) {
                next.board[y][x] = s.board[y][x];
            }
        }

        s.board[yy][xx] = 1; s.board[yy][xx+1] = 1; s.board[yy+2][xx+2] = 1;
        next.wall = hv + " " + QString::number(yy) + " " + QString::number(xx);

        return next;
    }

    snap next(s.p1, s.p2, 16);

    for (int y=0; y < 17; y++) {
        for (int x=0; x < 17; x++) {
            next.board[y][x] = s.board[y][x];
        }
    }

    s.board[yy][xx] = 1; s.board[yy][xx+1] = 1; s.board[yy+2][xx+2] = 1;
    next.wall = hv + " " + QString::number(yy) + " " + QString::number(xx);

    return next;

}
