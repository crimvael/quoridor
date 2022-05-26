#include "quoridor.h"
#include "ui_quoridor.h"

struct place {
    int y;
    int x;

    place(int yy, int xx) : y(yy), x(xx) {}
};

struct path {
    int distance;
    int final_y;
    int final_x;

    path(int dd, int yy, int xx) : distance(dd), final_y(yy), final_x(xx) {}
};

extern QList<path> paths; extern bool BLUE; extern bool RED;
extern int board_copy_10[17][17];
extern int board_matrix[17][17];
extern QList<place> player_blue; extern QList<place> player_red; extern int curr_position[];
extern int num; extern int final_position[]; extern bool go;
extern QList<place> discovered; extern QList<place> visited;
int num = 999;
int board_copy_10[17][17];
int final_position[] = {0, 0};
QList<path> paths;
QList<place> discovered; QList<place> visited;


void Quoridor::on_pushButton_3_clicked()
{
    num = 999;

    int xx = 0; int yy = 0;

    paths.clear();
    discovered.clear();
    visited.clear();

    for (int y=0; y<17; y++) {
        for (int x=0; x<17; x++) {
            board_copy_10[y][x] = board_matrix[y][x];
        }
    }

    check_place1(player_blue.last().y, player_blue.last().x, 0);

    for (int i=0; i<paths.size(); i++)
        if(paths[i].distance < num){
            num = paths[i].distance;
            yy = paths[i].final_y;
            xx = paths[i].final_x;
        }

    QString others = "";

    for(int i = 0; i < paths.size(); i++){
            others += "\nanother: " + QString::number(paths[i].distance) + " (" + \
            QString::number(paths[i].final_y) + ", " + \
            QString::number(paths[i].final_x) + ")";
        }

    ui->textBrowser->setText("Shortest path: " + QString::number(num) + "\nCoordinates: " + QString::number(yy) + " " + QString::number(xx) \
            + "\nsize: " + QString::number(paths.size())\
            + others);
}

void Quoridor::check_place1(int y, int x, int n){

    if(y == 0){
        paths.append(path(n, y, x));
        return;
    }

    board_copy_10[y][x] = 1;
    visited.append(place(y,x));
    n++;

    int up[] = {-1,-1};
    int down[] = {-1,-1};
    int left[] = {-1,-1};
    int right[] = {-1,-1};

    int jump_left[] = {-1,-1};
    int jump_right[] = {-1,-1};



    if(curr_position[1] > 0 && board_copy_10[curr_position[0]][curr_position[1]-1] != 1){
        left[0] = curr_position[0]; left[1] = curr_position[1] -2;}

    if(curr_position[0] > 0  && board_copy_10[curr_position[0]-1][curr_position[1]] != 1){
        up[0] = curr_position[0] -2; up[1] = curr_position[1];}

    if(curr_position[1] < 16 && board_copy_10[curr_position[0]][curr_position[1]+1] != 1){
        right[0] = curr_position[0]; right[1] = curr_position[1] +2;}

    if(curr_position[0] < 16 && board_copy_10[curr_position[0]+1][curr_position[1]] != 1){
        down[0] = curr_position[0] +2; down[1] = curr_position[1];}



    if(BLUE){
        if(curr_position[0] == player_red.last().y && curr_position[1]-2 == player_red.last().x){
            left[0] = -1; left[1] = -1;
            if(board_copy_10[curr_position[0]][curr_position[1] -3] != 1 && curr_position[1] > 2){
                left[0] = curr_position[0]; left[1] = curr_position[1] -4;}
            if(board_copy_10[curr_position[0]][curr_position[1] -3] == 1 && curr_position[0] > 0 && curr_position[0] < 16){
                if(board_copy_10[curr_position[0]-1][curr_position[1]-2] != 1){
                    jump_right[0] = curr_position[0]-2; jump_right[1] = curr_position[1]-2;}
                if(board_copy_10[curr_position[0]+1][curr_position[1]-2] != 1){
                    jump_left[0] = curr_position[0]+2; jump_left[1] = curr_position[1]-2;}}}


        if(curr_position[0]-2 == player_red.last().y && curr_position[1] == player_red.last().x){
            up[0] = -1; up[1] = -1;
            if(board_copy_10[curr_position[0]-3][curr_position[1]] != 1 && curr_position[0] > 2){
                up[0] = curr_position[0]-4; up[1] = curr_position[1];}
            if(board_copy_10[curr_position[0]-3][curr_position[1]] == 1 && curr_position[1] > 0 && curr_position[1] < 16){
                if(board_copy_10[curr_position[0]-2][curr_position[1]+1] != 1){
                    jump_right[0] = curr_position[0]-2; jump_right[1] = curr_position[1]+2;}
                if(board_copy_10[curr_position[0]-2][curr_position[1]-1] != 1){
                    jump_left[0] = curr_position[0]-2; jump_left[1] = curr_position[1]-2;}}}


        if(curr_position[0] == player_red.last().y && curr_position[1]+2 == player_red.last().x){
            right[0] = -1; right[1] = -1;
            if(board_copy_10[curr_position[0]][curr_position[1] +3] != 1 && curr_position[1] < 14){
                right[0] = curr_position[0]; right[1] = curr_position[1] +4;}
            if(board_copy_10[curr_position[0]][curr_position[1] +3] == 1 && curr_position[0] > 0 && curr_position[0] < 16){
                if(board_copy_10[curr_position[0]+1][curr_position[1]+2] != 1){
                    jump_right[0] = curr_position[0]+2; jump_right[1] = curr_position[1]+2;}
                if(board_copy_10[curr_position[0]-1][curr_position[1]+2] != 1){
                    jump_left[0] = curr_position[0]-2; jump_left[1] = curr_position[1]+2;}}}


        if(curr_position[0]+2 == player_red.last().y && curr_position[1] == player_red.last().x){
            down[0] = -1; down[1] = -1;
            if(board_copy_10[curr_position[0]+3][curr_position[1]] != 1 && curr_position[0] < 14){
                down[0] = curr_position[0]+4; down[1] = curr_position[1];}
            if(board_copy_10[curr_position[0]+3][curr_position[1]] == 1 && curr_position[1] > 0 && curr_position[1] < 16){
                if(board_copy_10[curr_position[0]+2][curr_position[1]-1] != 1){
                    jump_right[0] = curr_position[0]+2; jump_right[1] = curr_position[1]-2;}
                if(board_copy_10[curr_position[0]+2][curr_position[1]+1] != 1){
                    jump_left[0] = curr_position[0]+2; jump_left[1] = curr_position[1]+2;}}}}

    if(discovered.isEmpty()){
        if(up[0] != -1)
            discovered.append(place(up[0], up[1]));
        if(down[0] != -1)
            discovered.append(place(down[0], down[1]));
        if(left[0] != -1)
            discovered.append(place(left[0], left[1]));
        if(right[0] != -1)
            discovered.append(place(right[0], right[1]));
        if(jump_left[0] != -1)
            discovered.append(place(jump_left[0], jump_left[1]));
        if(jump_right[0] != -1)
            discovered.append(place(jump_right[0], jump_right[1]));

    }
    if(!discovered.isEmpty()){
        for (int i = 0; i < discovered.size(); i++) {
            if(up[0] != -1 && (discovered[i].y == up[0] && discovered[i].x == up[1])){
                up[0] = -1; up[1] = -1;}
            if(down[0] != -1 && (discovered[i].y == down[0] && discovered[i].x == down[1])){
                down[0] = -1; down[1] = -1;}
            if(left[0] != -1 && (discovered[i].y == left[0] && discovered[i].x == left[1])){
                left[0] = -1; left[1] = -1;}
            if(right[0] != -1 && (discovered[i].y == right[0] && discovered[i].x == right[1])){
                right[0] = -1; right[1] = -1;}
            if(jump_left[0] != -1 && (discovered[i].y == jump_left[0] && discovered[i].x == jump_left[1])){
                jump_left[0] = -1; jump_left[1] = -1;}
            if(jump_right[0] != -1 && (discovered[i].y == jump_right[0] && discovered[i].x == jump_right[1])){
                jump_right[0] = -1; jump_right[1] = -1;}
        }

        if(up[0] != -1)
            discovered.append(place(up[0], up[1]));
        if(down[0] != -1)
            discovered.append(place(down[0], down[1]));
        if(left[0] != -1)
            discovered.append(place(left[0], left[1]));
        if(right[0] != -1)
            discovered.append(place(right[0], right[1]));
        if(jump_left[0] != -1)
            discovered.append(place(jump_left[0], jump_left[1]));
        if(jump_right[0] != -1)
            discovered.append(place(jump_right[0], jump_right[1]));
    }

    if(!visited.isEmpty()){
        for (int j = 0; j < visited.size(); j++)
            for (int i = 0; i < discovered.size(); i++)
                if(discovered[i].y == visited[j].y && discovered[i].x == visited[j].x)
                    discovered.removeAt(i);
    }

    while (!discovered.isEmpty()){
        int yy = discovered[0].y; int xx = discovered[0].x;
        discovered.removeAt(0);
        check_place1(yy, xx, n);
    }
}
