#include "quoridor.h"
#include "ui_quoridor.h"

struct path {
    int distance;
    int final_y;
    int final_x;

    path(int dd, int yy, int xx) : distance(dd), final_y(yy), final_x(xx) {}
};

extern QList<path> paths; extern bool BLUE;
extern int board_copy_10[17][17];
extern int board_matrix[17][17];
extern QList<place> player_blue; extern QList<place> player_red;
extern int num; extern int final_position[];
int num = 999;
int board_copy_10[17][17];
int final_position[] = {0, 0};
QList<path> paths;


void Quoridor::on_pushButton_3_clicked()
{
    num = 999;

    int xx = 0; int yy = 0;

    for (int y=0; y<17; y++) {
        for (int x=0; x<17; x++) {
            board_copy_10[y][x] = board_matrix[y][x];
        }
    }

    QList<place> discovered;

    discovered.append(place(player_blue.last().y, player_blue.last().x));

    bfs(discovered, 0);

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

void Quoridor::bfs(QList<place> discovered, int n){

    if(discovered.isEmpty())
        return;

    QList<place> list;

    for(int i=0; i < discovered.size(); i++){
        if(discovered.at(i).y == 0){
            num = n; return;
        }
        find_near(discovered[i], &list);
    }

    for(int i=0; i < list.size(); i++)
        bfs(list, n++);

}

void Quoridor::find_near(place p, QList<place> *discovered){

    int up[] = {-1,-1};
    int down[] = {-1,-1};
    int left[] = {-1,-1};
    int right[] = {-1,-1};

    int jump_left[] = {-1,-1};
    int jump_right[] = {-1,-1};

    if(p.x > 0 && board_copy_10[p.y][p.x-1] != 1 && board_copy_10[p.y][p.x-2] == 0){
        left[0] = p.y; left[1] = p.x -2; board_copy_10[p.y][p.x-2] = 1;}

    if(p.y > 0  && board_copy_10[p.y-1][p.x] != 1 && board_copy_10[p.y-2][p.x] == 0){
        up[0] = p.y -2; up[1] = p.x; board_copy_10[p.y-2][p.x] = 1;}

    if(p.x < 16 && board_copy_10[p.y][p.x+1] != 1 && board_copy_10[p.y][p.x+2] == 0){
        right[0] = p.y; right[1] = p.x +2; board_copy_10[p.y][p.x+2] = 1;}

    if(p.y < 16 && board_copy_10[p.y+1][p.x] != 1 && board_copy_10[p.y+2][p.x] == 0){
        down[0] = p.y +2; down[1] = p.x; board_copy_10[p.y+2][p.x] = 1;}



    if(discovered->isEmpty()){
        if(up[0] != -1)
            discovered->append(place(up[0], up[1]));
        if(down[0] != -1)
            discovered->append(place(down[0], down[1]));
        if(left[0] != -1)
            discovered->append(place(left[0], left[1]));
        if(right[0] != -1)
            discovered->append(place(right[0], right[1]));
        if(jump_left[0] != -1)
            discovered->append(place(jump_left[0], jump_left[1]));
        if(jump_right[0] != -1)
            discovered->append(place(jump_right[0], jump_right[1]));
    }

    if(!discovered->isEmpty()){
        for (int i = 0; i < discovered->size(); i++) {
            if(up[0] != -1 && (discovered[i].at(i).y == up[0] && discovered[i].at(i).x == up[1])){
                up[0] = -1; up[1] = -1;}
            if(down[0] != -1 && (discovered[i].at(i).y == down[0] && discovered[i].at(i).x == down[1])){
                down[0] = -1; down[1] = -1;}
            if(left[0] != -1 && (discovered[i].at(i).y == left[0] && discovered[i].at(i).x == left[1])){
                left[0] = -1; left[1] = -1;}
            if(right[0] != -1 && (discovered[i].at(i).y == right[0] && discovered[i].at(i).x == right[1])){
                right[0] = -1; right[1] = -1;}
            if(jump_left[0] != -1 && (discovered[i].at(i).y == jump_left[0] && discovered[i].at(i).x == jump_left[1])){
                jump_left[0] = -1; jump_left[1] = -1;}
            if(jump_right[0] != -1 && (discovered[i].at(i).y == jump_right[0] && discovered[i].at(i).x == jump_right[1])){
                jump_right[0] = -1; jump_right[1] = -1;}
        }

        if(up[0] != -1)
            discovered->append(place(up[0], up[1]));
        if(down[0] != -1)
            discovered->append(place(down[0], down[1]));
        if(left[0] != -1)
            discovered->append(place(left[0], left[1]));
        if(right[0] != -1)
            discovered->append(place(right[0], right[1]));
        if(jump_left[0] != -1)
            discovered->append(place(jump_left[0], jump_left[1]));
        if(jump_right[0] != -1)
            discovered->append(place(jump_right[0], jump_right[1]));
    }
}
