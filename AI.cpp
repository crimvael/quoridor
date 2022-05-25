#include "quoridor.h"
#include "ui_quoridor.h"

struct place {
    int y;
    int x;

    place(int yy, int xx) : y(yy), x(xx) {}
};

extern int board_copy_1[17][17];
extern int board_matrix[17][17];
extern QList<place> player_blue; extern int curr_position[];
extern int num;
int num = 0;


void Quoridor::on_pushButton_3_clicked()
{
    for (int y=0; y<17; y++) {
        for (int x=0; x<17; x++) {
            board_copy_1[y][x] = board_matrix[y][x];
        }
    }

    check_placeble(curr_position[1], curr_position[0], 0);

    ui->textBrowser->setText("Shortest path: " + QString::number(num));

}

void Quoridor::check_placeble(int y, int x, int n){

    if(y == 0){
        num = n;
        return;
    }

    if(y < 17 && y != 0){
        if(board_copy_1[y-1][x] == 0 && board_copy_1[y-2][x] == 0){
            board_copy_1[y-2][x] = 1;
            check_placeble(y-2, x, n++);}}

    if(y >= 0 && y != 16){
        if(board_copy_1[y+1][x] == 0 && board_copy_1[y+2][x] == 0){
            board_copy_1[y+2][x] = 1;
            check_placeble(y+2, x, n++);}}

    if(x < 17 && x != 0){
        if(board_copy_1[y][x-1] == 0 && board_copy_1[y][x-2] == 0){
            board_copy_1[y][x-2] = 1;
            check_placeble(y, x-2, n++);}}

    if(x >= 0 && x != 16){
        if(board_copy_1[y][x+1] == 0 && board_copy_1[y][x+2] == 0){
            board_copy_1[y][x+2] = 1;
            check_placeble(y, x+2, n++);}}

    //return;
}
