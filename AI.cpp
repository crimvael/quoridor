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

extern QList<path> paths;
extern int board_copy_10[17][17];
extern int board_matrix[17][17];
extern QList<place> player_blue; extern int curr_position[];
extern int num; extern int final_position[]; extern bool go;
int num = 999;
int board_copy_10[17][17];
int final_position[] = {0, 0};
QList<path> paths;


void Quoridor::on_pushButton_3_clicked()
{
    num = 999;

    paths.clear();

    for (int y=0; y<17; y++) {
        for (int x=0; x<17; x++) {
            board_copy_10[y][x] = board_matrix[y][x];
        }
    }

    check_place1(player_blue.last().y, player_blue.last().x, 0);
    for (int y=0; y<17; y++) {
        for (int x=0; x<17; x++) {
            board_copy_10[y][x] = board_matrix[y][x];
        }
    }
    check_place2(player_blue.last().y, player_blue.last().x, 0);
    for (int y=0; y<17; y++) {
        for (int x=0; x<17; x++) {
            board_copy_10[y][x] = board_matrix[y][x];
        }
    }
    check_place3(player_blue.last().y, player_blue.last().x, 0);
    for (int y=0; y<17; y++) {
        for (int x=0; x<17; x++) {
            board_copy_10[y][x] = board_matrix[y][x];
        }
    }
    check_place4(player_blue.last().y, player_blue.last().x, 0);
    for (int y=0; y<17; y++) {
        for (int x=0; x<17; x++) {
            board_copy_10[y][x] = board_matrix[y][x];
        }
    }
    check_place5(player_blue.last().y, player_blue.last().x, 0);
    for (int y=0; y<17; y++) {
        for (int x=0; x<17; x++) {
            board_copy_10[y][x] = board_matrix[y][x];
        }
    }
    check_place6(player_blue.last().y, player_blue.last().x, 0);
    for (int y=0; y<17; y++) {
        for (int x=0; x<17; x++) {
            board_copy_10[y][x] = board_matrix[y][x];
        }
    }
    check_place7(player_blue.last().y, player_blue.last().x, 0);

    if(!paths.isEmpty()){
        for(int i = 0; i < paths.size(); i++)
            if(paths[i].distance < num){
                num = paths[i].distance;
                final_position[0] = paths[i].final_y;
                final_position[1] = paths[i].final_x;
            }
    }

    QString others = "";

    for(int i = 0; i < paths.size(); i++){
            others += "\nanother: " + QString::number(paths[i].distance) + " (" + \
            QString::number(paths[i].final_y) + ", " + \
            QString::number(paths[i].final_x) + ")";
        }

    ui->textBrowser->setText("Shortest path: " + QString::number(num) + "\nCoordinates: " + QString::number(final_position[0]) + " " + QString::number(final_position[1]) \
            + "\nsize: " + QString::number(paths.size())\
            + others);
}

void Quoridor::check_place1(int y, int x, int n){

    if(y == 0){
        paths.append(path(n, y, x));
        return;
    }

    n++;

    if(y < 17 && y != 0){
        if(board_copy_10[y-1][x] == 0 && board_copy_10[y-2][x] == 0){
            board_copy_10[y-2][x] = 1;
            check_place1(y-2, x, n);}}

    if(x < 17 && x != 0){
        if(board_copy_10[y][x-1] == 0 && board_copy_10[y][x-2] == 0){
            board_copy_10[y][x-2] = 1;
            check_place1(y, x-2, n);}}

    if(y > 0 && y != 16){
        if(board_copy_10[y+1][x] == 0 && board_copy_10[y+2][x] == 0){
            board_copy_10[y+2][x] = 1;
            check_place1(y+2, x, n);}}

    if(x >= 0 && x != 16){
        if(board_copy_10[y][x+1] == 0 && board_copy_10[y][x+2] == 0){
            board_copy_10[y][x+2] = 1;
            check_place1(y, x+2, n);}}
}

void Quoridor::check_place2(int y, int x, int n){

    if(y == 0){
        paths.append(path(n, y, x));
        return;
    }

    n++;

    if(y < 17 && y != 0){
        if(board_copy_10[y-1][x] == 0 && board_copy_10[y-2][x] == 0){
            board_copy_10[y-2][x] = 1;
            check_place2(y-2, x, n);}}

    if(x < 17 && x != 0){
        if(board_copy_10[y][x-1] == 0 && board_copy_10[y][x-2] == 0){
            board_copy_10[y][x-2] = 1;
            check_place2(y, x-2, n);}}

    if(x >= 0 && x != 16){
        if(board_copy_10[y][x+1] == 0 && board_copy_10[y][x+2] == 0){
        board_copy_10[y][x+2] = 1;
        check_place2(y, x+2, n);}}

    if(y > 0 && y != 16){
        if(board_copy_10[y+1][x] == 0 && board_copy_10[y+2][x] == 0){
            board_copy_10[y+2][x] = 1;
            check_place2(y+2, x, n);}}

}

void Quoridor::check_place3(int y, int x, int n){

    if(y == 0){
        paths.append(path(n, y, x));
        return;
    }

    n++;

    if(y < 17 && y != 0){
        if(board_copy_10[y-1][x] == 0 && board_copy_10[y-2][x] == 0){
            board_copy_10[y-2][x] = 1;
            check_place3(y-2, x, n);}}

    if(y > 0 && y != 16){
        if(board_copy_10[y+1][x] == 0 && board_copy_10[y+2][x] == 0){
            board_copy_10[y+2][x] = 1;
            check_place3(y+2, x, n);}}

    if(x < 17 && x != 0){
        if(board_copy_10[y][x-1] == 0 && board_copy_10[y][x-2] == 0){
            board_copy_10[y][x-2] = 1;
            check_place3(y, x-2, n);}}

    if(x >= 0 && x != 16){
        if(board_copy_10[y][x+1] == 0 && board_copy_10[y][x+2] == 0){
            board_copy_10[y][x+2] = 1;
            check_place3(y, x+2, n);}}
}

void Quoridor::check_place4(int y, int x, int n){

    if(y == 0){
        paths.append(path(n, y, x));
        return;
    }

    n++;

    if(y < 17 && y != 0){
        if(board_copy_10[y-1][x] == 0 && board_copy_10[y-2][x] == 0){
            board_copy_10[y-2][x] = 1;
            check_place4(y-2, x, n);}}

    if(y > 0 && y != 16){
        if(board_copy_10[y+1][x] == 0 && board_copy_10[y+2][x] == 0){
            board_copy_10[y+2][x] = 1;
            check_place4(y+2, x, n);}}

    if(x >= 0 && x != 16){
        if(board_copy_10[y][x+1] == 0 && board_copy_10[y][x+2] == 0){
            board_copy_10[y][x+2] = 1;
            check_place4(y, x+2, n);}}

    if(x < 17 && x != 0){
        if(board_copy_10[y][x-1] == 0 && board_copy_10[y][x-2] == 0){
            board_copy_10[y][x-2] = 1;
            check_place4(y, x-2, n);}}
}

void Quoridor::check_place5(int y, int x, int n){

    if(y == 0){
        paths.append(path(n, y, x));
        return;
    }

    n++;

    if(x < 17 && x != 0){
        if(board_copy_10[y][x-1] == 0 && board_copy_10[y][x-2] == 0){
            board_copy_10[y][x-2] = 1;
            check_place5(y, x-2, n);}}

    if(y < 17 && y != 0){
        if(board_copy_10[y-1][x] == 0 && board_copy_10[y-2][x] == 0){
            board_copy_10[y-2][x] = 1;
            check_place5(y-2, x, n);}}

    if(y > 0 && y != 16){
        if(board_copy_10[y+1][x] == 0 && board_copy_10[y+2][x] == 0){
            board_copy_10[y+2][x] = 1;
            check_place5(y+2, x, n);}}

    if(x >= 0 && x != 16){
        if(board_copy_10[y][x+1] == 0 && board_copy_10[y][x+2] == 0){
            board_copy_10[y][x+2] = 1;
            check_place5(y, x+2, n);}}

}

void Quoridor::check_place6(int y, int x, int n){

    if(y == 0){
        paths.append(path(n, y, x));
        return;
    }

    n++;

    if(x < 17 && x != 0){
        if(board_copy_10[y][x-1] == 0 && board_copy_10[y][x-2] == 0){
            board_copy_10[y][x-2] = 1;
            check_place6(y, x-2, n);}}

    if(x >= 0 && x != 16){
        if(board_copy_10[y][x+1] == 0 && board_copy_10[y][x+2] == 0){
            board_copy_10[y][x+2] = 1;
            check_place6(y, x+2, n);}}

    if(y < 17 && y != 0){
        if(board_copy_10[y-1][x] == 0 && board_copy_10[y-2][x] == 0){
            board_copy_10[y-2][x] = 1;
            check_place6(y-2, x, n);}}

    if(y > 0 && y != 16){
        if(board_copy_10[y+1][x] == 0 && board_copy_10[y+2][x] == 0){
            board_copy_10[y+2][x] = 1;
            check_place6(y+2, x, n);}}

}

void Quoridor::check_place7(int y, int x, int n){

    if(y == 0){
        paths.append(path(n, y, x));
        return;
    }

    n++;

    if(x < 17 && x != 0){
        if(board_copy_10[y][x-1] == 0 && board_copy_10[y][x-2] == 0){
            board_copy_10[y][x-2] = 1;
            check_place7(y, x-2, n);}}

    if(x >= 0 && x != 16){
        if(board_copy_10[y][x+1] == 0 && board_copy_10[y][x+2] == 0){
            board_copy_10[y][x+2] = 1;
            check_place7(y, x+2, n);}}

    if(y > 0 && y != 16){
        if(board_copy_10[y+1][x] == 0 && board_copy_10[y+2][x] == 0){
            board_copy_10[y+2][x] = 1;
            check_place7(y+2, x, n);}}

    if(y < 17 && y != 0){
        if(board_copy_10[y-1][x] == 0 && board_copy_10[y-2][x] == 0){
            board_copy_10[y-2][x] = 1;
            check_place7(y-2, x, n);}}

}
