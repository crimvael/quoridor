#include "quoridor.h"
#include "ui_quoridor.h"


void Quoridor::next_move(){

    QList<snap> IN;
    QList<snap> OUT;

    for(int x=0; x<IN.size(); x++)
        minimax(IN[x]);


}

void Quoridor::minimax(snap s){



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
            shortest_path(place(near_nodes[i].y, near_nodes[i].x), p2, goal);
            if(distance < shortest){
                shortest = distance;
                yy = near_nodes[i].y;
                xx = near_nodes[i].x;
            }
        }
    }


    if(yy == 99 || xx == 99)
        return "e";

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
    int changes = 0;
    QString hv;

    for (int y=p1.y-6; y<15; y++) {
        for (int x=p1.x-6; x<15; x++) {
            if(y >= 0 && x >= 0){
                if(y%2 == 0 && x%2 != 0)
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
                        check_placeble_1(p1.y, p1.x); check_placeble_2(p2.y, p2.x);
                        if(placeble_1 && placeble_2){
                            board_copy_s[y][x] = 1; board_copy_s[y+1][x] = 1; board_copy_s[y+2][x] = 1;
                            shortest_path(p1, p2, goal);
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
                        check_placeble_1(p1.y, p1.x); check_placeble_2(p2.y, p2.x);
                        if(placeble_1 && placeble_2){
                            board_copy_s[y][x] = 1; board_copy_s[y][x+1] = 1; board_copy_s[y][x+2] = 1;
                            shortest_path(p1, p2, goal);
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

    if(yy == 99 || xx == 99 || changes < 2)
        return "e";

    return hv + " " + QString(QString::number(yy)) + " " + QString(QString::number(xx));

}
