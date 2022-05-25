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

struct place {
    int y;
    int x;

    place(int yy, int xx) : y(yy), x(xx) {}
};

extern bool start; extern bool show_wall; extern bool wall_enabled;
extern int curr_position[]; extern int wall_position[];
extern QList<place> player_blue; extern QList<place> player_red;
extern bool BLUE; extern bool RED;
extern int walls_blue; extern int walls_red;
extern bool move_select; extern bool placeble;
extern bool vertical; extern bool horizontal;
extern QList<wall> vertical_walls; extern QList<wall> horizontal_walls; extern QList<QString> moves;
extern int board_matrix[17][17]; extern int board_copy_1[17][17]; extern int board_copy_2[17][17];
bool start = false; bool show_wall = false; bool wall_enabled = false;
int curr_position[] = {-1, -1}; int wall_position[] = {-1, -1};
bool move_select = false; bool placeble_1 = false; bool placeble_2 = false;
QList<place> player_blue; QList<place> player_red;
bool BLUE = false; bool RED = false;
int walls_blue = 10; int walls_red = 10;
bool vertical = false; bool horizontal = false;
QList<wall> vertical_walls; QList<wall> horizontal_walls; QList<QString> moves;
int board_matrix[17][17]; int board_copy_1[17][17]; int board_copy_2[17][17];


Quoridor::Quoridor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Quoridor)
{
    ui->setupUi(this);

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

void Quoridor::on_radioButton_clicked()
{
    ui->radioButton_2->setChecked(false);
}


void Quoridor::on_radioButton_2_clicked()
{
    ui->radioButton->setChecked(false);
}


void Quoridor::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked())
    {}
    if(ui->radioButton_2->isChecked()){

        if(!player_blue.isEmpty()){
            remove_pawn(player_blue.last().y, player_blue.last().x);
            player_blue.clear();
        }
        if(!player_red.isEmpty()){
            remove_pawn(player_red.last().y, player_red.last().x);
            player_red.clear();
        }
        if(!vertical_walls.isEmpty())
            vertical_walls.clear();
        if(!horizontal_walls.isEmpty())
            horizontal_walls.clear();
        if(!moves.isEmpty())
            moves.clear();

        walls_blue = 10;
        walls_red = 10;

        for (int i=0; i < 17; i++) {
            for (int j=0; j < 17; j++) {
                board_matrix[i][j] = 0;
            }
        }


        start = true;
        show_wall = true;
        wall_enabled = true;
        BLUE = true;
        set_players(0, 8, 2);
        set_players(16, 8, 1);
        player_red.append(place(0, 8));
        player_blue.append(place(16, 8));
        moves.append("m 1");
        moves.append("m 2");
        game_manager();
    }
}


void Quoridor::game_manager()
{

    QString status = "";
    QString walls_b = "<br><span style='color: blue'>BLUE</span> walls: ";
    QString walls_r = "<br><span style='color: red'>RED</span> walls: ";
    QString winner = "";

    walls_b += QString(QString::number(walls_blue)) += "</br>";
    walls_r += QString(QString::number(walls_red)) += "</br>";


    if(BLUE){
        curr_position[0] = player_blue.last().y;
        curr_position[1] = player_blue.last().x;
        status = "Current player: <span style='color: blue'>BLUE</span>";
    }

    if(RED){
        curr_position[0] = player_red.last().y;
        curr_position[1] = player_red.last().x;
        status = "Current player: <span style='color: red'>RED</span>";
    }

    if(player_blue.last().y == 0){
        winner = "<br><span style='color: blue'>BLUE</span> wins!</br>";
        start = false;
    }

    if(player_red.last().y == 16){
        winner = "<br><span style='color: red'>RED</span> wins!</br>";
        start = false;
    }

    ui->textBrowser->setText(status + walls_r + walls_b + winner);

}

void Quoridor::check_placeble_1(int y, int x){

    if(y == 0){
        placeble_1 = true;
        return;
    }

    if(y < 17 && y != 0){
        if(board_copy_1[y-1][x] == 0 && board_copy_1[y-2][x] == 0){
            board_copy_1[y-2][x] = 1;
            check_placeble_1(y-2, x);}}

    if(y >= 0 && y != 16){
        if(board_copy_1[y+1][x] == 0 && board_copy_1[y+2][x] == 0){
            board_copy_1[y+2][x] = 1;
            check_placeble_1(y+2, x);}}

    if(x < 17&& x != 0){
        if(board_copy_1[y][x-1] == 0 && board_copy_1[y][x-2] == 0){
            board_copy_1[y][x-2] = 1;
            check_placeble_1(y, x-2);}}

    if(x >= 0 && x != 16){
        if(board_copy_1[y][x+1] == 0 && board_copy_1[y][x+2] == 0){
            board_copy_1[y][x+2] = 1;
            check_placeble_1(y, x+2);}}

    return;
}

void Quoridor::check_placeble_2(int y, int x){

    if(y == 16){
        placeble_2 = true;
        return;
    }

    if(y < 17 && y != 0){

        if(board_copy_2[y-1][x] == 0 && board_copy_2[y-2][x] == 0){
            board_copy_2[y-2][x] = 1;
            check_placeble_2(y-2, x);}}

    if(y >= 0 && y != 16){
        if(board_copy_2[y+1][x] == 0 && board_copy_2[y+2][x] == 0){
            board_copy_2[y+2][x] = 1;
            check_placeble_2(y+2, x);}}

    if(x < 17 && x != 0){
        if(board_copy_2[y][x-1] == 0 && board_copy_2[y][x-2] == 0){
            board_copy_2[y][x-2] = 1;
            check_placeble_2(y, x-2);}}

    if(x >= 0 && x != 16){
        if(board_copy_2[y][x+1] == 0 && board_copy_2[y][x+2] == 0){
            board_copy_2[y][x+2] = 1;
            check_placeble_2(y, x+2);}}

    return;
}

void Quoridor::paintEvent(QPaintEvent *){

    QPainter paint(this);

    if(start){
        if(show_wall){
            if(vertical){
                paint.drawRect(wall_position[0],wall_position[1],11,111);}

            if(horizontal){
                paint.drawRect(wall_position[0],wall_position[1],111,11);}}

        for (int i=0; i<vertical_walls.size(); i++ ) {
            paint.fillRect(QRect(vertical_walls[i].x, vertical_walls[i].y, 11, 111), Qt::SolidPattern);}

        for (int i=0; i<horizontal_walls.size(); i++ ) {
            paint.fillRect(QRect(horizontal_walls[i].x, horizontal_walls[i].y, 111, 11), Qt::SolidPattern);}}

}

void Quoridor::on_pushButton_2_clicked()
{
    if(start){
        if(moves.length() > 2){

            if(moves.last().at(0) == 'v'){
                int y = moves.last().split(QChar(' ')).at(1).toInt();
                int x = moves.last().split(QChar(' ')).at(2).toInt();
                board_matrix[y][x] = 0; board_matrix[y+1][x] = 0; board_matrix[y+2][x] = 0;
                vertical_walls.removeLast(); update();
                if(BLUE){BLUE = false; RED = true; walls_red++; game_manager(); moves.removeLast(); return;}
                if(RED){BLUE = true; RED = false; walls_blue++; game_manager(); moves.removeLast(); return;}}
            if(moves.last().at(0) == 'h'){
                int y = moves.last().split(QChar(' ')).at(1).toInt();
                int x = moves.last().split(QChar(' ')).at(2).toInt();
                board_matrix[y][x] = 0; board_matrix[y][x+1] = 0; board_matrix[y][x+2] = 0;
                horizontal_walls.removeLast(); update();
                if(BLUE){BLUE = false; RED = true; walls_red++; game_manager(); moves.removeLast(); return;}
                if(RED){BLUE = true; RED = false; walls_blue++; game_manager(); moves.removeLast(); return;}}
            if(moves.last().at(0) == 'm'){
                if(moves.last().at(2) == '1'){
                    remove_pawn(player_blue.last().y, player_blue.last().x);
                    set_players(player_blue[player_blue.length()-2].y, player_blue[player_blue.length()-2].x, 1);
                    BLUE = true; RED = false;
                    player_blue.removeLast();
                    game_manager();}
                if(moves.last().at(2) == '2'){
                    remove_pawn(player_red.last().y, player_red.last().x);
                    set_players(player_red[player_red.length()-2].y, player_red[player_red.length()-2].x, 2);
                    BLUE = false; RED = true;
                    player_red.removeLast();
                    game_manager();}}

            moves.removeLast();
        }
    }

    return;
}

void Quoridor::remove_pawn(int y, int x){

    if(y == 0 && x == 0) ui->pushButton_0000->setIcon(QIcon());
    if(y == 0 && x == 2) ui->pushButton_0002->setIcon(QIcon());
    if(y == 0 && x == 4) ui->pushButton_0004->setIcon(QIcon());
    if(y == 0 && x == 6) ui->pushButton_0006->setIcon(QIcon());
    if(y == 0 && x == 8) ui->pushButton_0008->setIcon(QIcon());
    if(y == 0 && x == 10) ui->pushButton_0010->setIcon(QIcon());
    if(y == 0 && x == 12) ui->pushButton_0012->setIcon(QIcon());
    if(y == 0 && x == 14) ui->pushButton_0014->setIcon(QIcon());
    if(y == 0 && x == 16) ui->pushButton_0016->setIcon(QIcon());
    if(y == 2 && x == 0) ui->pushButton_0200->setIcon(QIcon());
    if(y == 2 && x == 2) ui->pushButton_0202->setIcon(QIcon());
    if(y == 2 && x == 4) ui->pushButton_0204->setIcon(QIcon());
    if(y == 2 && x == 6) ui->pushButton_0206->setIcon(QIcon());
    if(y == 2 && x == 8) ui->pushButton_0208->setIcon(QIcon());
    if(y == 2 && x == 10) ui->pushButton_0210->setIcon(QIcon());
    if(y == 2 && x == 12) ui->pushButton_0212->setIcon(QIcon());
    if(y == 2 && x == 14) ui->pushButton_0214->setIcon(QIcon());
    if(y == 2 && x == 16) ui->pushButton_0216->setIcon(QIcon());
    if(y == 4 && x == 0) ui->pushButton_0400->setIcon(QIcon());
    if(y == 4 && x == 2) ui->pushButton_0402->setIcon(QIcon());
    if(y == 4 && x == 4) ui->pushButton_0404->setIcon(QIcon());
    if(y == 4 && x == 6) ui->pushButton_0406->setIcon(QIcon());
    if(y == 4 && x == 8) ui->pushButton_0408->setIcon(QIcon());
    if(y == 4 && x == 10) ui->pushButton_0410->setIcon(QIcon());
    if(y == 4 && x == 12) ui->pushButton_0412->setIcon(QIcon());
    if(y == 4 && x == 14) ui->pushButton_0414->setIcon(QIcon());
    if(y == 4 && x == 16) ui->pushButton_0416->setIcon(QIcon());
    if(y == 6 && x == 0) ui->pushButton_0600->setIcon(QIcon());
    if(y == 6 && x == 2) ui->pushButton_0602->setIcon(QIcon());
    if(y == 6 && x == 4) ui->pushButton_0604->setIcon(QIcon());
    if(y == 6 && x == 6) ui->pushButton_0606->setIcon(QIcon());
    if(y == 6 && x == 8) ui->pushButton_0608->setIcon(QIcon());
    if(y == 6 && x == 10) ui->pushButton_0610->setIcon(QIcon());
    if(y == 6 && x == 12) ui->pushButton_0612->setIcon(QIcon());
    if(y == 6 && x == 14) ui->pushButton_0614->setIcon(QIcon());
    if(y == 6 && x == 16) ui->pushButton_0616->setIcon(QIcon());
    if(y == 8 && x == 0) ui->pushButton_0800->setIcon(QIcon());
    if(y == 8 && x == 2) ui->pushButton_0802->setIcon(QIcon());
    if(y == 8 && x == 4) ui->pushButton_0804->setIcon(QIcon());
    if(y == 8 && x == 6) ui->pushButton_0806->setIcon(QIcon());
    if(y == 8 && x == 8) ui->pushButton_0808->setIcon(QIcon());
    if(y == 8 && x == 10) ui->pushButton_0810->setIcon(QIcon());
    if(y == 8 && x == 12) ui->pushButton_0812->setIcon(QIcon());
    if(y == 8 && x == 14) ui->pushButton_0814->setIcon(QIcon());
    if(y == 8 && x == 16) ui->pushButton_0816->setIcon(QIcon());
    if(y == 10 && x == 0) ui->pushButton_1000->setIcon(QIcon());
    if(y == 10 && x == 2) ui->pushButton_1002->setIcon(QIcon());
    if(y == 10 && x == 4) ui->pushButton_1004->setIcon(QIcon());
    if(y == 10 && x == 6) ui->pushButton_1006->setIcon(QIcon());
    if(y == 10 && x == 8) ui->pushButton_1008->setIcon(QIcon());
    if(y == 10 && x == 10) ui->pushButton_1010->setIcon(QIcon());
    if(y == 10 && x == 12) ui->pushButton_1012->setIcon(QIcon());
    if(y == 10 && x == 14) ui->pushButton_1014->setIcon(QIcon());
    if(y == 10 && x == 16) ui->pushButton_1016->setIcon(QIcon());
    if(y == 12 && x == 0) ui->pushButton_1200->setIcon(QIcon());
    if(y == 12 && x == 2) ui->pushButton_1202->setIcon(QIcon());
    if(y == 12 && x == 4) ui->pushButton_1204->setIcon(QIcon());
    if(y == 12 && x == 6) ui->pushButton_1206->setIcon(QIcon());
    if(y == 12 && x == 8) ui->pushButton_1208->setIcon(QIcon());
    if(y == 12 && x == 10) ui->pushButton_1210->setIcon(QIcon());
    if(y == 12 && x == 12) ui->pushButton_1212->setIcon(QIcon());
    if(y == 12 && x == 14) ui->pushButton_1214->setIcon(QIcon());
    if(y == 12 && x == 16) ui->pushButton_1216->setIcon(QIcon());
    if(y == 14 && x == 0) ui->pushButton_1400->setIcon(QIcon());
    if(y == 14 && x == 2) ui->pushButton_1402->setIcon(QIcon());
    if(y == 14 && x == 4) ui->pushButton_1404->setIcon(QIcon());
    if(y == 14 && x == 6) ui->pushButton_1406->setIcon(QIcon());
    if(y == 14 && x == 8) ui->pushButton_1408->setIcon(QIcon());
    if(y == 14 && x == 10) ui->pushButton_1410->setIcon(QIcon());
    if(y == 14 && x == 12) ui->pushButton_1412->setIcon(QIcon());
    if(y == 14 && x == 14) ui->pushButton_1414->setIcon(QIcon());
    if(y == 14 && x == 16) ui->pushButton_1416->setIcon(QIcon());
    if(y == 16 && x == 0) ui->pushButton_1600->setIcon(QIcon());
    if(y == 16 && x == 2) ui->pushButton_1602->setIcon(QIcon());
    if(y == 16 && x == 4) ui->pushButton_1604->setIcon(QIcon());
    if(y == 16 && x == 6) ui->pushButton_1606->setIcon(QIcon());
    if(y == 16 && x == 8) ui->pushButton_1608->setIcon(QIcon());
    if(y == 16 && x == 10) ui->pushButton_1610->setIcon(QIcon());
    if(y == 16 && x == 12) ui->pushButton_1612->setIcon(QIcon());
    if(y == 16 && x == 14) ui->pushButton_1614->setIcon(QIcon());
    if(y == 16 && x == 16) ui->pushButton_1616->setIcon(QIcon());
}

void Quoridor::reset_buttons()
{
    move_select = false;

    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
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


