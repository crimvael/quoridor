#include "quoridor.h"
#include "ui_quoridor.h"

extern bool h; extern bool v;
bool h = false; bool v = false;

void Quoridor::next_move(){

    QList<QString> moves1;
    QList<QString> moves2;

    QString next_move = best_move(board_matrix, 16);
    QString next_wall = best_wall(board_matrix, 0);


    int result1 = minimax(moves1, next_move, true, 5);
    int result2 = minimax(moves2, next_wall, true, 5);

    if(result1 < result2)
        QString next_move = "m ";

}

int Quoridor::minimax(QList<QString> moves, QString curr_move, bool max, int level){

    if(level == 0)
        return 0;


    int board_copy[17][17];

    for (int y=0; y < 17; y++) {
        for (int x=0; x < 17; x++) {
            board_copy[y][x] = board_matrix[y][x];
        }
    }

    if(!moves.isEmpty())
        for(int i=0; i < moves.size(); i++){
            // copy moves to matrix
        }

    QString next_move = best_move(board_copy, 16);
    QString next_wall = best_wall(board_copy, 0);

//    if(max){
//        if(h){
//            board_copy[move.y][move.x] = 1; board_copy[move.y][move.x+1] = 1; board_copy[move.y][move.x+2] = 0;
//            shortest_path(player_red.last().y, player_red.last().x, 16);
//            board_copy[move.y][move.x] = 0; board_copy[move.y][move.x+1] = 0; board_copy[move.y][move.x+2] = 0;}
//        if(v){
//            board_copy[move.y][move.x] = 1; board_copy[move.y+1][move.x] = 1; board_copy[move.y+2][move.x] = 1;
//            shortest_path(player_red.last().y, player_red.last().x, 16);
//            board_copy[move.y][move.x] = 0; board_copy[move.y+1][move.x] = 0; board_copy[move.y+2][move.x] = 0;}
//        return std::max(minimax(moves1, next_move, false, level-1), minimax(moves2, next_wall, false, level-1));
//    }
//    else{
//        if(h){
//            board_copy[move.y][move.x] = 1; board_copy[move.y][move.x+1] = 1; board_copy[move.y][move.x+2] = 0;
//            shortest_path(player_blue.last().y, player_blue.last().x, 0);
//            board_copy[move.y][move.x] = 0; board_copy[move.y][move.x+1] = 0; board_copy[move.y][move.x+2] = 0;}
//        if(v){
//            board_copy[move.y][move.x] = 1; board_copy[move.y+1][move.x] = 1; board_copy[move.y+2][move.x] = 1;
//            shortest_path(player_blue.last().y, player_blue.last().x, 0);
//            board_copy[move.y][move.x] = 0; board_copy[move.y+1][move.x] = 0; board_copy[move.y+2][move.x] = 0;}
//        return std::min(minimax(moves1, next_move, true, level-1), minimax(moves2, next_wall, true, level-1));
//    }

}

QString Quoridor::best_move(int board_copy[][17], int goal){

    QList<place> near_nodes;
    int shortest = 999;
    int yy = 99;
    int xx = 99;

    int up[] = {-1,-1};
    int down[] = {-1,-1};
    int left[] = {-1,-1};
    int right[] = {-1,-1};

    int jump_left[] = {-1,-1};
    int jump_right[] = {-1,-1};

    if(goal == 0){

        int y = player_blue.last().y;
        int x = player_blue.last().x;

        if(x > 0 && board_copy_3[y][x-1] != 1){
            left[0] = y; left[1] = x -2;}

        if(y > 0 && board_copy_3[y-1][x] != 1){
            up[0] = y -2; up[1] = x;}

        if(x < 16 && board_copy_3[y][x+1] != 1){
            right[0] = y; right[1] = x +2;}

        if(y < 16 && board_copy_3[y+1][x] != 1){
            down[0] = y +2; down[1] = x;}


        if(y == player_red.last().y && x-2 == player_red.last().x){
            left[0] = -1; left[1] = -1;
            if(board_copy_3[y][x -3] != 1 && x > 2){
                left[0] = y; left[1] = x -4;}
            if(board_copy_3[y][x -3] == 1 && y > 0 && y < 16){
                if(board_copy_3[y-1][x-2] != 1){
                    jump_right[0] = y-2; jump_right[1] = x-2;}
                if(board_copy_3[y+1][x-2] != 1){
                    jump_left[0] = y+2; jump_left[1] = x-2;}}}


        if(y-2 == player_red.last().y && x == player_red.last().x){
            up[0] = -1; up[1] = -1;
            if(board_copy_3[y-3][x] != 1 && y > 2){
                up[0] = y-4; up[1] = x;}
            if(board_copy_3[y-3][x] == 1 && x > 0 && x < 16){
                if(board_copy_3[y-2][x+1] != 1){
                    jump_right[0] = y-2; jump_right[1] = x+2;}
                if(board_copy_3[y-2][x-1] != 1){
                    jump_left[0] = y-2; jump_left[1] = x-2;}}}


        if(y == player_red.last().y && x+2 == player_red.last().x){
            right[0] = -1; right[1] = -1;
            if(board_copy_3[y][x +3] != 1 && x < 14){
                right[0] = y; right[1] = x +4;}
            if(board_copy_3[y][x +3] == 1 && y > 0 && y < 16){
                if(board_copy_3[y+1][x+2] != 1){
                    jump_right[0] = y+2; jump_right[1] = x+2;}
                if(board_copy_3[y-1][x+2] != 1){
                    jump_left[0] = y-2; jump_left[1] = x+2;}}}


        if(y+2 == player_red.last().y && x == player_red.last().x){
            down[0] = -1; down[1] = -1;
            if(board_copy_3[y+3][x] != 1 && y < 14){
                down[0] = y+4; down[1] = x;}
            if(board_copy_3[y+3][x] == 1 && x > 0 && x < 16){
                if(board_copy_3[y+2][x-1] != 1){
                    jump_right[0] = y+2; jump_right[1] = x-2;}
                if(board_copy_3[y+2][x+1] != 1){
                    jump_left[0] = y+2; jump_left[1] = x+2;}}}}

    if(goal == 16){

        int y = player_red.last().y;
        int x = player_red.last().x;

        if(x > 0 && board_copy_3[y][x-1] != 1){
            left[0] = y; left[1] = x -2;}

        if(y > 0 && board_copy_3[y-1][x] != 1){
            up[0] = y -2; up[1] = x;}

        if(x < 16 && board_copy_3[y][x+1] != 1){
            right[0] = y; right[1] = x +2;}

        if(y < 16 && board_copy_3[y+1][x] != 1){
            down[0] = y +2; down[1] = x;}


        if(y == player_blue.last().y && x-2 == player_blue.last().x){
            left[0] = -1; left[1] = -1;
            if(board_matrix[y][x -3] != 1 && x > 2){
                left[0] = y; left[1] = x -4;}
            if(board_matrix[y][x -3] == 1 && y > 0 && y < 16){
                if(board_matrix[y-1][x-2] != 1){
                    jump_right[0] = y-2; jump_right[1] = x-2;}
                if(board_matrix[y+1][x-2] != 1){
                    jump_left[0] = y+2; jump_left[1] = x-2;}}}


        if(y-2 == player_blue.last().y && x == player_blue.last().x){
            up[0] = -1; up[1] = -1;
            if(board_matrix[y-3][x] != 1 && y > 2){
                up[0] = y-4; up[1] = x;}
            if(board_matrix[y-3][x] == 1 && x > 0 && x < 16){
                if(board_matrix[y-2][x+1] != 1){
                    jump_right[0] = y-2; jump_right[1] = x+2;}
                if(board_matrix[y-2][x-1] != 1){
                    jump_left[0] = y-2; jump_left[1] = x-2;}}}


        if(y == player_blue.last().y && x+2 == player_blue.last().x){
            right[0] = -1; right[1] = -1;
            if(board_matrix[y][x +3] != 1 && x < 14){
                right[0] = y; right[1] = x +4;}
            if(board_matrix[y][x +3] == 1 && y > 0 && y < 16){
                if(board_matrix[y+1][x+2] != 1){
                    jump_right[0] = y+2; jump_right[1] = x+2;}
                if(board_matrix[y-1][x+2] != 1){
                    jump_left[0] = y-2; jump_left[1] = x+2;}}}


        if(y+2 == player_blue.last().y && x == player_blue.last().x){
            down[0] = -1; down[1] = -1;
            if(board_matrix[y+3][x] != 1 && y < 14){
                down[0] = y+4; down[1] = x;}
            if(board_matrix[y+3][x] == 1 && x > 0 && x < 16){
                if(board_matrix[y+2][x-1] != 1){
                    jump_right[0] = y+2; jump_right[1] = x-2;}
                if(board_matrix[y+2][x+1] != 1){
                    jump_left[0] = y+2; jump_left[1] = x+2;}}}}


    if(up[0] != -1 && board_copy_3[up[0]][up[1]] != 1){
        near_nodes.append(place(up[0], up[1]));
    }
    if(down[0] != -1 && board_copy_3[down[0]][down[1]] != 1){
        near_nodes.append(place(down[0], down[1]));
    }
    if(left[0] != -1 && board_copy_3[left[0]][left[1]] != 1){
        near_nodes.append(place(left[0], left[1]));
    }
    if(right[0] != -1 && board_copy_3[right[0]][right[1]] != 1){
        near_nodes.append(place(right[0], right[1]));
    }
    if(jump_left[0] != -1 && board_copy_3[jump_left[0]][jump_right[1]] != 1){
        near_nodes.append(place(jump_left[0], jump_left[1]));
    }
    if(jump_right[0] != -1 && board_copy_3[jump_right[0]][jump_right[1]] != 1){
        near_nodes.append(place(jump_right[0], jump_right[1]));
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

    return "";
}

QString Quoridor::best_wall(int board_copy[][17], int goal){

    int longest = 0;
    int yy = 0;
    int xx = 0;
    int hv = 0;

    int y = player_blue.last().y;
    int x = player_blue.last().x;


    if(y > 0 && x > 0 && board_copy_3[y-2][x-1] != 1 && board_copy_3[y-1][x-1] != 1 && board_copy_3[y][x-1] != 1){
        check_placeble_1(y-2, x-1); check_placeble_2(y-2, x-1);
        if(placeble_1 && placeble_2){
            board_copy_3[y-2][x-1] = 1; board_copy_3[y-1][x-1] = 1; board_copy_3[y][x-1] = 1;
            shortest_path(y, x, goal);
            if(distance > longest){
                longest = distance;
                yy = y-2;
                xx = x-1;
            }
            board_copy_3[y-2][x-1] = 0; board_copy_3[y-1][x-1] = 0; board_copy_3[y][x-1] = 0;
            placeble_1 = false; placeble_2 = false;
        }
    }
    if(y > 0 && x < 16 && board_copy_3[y-2][x+1] != 1 && board_copy_3[y-1][x+1] != 1 && board_copy_3[y][x+1] != 1){
        check_placeble_1(y-2, x+1); check_placeble_2(y-2, x+1);
        if(placeble_1 && placeble_2){
            board_copy_3[y-2][x+1] = 1; board_copy_3[y-1][x+1] = 1; board_copy_3[y][x+1] = 1;
            shortest_path(y, x, goal);
            if(distance > longest){
                longest = distance;
                yy = y-2;
                xx = x+1;
                hv = 2;
            }
            board_copy_3[y-2][x+1] = 1; board_copy_3[y-1][x+1] = 1; board_copy_3[y][x+1] = 1;
            placeble_1 = false; placeble_2 = false;
        }
    }
    if(y < 16 && x > 0 && board_copy_3[y][x-1] != 1 && board_copy_3[y-1][x-1] != 1 && board_copy_3[y-2][x-1] != 1){
        check_placeble_1(y, x-1); check_placeble_2(y, x-1);
        if(placeble_1 && placeble_2){
            board_copy_3[y][x-1] = 1; board_copy_3[y-1][x-1] = 1; board_copy_3[y-2][x-1] = 1;
            shortest_path(y, x, goal);
            if(distance > longest){
                longest = distance;
                yy = y;
                xx = x-1;
                hv = 2;
            }
            board_copy_3[y][x-1] = 0; board_copy_3[y-1][x-1] = 0; board_copy_3[y-2][x-1] = 0;
            placeble_1 = false; placeble_2 = false;
        }
    }
    if(y < 16 && x < 16 && board_copy_3[y][x+1] != 1 && board_copy_3[y-1][x+1] != 1 && board_copy_3[y-2][x+1] != 1){
        check_placeble_1(y, x+1); check_placeble_2(y, x+1);
        if(placeble_1 && placeble_2){
            board_copy_3[y][x+1] = 1; board_copy_3[y-1][x+1] = 1; board_copy_3[y-2][x+1] = 1;
            shortest_path(y, x, goal);
            if(distance > longest){
                longest = distance;
                yy = y;
                xx = x+1;
                hv = 2;
            }
            board_copy_3[y][x+1] = 0; board_copy_3[y-1][x+1] = 0; board_copy_3[y-2][x+1] = 0;
            placeble_1 = false; placeble_2 = false;
        }
    }

    if(y > 0 && x > 0 && board_copy_3[y-1][x-2] != 1 && board_copy_3[y-1][x-1] != 1 && board_copy_3[y-1][x] != 1){
        check_placeble_1(y-1, x-2); check_placeble_2(y-1, x-2);
        if(placeble_1 && placeble_2){
            board_copy_3[y-1][x-2] = 1; board_copy_3[y-1][x-1] = 1; board_copy_3[y-1][x] = 1;
            shortest_path(y, x, goal);
            if(distance > longest){
                longest = distance;
                yy = y-1;
                xx = x-2;
                hv = 2;
            }
            board_copy_3[y-1][x-2] = 0; board_copy_3[y-1][x-1] = 0; board_copy_3[y-1][x] = 0;
            placeble_1 = false; placeble_2 = false;
        }
    }
    if(y < 16 && x > 0 && board_copy_3[y+1][x-2] != 1 && board_copy_3[y+1][x-1] != 1 && board_copy_3[y+1][x] != 1){
        check_placeble_1(y+1, x-2); check_placeble_2(y+1, x-2);
        if(placeble_1 && placeble_2){
            board_copy_3[y+1][x-2] = 1; board_copy_3[y+1][x-1] = 1; board_copy_3[y+1][x] = 1;
            shortest_path(y, x, goal);
            if(distance > longest){
                longest = distance;
                yy = y+1;
                xx = x-2;
                hv = 1;
            }
            board_copy_3[y+1][x-2] = 0; board_copy_3[y+1][x-1] = 0; board_copy_3[y+1][x] = 0;
            placeble_1 = false; placeble_2 = false;
        }
    }
    if(y > 0 && x < 16 && board_copy_3[y-1][x] != 1 && board_copy_3[y-1][x+1] != 1 && board_copy_3[y-1][x+2] != 1){
        check_placeble_1(y-1, x); check_placeble_2(y-1, x);
        if(placeble_1 && placeble_2){
            board_copy_3[y-1][x] = 1; board_copy_3[y-1][x+1] = 1; board_copy_3[y-1][x+2] = 1;
            shortest_path(y, x, goal);
            if(distance > longest){
                longest = distance;
                yy = y-1;
                xx = x;
                hv = 1;
            }
            board_copy_3[y-1][x] = 0; board_copy_3[y-1][x+1] = 0; board_copy_3[y-1][x+2] = 0;
            placeble_1 = false; placeble_2 = false;
        }
    }
    if(y < 16 && x < 16 &&  board_copy_3[y+1][x] != 1 && board_copy_3[y+1][x+1] != 1 && board_copy_3[y+1][x+2] != 1){
        check_placeble_1(y+1, x); check_placeble_2(y+1, x);
        if(placeble_1 && placeble_2){
            board_copy_3[y+1][x] = 1; board_copy_3[y+1][x+1] = 1; board_copy_3[y+1][x+2] = 1;
            shortest_path(y, x, goal);
            if(distance > longest){
                longest = distance;
                yy = y+1;
                xx = x;
                hv = 1;
            }
            board_copy_3[y+1][x] = 0; board_copy_3[y+1][x+1] = 0; board_copy_3[y+1][x+2] = 0;
            placeble_1 = false; placeble_2 = false;
        }
    }

    if(hv == 1){
        h = true; v = false;
    }
    if(hv == 2){
        h = false; v = true;
    }

    return "";

}
