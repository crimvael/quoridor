#include "quoridor.h"
#include "ui_quoridor.h"

int board_copy_3[17][17];
int distance = 999; int final_y = 99; int final_x = 99;

void Quoridor::on_pushButton_3_clicked()
{
    if(BLUE)
        shortest_path(player_blue.last().y, player_blue.last().x, 0);
    if(RED)
        shortest_path(player_red.last().y, player_red.last().x, 16);

    ui->textBrowser->setText("Shortest path: " + QString::number(distance) + \
                             "\nCoordinates: (" + QString::number(final_y) + ", " + QString::number(final_x) + ")");
}

void Quoridor::shortest_path(int y, int x, int goal){

    distance = 999;
    final_y = 99;
    final_x = 99;

    for (int y=0; y<17; y++) {
        for (int x=0; x<17; x++) {
            board_copy_3[y][x] = board_matrix[y][x];
        }
    }

    QList<place> path;
    path.append(place(y, x));

    find_nodes(path, 0, goal);
}

void Quoridor::find_nodes(QList<place> path, int n, int goal){

    if(path.isEmpty())
        return;

    QList<place> new_nodes;

    for(int i=0; i < path.size(); i++){
        QList<place> near_nodes = find_near(path[i], goal);
        if(!near_nodes.isEmpty()){

            // remove explored places
            for(int j=0; j < new_nodes.size(); j++)
                for(int i=0; i < near_nodes.size(); i++)
                    if(near_nodes[i].y == new_nodes[j].y && near_nodes[i].x == new_nodes[j].x)
                        near_nodes.removeAt(i);

            // update new_nodes
            for(int i=0; i < near_nodes.size(); i++)
                new_nodes.append(near_nodes[i]);
        }
    }

    if(!new_nodes.isEmpty()){
        for(int i=0; i < new_nodes.size(); i++)
            if(new_nodes[i].y == goal){
                final_y = new_nodes[i].y; final_x = new_nodes[i].x;
                distance = n+1; return;}
    }

    find_nodes(new_nodes, ++n, goal);
}

QList<place> Quoridor::find_near(place node, int goal){

    board_copy_3[node.y][node.x] = 1;
    QList<place> near_nodes;

    int up[] = {-1,-1};
    int down[] = {-1,-1};
    int left[] = {-1,-1};
    int right[] = {-1,-1};

    int jump_left[] = {-1,-1};
    int jump_right[] = {-1,-1};


    if(node.x > 0 && board_copy_3[node.y][node.x-1] != 1){
        left[0] = node.y; left[1] = node.x -2;}

    if(node.y > 0 && board_copy_3[node.y-1][node.x] != 1){
        up[0] = node.y -2; up[1] = node.x;}

    if(node.x < 16 && board_copy_3[node.y][node.x+1] != 1){
        right[0] = node.y; right[1] = node.x +2;}

    if(node.y < 16 && board_copy_3[node.y+1][node.x] != 1){
        down[0] = node.y +2; down[1] = node.x;}


    if(goal == 0){
        if(node.y == player_red.last().y && node.x-2 == player_red.last().x){
            left[0] = -1; left[1] = -1;
            if(board_copy_3[node.y][node.x -3] != 1 && node.x > 2){
                left[0] = node.y; left[1] = node.x -4;}
            if(board_copy_3[node.y][node.x -3] == 1 && node.y > 0 && node.y < 16){
                if(board_copy_3[node.y-1][node.x-2] != 1){
                    jump_right[0] = node.y-2; jump_right[1] = node.x-2;}
                if(board_copy_3[node.y+1][node.x-2] != 1){
                    jump_left[0] = node.y+2; jump_left[1] = node.x-2;}}}


        if(node.y-2 == player_red.last().y && node.x == player_red.last().x){
            up[0] = -1; up[1] = -1;
            if(board_copy_3[node.y-3][node.x] != 1 && node.y > 2){
                up[0] = node.y-4; up[1] = node.x;}
            if(board_copy_3[node.y-3][node.x] == 1 && node.x > 0 && node.x < 16){
                if(board_copy_3[node.y-2][node.x+1] != 1){
                    jump_right[0] = node.y-2; jump_right[1] = node.x+2;}
                if(board_copy_3[node.y-2][node.x-1] != 1){
                    jump_left[0] = node.y-2; jump_left[1] = node.x-2;}}}


        if(node.y == player_red.last().y && node.x+2 == player_red.last().x){
            right[0] = -1; right[1] = -1;
            if(board_copy_3[node.y][node.x +3] != 1 && node.x < 14){
                right[0] = node.y; right[1] = node.x +4;}
            if(board_copy_3[node.y][node.x +3] == 1 && node.y > 0 && node.y < 16){
                if(board_copy_3[node.y+1][node.x+2] != 1){
                    jump_right[0] = node.y+2; jump_right[1] = node.x+2;}
                if(board_copy_3[node.y-1][node.x+2] != 1){
                    jump_left[0] = node.y-2; jump_left[1] = node.x+2;}}}


        if(node.y+2 == player_red.last().y && node.x == player_red.last().x){
            down[0] = -1; down[1] = -1;
            if(board_copy_3[node.y+3][node.x] != 1 && node.y < 14){
                down[0] = node.y+4; down[1] = node.x;}
            if(board_copy_3[node.y+3][node.x] == 1 && node.x > 0 && node.x < 16){
                if(board_copy_3[node.y+2][node.x-1] != 1){
                    jump_right[0] = node.y+2; jump_right[1] = node.x-2;}
                if(board_copy_3[node.y+2][node.x+1] != 1){
                    jump_left[0] = node.y+2; jump_left[1] = node.x+2;}}}}

    if(goal == 16){
        if(node.y == player_blue.last().y && node.x-2 == player_blue.last().x){
            left[0] = -1; left[1] = -1;
            if(board_matrix[node.y][node.x -3] != 1 && node.x > 2){
                left[0] = node.y; left[1] = node.x -4;}
            if(board_matrix[node.y][node.x -3] == 1 && node.y > 0 && node.y < 16){
                if(board_matrix[node.y-1][node.x-2] != 1){
                    jump_right[0] = node.y-2; jump_right[1] = node.x-2;}
                if(board_matrix[node.y+1][node.x-2] != 1){
                    jump_left[0] = node.y+2; jump_left[1] = node.x-2;}}}


        if(node.y-2 == player_blue.last().y && node.x == player_blue.last().x){
            up[0] = -1; up[1] = -1;
            if(board_matrix[node.y-3][node.x] != 1 && node.y > 2){
                up[0] = node.y-4; up[1] = node.x;}
            if(board_matrix[node.y-3][node.x] == 1 && node.x > 0 && node.x < 16){
                if(board_matrix[node.y-2][node.x+1] != 1){
                    jump_right[0] = node.y-2; jump_right[1] = node.x+2;}
                if(board_matrix[node.y-2][node.x-1] != 1){
                    jump_left[0] = node.y-2; jump_left[1] = node.x-2;}}}


        if(node.y == player_blue.last().y && node.x+2 == player_blue.last().x){
            right[0] = -1; right[1] = -1;
            if(board_matrix[node.y][node.x +3] != 1 && node.x < 14){
                right[0] = node.y; right[1] = node.x +4;}
            if(board_matrix[node.y][node.x +3] == 1 && node.y > 0 && node.y < 16){
                if(board_matrix[node.y+1][node.x+2] != 1){
                    jump_right[0] = node.y+2; jump_right[1] = node.x+2;}
                if(board_matrix[node.y-1][node.x+2] != 1){
                    jump_left[0] = node.y-2; jump_left[1] = node.x+2;}}}


        if(node.y+2 == player_blue.last().y && node.x == player_blue.last().x){
            down[0] = -1; down[1] = -1;
            if(board_matrix[node.y+3][node.x] != 1 && node.y < 14){
                down[0] = node.y+4; down[1] = node.x;}
            if(board_matrix[node.y+3][node.x] == 1 && node.x > 0 && node.x < 16){
                if(board_matrix[node.y+2][node.x-1] != 1){
                    jump_right[0] = node.y+2; jump_right[1] = node.x-2;}
                if(board_matrix[node.y+2][node.x+1] != 1){
                    jump_left[0] = node.y+2; jump_left[1] = node.x+2;}}}}


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

    return near_nodes;
}
