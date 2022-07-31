#include "quoridor.h"
#include "ui_quoridor.h"


int distance = 999; int final_y = 99; int final_x = 99;

// Calculate the shortest distance to the goal
// and determine the final position (y, x)
void Quoridor::shortest_path(place p1, place p2, int goal){

    distance = 999;
    final_y = 99;
    final_x = 99;

    QList<place> path;
    path.append(place(p1.y, p1.x));

    find_nodes(path, p2, 0, goal);
}

// Visit all reachable positions once
void Quoridor::find_nodes(QList<place> path, place p2, int n, int goal){

    if(path.isEmpty())
        return;

    QList<place> new_nodes;

    for(int i=0; i < path.size(); i++){
        QList<place> near_nodes = find_near(path[i], p2);
        if(!near_nodes.isEmpty()){

            // remove explored places
            for(int j=0; j < new_nodes.size(); j++)
                for(int i=0; i < near_nodes.size(); i++)
                    if(near_nodes[i].y == new_nodes[j].y && near_nodes[i].x == new_nodes[j].x)
                        near_nodes.removeAt(i);

            // update new_nodes
            for(int i=0; i < near_nodes.size(); i++){
                // check if reached goal
                if(near_nodes[i].y == goal){
                    final_y = near_nodes[i].y; final_x = near_nodes[i].x;
                    distance = n+1; return;}
                new_nodes.append(near_nodes[i]);
            }
        }
    }

    find_nodes(new_nodes, p2, ++n, goal);
}

// Find the next legal positions
QList<place> Quoridor::find_near(place node, place p2){

    board_copy_s[node.y][node.x] = 1;
    QList<place> near_nodes;

    int y = node.y;
    int x = node.x;
    int opp_y = 99;
    int opp_x = 99;

    int up[] = {-1,-1};
    int down[] = {-1,-1};
    int left[] = {-1,-1};
    int right[] = {-1,-1};

    int jump_left[] = {-1,-1};
    int jump_right[] = {-1,-1};

    opp_y = p2.y;
    opp_x = p2.x;


    if(x > 0 && board_copy_s[y][x-1] != 1){
        left[0] = y; left[1] = x -2;}

    if(y > 0  && board_copy_s[y-1][x] != 1){
        up[0] = y -2; up[1] = x;}

    if(x < 16 && board_copy_s[y][x+1] != 1){
        right[0] = y; right[1] = x +2;}

    if(y < 16 && board_copy_s[y+1][x] != 1){
        down[0] = y +2; down[1] = x;}



    if(y == opp_y && x-2 == opp_x && board_copy_s[y][x-1] != 1){
        left[0] = -1; left[1] = -1;
        if(board_copy_s[y][x-3] != 1 && x > 2){
            left[0] = y; left[1] = x-4;}
        if(board_copy_s[y][x-3] == 1 || x == 2){
            if(board_copy_s[y-1][x-2] != 1 && y > 0){
                jump_right[0] = y-2; jump_right[1] = x-2;}
            if(board_copy_s[y+1][x-2] != 1 && y < 16){
                jump_left[0] = y+2; jump_left[1] = x-2;}}}


    if(y-2 == opp_y && x == opp_x && board_copy_s[y-1][x] != 1){
        up[0] = -1; up[1] = -1;
        if(board_copy_s[y-3][x] != 1 && y > 2){
            up[0] = y-4; up[1] = x;}
        if(board_copy_s[y-3][x] == 1 || y == 2){
            if(board_copy_s[y-2][x+1] != 1 && x < 16){
                jump_right[0] = y-2; jump_right[1] = x+2;}
            if(board_copy_s[y-2][x-1] != 1 && x > 0){
                jump_left[0] = y-2; jump_left[1] = x-2;}}}


    if(y == opp_y && x+2 == opp_x && board_copy_s[y][x+1] != 1){
        right[0] = -1; right[1] = -1;
        if(board_copy_s[y][x+3] != 1 && x < 14){
            right[0] = y; right[1] = x+4;}
        if(board_copy_s[y][x+3] == 1 || x == 14){
            if(board_copy_s[y+1][x+2] != 1 && y < 16){
                jump_right[0] = y+2; jump_right[1] = x+2;}
            if(board_copy_s[y-1][x+2] != 1 && y > 0){
                jump_left[0] = y-2; jump_left[1] = x+2;}}}


    if(y+2 == opp_y && x == opp_x && board_copy_s[y+1][x] != 1){
        down[0] = -1; down[1] = -1;
        if(board_copy_s[y+3][x] != 1 && y < 14){
            down[0] = y+4; down[1] = x;}
        if(board_copy_s[y+3][x] == 1 || y == 14){
            if(board_copy_s[y+2][x+1] != 1 && x < 16){
                jump_right[0] = y+2; jump_right[1] = x+2;}
            if(board_copy_s[y+2][x-1] != 1 && x > 0){
                jump_left[0] = y+2; jump_left[1] = x-2;}}}


    if(up[0] != -1 && board_copy_s[up[0]][up[1]] != 1){
        near_nodes.append(place(up[0], up[1]));
    }
    if(down[0] != -1 && board_copy_s[down[0]][down[1]] != 1){
        near_nodes.append(place(down[0], down[1]));
    }
    if(left[0] != -1 && board_copy_s[left[0]][left[1]] != 1){
        near_nodes.append(place(left[0], left[1]));
    }
    if(right[0] != -1 && board_copy_s[right[0]][right[1]] != 1){
        near_nodes.append(place(right[0], right[1]));
    }
    if(jump_left[0] != -1 && board_copy_s[jump_left[0]][jump_left[1]] != 1){
        near_nodes.append(place(jump_left[0], jump_left[1]));
    }
    if(jump_right[0] != -1 && board_copy_s[jump_right[0]][jump_right[1]] != 1){
        near_nodes.append(place(jump_right[0], jump_right[1]));
    }

    return near_nodes;
}
