#include "quoridor.h"
#include "ui_quoridor.h"
#include <QMouseEvent>
#include <QPainter>
#include <QList>

struct wall {
    int x;
    int y;

    wall(int xx, int yy) : x(xx), y(yy) {}
};

extern bool start; extern bool show_wall; extern bool wall_enabled;
extern int curr_position[]; extern int wall_position[];
extern int player_1[]; extern int player_2[];
extern bool p1; extern bool p2;
extern bool move_select; extern bool placeble;
extern bool vertical; extern bool horizontal;
extern QList<wall> vertical_walls; extern QList<wall> horizontal_walls;
extern QList<wall> matrix_walls;
extern int board_matrix[17][17];
bool start = false; bool show_wall = false; bool wall_enabled = false;
int curr_position[] = {-1, -1}; int wall_position[] = {-1, -1};
bool move_select = false; bool placeble = false;
int player_1[] = {16, 8}; int player_2[] = {0, 8};
bool p1 = false; bool p2 = false;
bool vertical = false; bool horizontal = false;
QList<wall> vertical_walls; QList<wall> horizontal_walls;
QList<wall> matrix_walls;
int board_matrix[17][17];


Quoridor::Quoridor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Quoridor)
{
    ui->setupUi(this);
    ui->frame_2->setVisible(false);

    for (int i=0; i < 17; i++) {
        for (int j=0; j < 17; j++) {
            board_matrix[i][j] = 0;
        }
    }

}


Quoridor::~Quoridor()
{
    delete ui;
}


void Quoridor::on_pushButton_clicked()
{
    ui->frame->setVisible(false);
    ui->frame_2->setVisible(true);
}


void Quoridor::on_pushButton_5_clicked()
{
    ui->frame->setVisible(true);
    ui->frame_2->setVisible(false);
    start = false;
}


void Quoridor::on_pushButton_3_clicked()
{
    start = true;
}

void Quoridor::on_pushButton_4_clicked()
{
    start = true;
    show_wall = true;
    wall_enabled = true;
    p1 = true;
    set_pawns(player_1[0], player_1[1], 1);
    set_pawns(player_2[0], player_2[1], 2);
    game_manager();
}

void Quoridor::game_manager()
{

    if(player_1[0] == 0){
        ui->label->setText("Player 1 wins");
        return;
    }

    if(player_2[0] == 16){
        ui->label->setText("Player 2 wins");
        return;
    }

    if(p1){
        curr_position[0] = player_1[0];
        curr_position[1] = player_1[1];
        return;
    }

    if(p2){
        curr_position[0] = player_2[0];
        curr_position[1] = player_2[1];
        return;
    }
}

void Quoridor::if_placeble(int x, int y, int board[17][17]){

    board[y][x] = 1;

    if(p1 && y == 0){
        placeble = true;
        return;
    }

    if(p2 && y == 16){
        placeble = true;
        return;
    }

    if(y > 0 && y < 16 && x > 0 && x < 16){
        if(board[y-1][x] == 0 && board[-2][x] == 0){
            board[y-2][x] = 1;
            if_placeble(y-2, x, board);
        }

        if(board[y+1][x] == 0 && board[+2][x] == 0){
            board[y+2][x] = 1;
            if_placeble(y+2, x, board);
        }

        if(board[y][x-1] == 0 && board[y][x-2] == 0){
            board[y][x-2] = 1;
            if_placeble(y, x-2, board);
        }

        if(board[y][x+1] == 0 && board[y][x+2] == 0){
            board[y][x+2] = 1;
            if_placeble(y, x+2, board);
        }
    }
}

void Quoridor::paintEvent(QPaintEvent *){

    QPainter paint(this);

    if(start){
        if(show_wall){
            if(vertical){
                paint.drawRect(wall_position[0],wall_position[1],11,111);
            }

            if(horizontal){
                paint.drawRect(wall_position[0],wall_position[1],111,11);
            }
        }

        for (int i=0; i<vertical_walls.size(); i++ ) {
            paint.fillRect(QRect(vertical_walls[i].x, vertical_walls[i].y, 11, 111), Qt::SolidPattern);

        }

        for (int i=0; i<horizontal_walls.size(); i++ ) {
            paint.fillRect(QRect(horizontal_walls[i].x, horizontal_walls[i].y, 111, 11), Qt::SolidPattern);
        }
    }

}

void Quoridor::remove_pawn(int x, int y){

    if(x == 0 && y == 0) ui->pushButton_0000->setIcon(QIcon());
    if(x == 0 && y == 2) ui->pushButton_0002->setIcon(QIcon());
    if(x == 0 && y == 4) ui->pushButton_0004->setIcon(QIcon());
    if(x == 0 && y == 6) ui->pushButton_0006->setIcon(QIcon());
    if(x == 0 && y == 8) ui->pushButton_0008->setIcon(QIcon());
    if(x == 0 && y == 10) ui->pushButton_0010->setIcon(QIcon());
    if(x == 0 && y == 12) ui->pushButton_0012->setIcon(QIcon());
    if(x == 0 && y == 14) ui->pushButton_0014->setIcon(QIcon());
    if(x == 0 && y == 16) ui->pushButton_0016->setIcon(QIcon());
    if(x == 2 && y == 0) ui->pushButton_0200->setIcon(QIcon());
    if(x == 2 && y == 2) ui->pushButton_0202->setIcon(QIcon());
    if(x == 2 && y == 4) ui->pushButton_0204->setIcon(QIcon());
    if(x == 2 && y == 6) ui->pushButton_0206->setIcon(QIcon());
    if(x == 2 && y == 8) ui->pushButton_0208->setIcon(QIcon());
    if(x == 2 && y == 10) ui->pushButton_0210->setIcon(QIcon());
    if(x == 2 && y == 12) ui->pushButton_0212->setIcon(QIcon());
    if(x == 2 && y == 14) ui->pushButton_0214->setIcon(QIcon());
    if(x == 2 && y == 16) ui->pushButton_0216->setIcon(QIcon());
    if(x == 4 && y == 0) ui->pushButton_0400->setIcon(QIcon());
    if(x == 4 && y == 2) ui->pushButton_0402->setIcon(QIcon());
    if(x == 4 && y == 4) ui->pushButton_0404->setIcon(QIcon());
    if(x == 4 && y == 6) ui->pushButton_0406->setIcon(QIcon());
    if(x == 4 && y == 8) ui->pushButton_0408->setIcon(QIcon());
    if(x == 4 && y == 10) ui->pushButton_0410->setIcon(QIcon());
    if(x == 4 && y == 12) ui->pushButton_0412->setIcon(QIcon());
    if(x == 4 && y == 14) ui->pushButton_0414->setIcon(QIcon());
    if(x == 4 && y == 16) ui->pushButton_0416->setIcon(QIcon());
    if(x == 6 && y == 0) ui->pushButton_0600->setIcon(QIcon());
    if(x == 6 && y == 2) ui->pushButton_0602->setIcon(QIcon());
    if(x == 6 && y == 4) ui->pushButton_0604->setIcon(QIcon());
    if(x == 6 && y == 6) ui->pushButton_0606->setIcon(QIcon());
    if(x == 6 && y == 8) ui->pushButton_0608->setIcon(QIcon());
    if(x == 6 && y == 10) ui->pushButton_0610->setIcon(QIcon());
    if(x == 6 && y == 12) ui->pushButton_0612->setIcon(QIcon());
    if(x == 6 && y == 14) ui->pushButton_0614->setIcon(QIcon());
    if(x == 6 && y == 16) ui->pushButton_0616->setIcon(QIcon());
    if(x == 8 && y == 0) ui->pushButton_0800->setIcon(QIcon());
    if(x == 8 && y == 2) ui->pushButton_0802->setIcon(QIcon());
    if(x == 8 && y == 4) ui->pushButton_0804->setIcon(QIcon());
    if(x == 8 && y == 6) ui->pushButton_0806->setIcon(QIcon());
    if(x == 8 && y == 8) ui->pushButton_0808->setIcon(QIcon());
    if(x == 8 && y == 10) ui->pushButton_0810->setIcon(QIcon());
    if(x == 8 && y == 12) ui->pushButton_0812->setIcon(QIcon());
    if(x == 8 && y == 14) ui->pushButton_0814->setIcon(QIcon());
    if(x == 8 && y == 16) ui->pushButton_0816->setIcon(QIcon());
    if(x == 10 && y == 0) ui->pushButton_1000->setIcon(QIcon());
    if(x == 10 && y == 2) ui->pushButton_1002->setIcon(QIcon());
    if(x == 10 && y == 4) ui->pushButton_1004->setIcon(QIcon());
    if(x == 10 && y == 6) ui->pushButton_1006->setIcon(QIcon());
    if(x == 10 && y == 8) ui->pushButton_1008->setIcon(QIcon());
    if(x == 10 && y == 10) ui->pushButton_1010->setIcon(QIcon());
    if(x == 10 && y == 12) ui->pushButton_1012->setIcon(QIcon());
    if(x == 10 && y == 14) ui->pushButton_1014->setIcon(QIcon());
    if(x == 10 && y == 16) ui->pushButton_1016->setIcon(QIcon());
    if(x == 12 && y == 0) ui->pushButton_1200->setIcon(QIcon());
    if(x == 12 && y == 2) ui->pushButton_1202->setIcon(QIcon());
    if(x == 12 && y == 4) ui->pushButton_1204->setIcon(QIcon());
    if(x == 12 && y == 6) ui->pushButton_1206->setIcon(QIcon());
    if(x == 12 && y == 8) ui->pushButton_1208->setIcon(QIcon());
    if(x == 12 && y == 10) ui->pushButton_1210->setIcon(QIcon());
    if(x == 12 && y == 12) ui->pushButton_1212->setIcon(QIcon());
    if(x == 12 && y == 14) ui->pushButton_1214->setIcon(QIcon());
    if(x == 12 && y == 16) ui->pushButton_1216->setIcon(QIcon());
    if(x == 14 && y == 0) ui->pushButton_1400->setIcon(QIcon());
    if(x == 14 && y == 2) ui->pushButton_1402->setIcon(QIcon());
    if(x == 14 && y == 4) ui->pushButton_1404->setIcon(QIcon());
    if(x == 14 && y == 6) ui->pushButton_1406->setIcon(QIcon());
    if(x == 14 && y == 8) ui->pushButton_1408->setIcon(QIcon());
    if(x == 14 && y == 10) ui->pushButton_1410->setIcon(QIcon());
    if(x == 14 && y == 12) ui->pushButton_1412->setIcon(QIcon());
    if(x == 14 && y == 14) ui->pushButton_1414->setIcon(QIcon());
    if(x == 14 && y == 16) ui->pushButton_1416->setIcon(QIcon());
    if(x == 16 && y == 0) ui->pushButton_1600->setIcon(QIcon());
    if(x == 16 && y == 2) ui->pushButton_1602->setIcon(QIcon());
    if(x == 16 && y == 4) ui->pushButton_1604->setIcon(QIcon());
    if(x == 16 && y == 6) ui->pushButton_1606->setIcon(QIcon());
    if(x == 16 && y == 8) ui->pushButton_1608->setIcon(QIcon());
    if(x == 16 && y == 10) ui->pushButton_1610->setIcon(QIcon());
    if(x == 16 && y == 12) ui->pushButton_1612->setIcon(QIcon());
    if(x == 16 && y == 14) ui->pushButton_1614->setIcon(QIcon());
    if(x == 16 && y == 16) ui->pushButton_1616->setIcon(QIcon());
}

void Quoridor::reset_buttons()
{
    move_select = false;

    ui->pushButton_0000->setEnabled(true);
    ui->pushButton_0002->setEnabled(true);
    ui->pushButton_0004->setEnabled(true);
    ui->pushButton_0006->setEnabled(true);
    ui->pushButton_0008->setEnabled(true);
    ui->pushButton_0010->setEnabled(true);
    ui->pushButton_0012->setEnabled(true);
    ui->pushButton_0014->setEnabled(true);
    ui->pushButton_0016->setEnabled(true);
    ui->pushButton_0200->setEnabled(true);
    ui->pushButton_0202->setEnabled(true);
    ui->pushButton_0204->setEnabled(true);
    ui->pushButton_0206->setEnabled(true);
    ui->pushButton_0208->setEnabled(true);
    ui->pushButton_0210->setEnabled(true);
    ui->pushButton_0212->setEnabled(true);
    ui->pushButton_0214->setEnabled(true);
    ui->pushButton_0216->setEnabled(true);
    ui->pushButton_0400->setEnabled(true);
    ui->pushButton_0402->setEnabled(true);
    ui->pushButton_0404->setEnabled(true);
    ui->pushButton_0406->setEnabled(true);
    ui->pushButton_0408->setEnabled(true);
    ui->pushButton_0410->setEnabled(true);
    ui->pushButton_0412->setEnabled(true);
    ui->pushButton_0414->setEnabled(true);
    ui->pushButton_0416->setEnabled(true);
    ui->pushButton_0600->setEnabled(true);
    ui->pushButton_0602->setEnabled(true);
    ui->pushButton_0604->setEnabled(true);
    ui->pushButton_0606->setEnabled(true);
    ui->pushButton_0608->setEnabled(true);
    ui->pushButton_0610->setEnabled(true);
    ui->pushButton_0612->setEnabled(true);
    ui->pushButton_0614->setEnabled(true);
    ui->pushButton_0616->setEnabled(true);
    ui->pushButton_0800->setEnabled(true);
    ui->pushButton_0802->setEnabled(true);
    ui->pushButton_0804->setEnabled(true);
    ui->pushButton_0806->setEnabled(true);
    ui->pushButton_0808->setEnabled(true);
    ui->pushButton_0810->setEnabled(true);
    ui->pushButton_0812->setEnabled(true);
    ui->pushButton_0814->setEnabled(true);
    ui->pushButton_0816->setEnabled(true);
    ui->pushButton_1000->setEnabled(true);
    ui->pushButton_1002->setEnabled(true);
    ui->pushButton_1004->setEnabled(true);
    ui->pushButton_1006->setEnabled(true);
    ui->pushButton_1008->setEnabled(true);
    ui->pushButton_1010->setEnabled(true);
    ui->pushButton_1012->setEnabled(true);
    ui->pushButton_1014->setEnabled(true);
    ui->pushButton_1016->setEnabled(true);
    ui->pushButton_1200->setEnabled(true);
    ui->pushButton_1202->setEnabled(true);
    ui->pushButton_1204->setEnabled(true);
    ui->pushButton_1206->setEnabled(true);
    ui->pushButton_1208->setEnabled(true);
    ui->pushButton_1210->setEnabled(true);
    ui->pushButton_1212->setEnabled(true);
    ui->pushButton_1214->setEnabled(true);
    ui->pushButton_1216->setEnabled(true);
    ui->pushButton_1400->setEnabled(true);
    ui->pushButton_1402->setEnabled(true);
    ui->pushButton_1404->setEnabled(true);
    ui->pushButton_1406->setEnabled(true);
    ui->pushButton_1408->setEnabled(true);
    ui->pushButton_1410->setEnabled(true);
    ui->pushButton_1412->setEnabled(true);
    ui->pushButton_1414->setEnabled(true);
    ui->pushButton_1416->setEnabled(true);
    ui->pushButton_1600->setEnabled(true);
    ui->pushButton_1602->setEnabled(true);
    ui->pushButton_1604->setEnabled(true);
    ui->pushButton_1606->setEnabled(true);
    ui->pushButton_1608->setEnabled(true);
    ui->pushButton_1610->setEnabled(true);
    ui->pushButton_1612->setEnabled(true);
    ui->pushButton_1614->setEnabled(true);
    ui->pushButton_1616->setEnabled(true);
}

