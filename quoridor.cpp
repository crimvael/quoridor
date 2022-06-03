#include "quoridor.h"
#include "ui_quoridor.h"
#include <QMouseEvent>
#include <QPainter>
#include <QList>

extern bool ai;
bool start = false; bool show_wall = false; bool wall_enabled = false;
int curr_position[] = {-1, -1}; int wall_position[] = {-1, -1};
bool move_select = false; bool placeble_1 = false; bool placeble_2 = false;
QList<place> player_blue; QList<place> player_red;
bool BLUE = false; bool RED = false;
int walls_blue = 10; int walls_red = 10;
bool vertical = false; bool horizontal = false;
QList<wall> vertical_walls; QList<wall> horizontal_walls; QList<QString> moves;
int board_matrix[17][17]; int board_copy_1[17][17]; int board_copy_2[17][17];
bool ai = false;

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
    if(ui->radioButton->isChecked()){
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

        ai = true;
        start = true;
        show_wall = true;
        wall_enabled = true;
        BLUE = true;
        RED = false;
        set_players(0, 8, 2);
        set_players(16, 8, 1);
        player_red.append(place(0, 8));
        player_blue.append(place(16, 8));
        moves.append("m 1");
        moves.append("m 2");
        game_manager();

    }

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
        RED = false;
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



void Quoridor::on_pushButton_4_clicked()
{
    if(RED && ai){
        next_move();
        int y = next_m.split(QChar(' ')).at(1).toInt();
        int x = next_m.split(QChar(' ')).at(2).toInt();

        if(next_m.at(0) == 'm'){
            remove_pawn(curr_position[0], curr_position[1]);
            set_players(y, x, 2);
            moves.append("m 2");
            player_red.append(place(y, x));
        }

        if(next_m.at(0) == 'v'){
            add_wall(next_m);
        }

        if(next_m.at(0) == 'h'){
            add_wall(next_m);
        }

        RED = false; BLUE = true; game_manager(); update();


        ui->textBrowser->setText("Next move: " + next_m);
    }
}

void Quoridor::add_wall(QString walls){


    if(walls.split(QChar(' ')).at(1).toInt() == 0 && walls.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[0][1] = 1; board_matrix[0+1][1] = 1; board_matrix[0+2][1] = 1;
        vertical_walls.append(wall(65+2, 15+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 0 && walls.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[0][3] = 1; board_matrix[0+1][3] = 1; board_matrix[0+2][3] = 1;
        vertical_walls.append(wall(130+2, 15+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 0 && walls.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[0][5] = 1; board_matrix[0+1][5] = 1; board_matrix[0+2][5] = 1;
        vertical_walls.append(wall(195+2, 15+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 0 && walls.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[0][7] = 1; board_matrix[0+1][7] = 1; board_matrix[0+2][7] = 1;
        vertical_walls.append(wall(260+2, 15+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 0 && walls.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[0][9] = 1; board_matrix[0+1][9] = 1; board_matrix[0+2][9] = 1;
        vertical_walls.append(wall(325+2, 15+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 0 && walls.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[0][11] = 1; board_matrix[0+1][11] = 1; board_matrix[0+2][11] = 1;
        vertical_walls.append(wall(390+2, 15+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 0 && walls.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[0][13] = 1; board_matrix[0+1][13] = 1; board_matrix[0+2][13] = 1;
        vertical_walls.append(wall(455+2, 15+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 0 && walls.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[0][15] = 1; board_matrix[0+1][15] = 1; board_matrix[0+2][15] = 1;
        vertical_walls.append(wall(520+2, 15+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 2 && walls.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[2][1] = 1; board_matrix[2+1][1] = 1; board_matrix[2+2][1] = 1;
        vertical_walls.append(wall(65+2, 80+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 2 && walls.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[2][3] = 1; board_matrix[2+1][3] = 1; board_matrix[2+2][3] = 1;
        vertical_walls.append(wall(130+2, 80+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 2 && walls.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[2][5] = 1; board_matrix[2+1][5] = 1; board_matrix[2+2][5] = 1;
        vertical_walls.append(wall(195+2, 80+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 2 && walls.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[2][7] = 1; board_matrix[2+1][7] = 1; board_matrix[2+2][7] = 1;
        vertical_walls.append(wall(260+2, 80+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 2 && walls.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[2][9] = 1; board_matrix[2+1][9] = 1; board_matrix[2+2][9] = 1;
        vertical_walls.append(wall(325+2, 80+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 2 && walls.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[2][11] = 1; board_matrix[2+1][11] = 1; board_matrix[2+2][11] = 1;
        vertical_walls.append(wall(390+2, 80+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 2 && walls.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[2][13] = 1; board_matrix[2+1][13] = 1; board_matrix[2+2][13] = 1;
        vertical_walls.append(wall(455+2, 80+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 2 && walls.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[2][15] = 1; board_matrix[2+1][15] = 1; board_matrix[2+2][15] = 1;
        vertical_walls.append(wall(520+2, 80+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 4 && walls.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[4][1] = 1; board_matrix[4+1][1] = 1; board_matrix[4+2][1] = 1;
        vertical_walls.append(wall(65+2, 145+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 4 && walls.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[4][3] = 1; board_matrix[4+1][3] = 1; board_matrix[4+2][3] = 1;
        vertical_walls.append(wall(130+2, 145+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 4 && walls.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[4][5] = 1; board_matrix[4+1][5] = 1; board_matrix[4+2][5] = 1;
        vertical_walls.append(wall(195+2, 145+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 4 && walls.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[4][7] = 1; board_matrix[4+1][7] = 1; board_matrix[4+2][7] = 1;
        vertical_walls.append(wall(260+2, 145+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 4 && walls.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[4][9] = 1; board_matrix[4+1][9] = 1; board_matrix[4+2][9] = 1;
        vertical_walls.append(wall(325+2, 145+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 4 && walls.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[4][11] = 1; board_matrix[4+1][11] = 1; board_matrix[4+2][11] = 1;
        vertical_walls.append(wall(390+2, 145+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 4 && walls.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[4][13] = 1; board_matrix[4+1][13] = 1; board_matrix[4+2][13] = 1;
        vertical_walls.append(wall(455+2, 145+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 4 && walls.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[4][15] = 1; board_matrix[4+1][15] = 1; board_matrix[4+2][15] = 1;
        vertical_walls.append(wall(520+2, 145+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 6 && walls.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[6][1] = 1; board_matrix[6+1][1] = 1; board_matrix[6+2][1] = 1;
        vertical_walls.append(wall(65+2, 210+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 6 && walls.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[6][3] = 1; board_matrix[6+1][3] = 1; board_matrix[6+2][3] = 1;
        vertical_walls.append(wall(130+2, 210+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 6 && walls.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[6][5] = 1; board_matrix[6+1][5] = 1; board_matrix[6+2][5] = 1;
        vertical_walls.append(wall(195+2, 210+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 6 && walls.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[6][7] = 1; board_matrix[6+1][7] = 1; board_matrix[6+2][7] = 1;
        vertical_walls.append(wall(260+2, 210+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 6 && walls.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[6][9] = 1; board_matrix[6+1][9] = 1; board_matrix[6+2][9] = 1;
        vertical_walls.append(wall(325+2, 210+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 6 && walls.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[6][11] = 1; board_matrix[6+1][11] = 1; board_matrix[6+2][11] = 1;
        vertical_walls.append(wall(390+2, 210+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 6 && walls.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[6][13] = 1; board_matrix[6+1][13] = 1; board_matrix[6+2][13] = 1;
        vertical_walls.append(wall(455+2, 210+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 6 && walls.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[6][15] = 1; board_matrix[6+1][15] = 1; board_matrix[6+2][15] = 1;
        vertical_walls.append(wall(520+2, 210+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 8 && walls.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[8][1] = 1; board_matrix[8+1][1] = 1; board_matrix[8+2][1] = 1;
        vertical_walls.append(wall(65+2, 275+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 8 && walls.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[8][3] = 1; board_matrix[8+1][3] = 1; board_matrix[8+2][3] = 1;
        vertical_walls.append(wall(130+2, 275+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 8 && walls.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[8][5] = 1; board_matrix[8+1][5] = 1; board_matrix[8+2][5] = 1;
        vertical_walls.append(wall(195+2, 275+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 8 && walls.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[8][7] = 1; board_matrix[8+1][7] = 1; board_matrix[8+2][7] = 1;
        vertical_walls.append(wall(260+2, 275+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 8 && walls.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[8][9] = 1; board_matrix[8+1][9] = 1; board_matrix[8+2][9] = 1;
        vertical_walls.append(wall(325+2, 275+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 8 && walls.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[8][11] = 1; board_matrix[8+1][11] = 1; board_matrix[8+2][11] = 1;
        vertical_walls.append(wall(390+2, 275+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 8 && walls.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[8][13] = 1; board_matrix[8+1][13] = 1; board_matrix[8+2][13] = 1;
        vertical_walls.append(wall(455+2, 275+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 8 && walls.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[8][15] = 1; board_matrix[8+1][15] = 1; board_matrix[8+2][15] = 1;
        vertical_walls.append(wall(520+2, 275+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 10 && walls.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[10][1] = 1; board_matrix[10+1][1] = 1; board_matrix[10+2][1] = 1;
        vertical_walls.append(wall(65+2, 340+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 10 && walls.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[10][3] = 1; board_matrix[10+1][3] = 1; board_matrix[10+2][3] = 1;
        vertical_walls.append(wall(130+2, 340+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 10 && walls.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[10][5] = 1; board_matrix[10+1][5] = 1; board_matrix[10+2][5] = 1;
        vertical_walls.append(wall(195+2, 340+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 10 && walls.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[10][7] = 1; board_matrix[10+1][7] = 1; board_matrix[10+2][7] = 1;
        vertical_walls.append(wall(260+2, 340+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 10 && walls.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[10][9] = 1; board_matrix[10+1][9] = 1; board_matrix[10+2][9] = 1;
        vertical_walls.append(wall(325+2, 340+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 10 && walls.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[10][11] = 1; board_matrix[10+1][11] = 1; board_matrix[10+2][11] = 1;
        vertical_walls.append(wall(390+2, 340+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 10 && walls.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[10][13] = 1; board_matrix[10+1][13] = 1; board_matrix[10+2][13] = 1;
        vertical_walls.append(wall(455+2, 340+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 10 && walls.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[10][15] = 1; board_matrix[10+1][15] = 1; board_matrix[10+2][15] = 1;
        vertical_walls.append(wall(520+2, 340+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 12 && walls.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[12][1] = 1; board_matrix[12+1][1] = 1; board_matrix[12+2][1] = 1;
        vertical_walls.append(wall(65+2, 405+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 12 && walls.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[12][3] = 1; board_matrix[12+1][3] = 1; board_matrix[12+2][3] = 1;
        vertical_walls.append(wall(130+2, 405+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 12 && walls.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[12][5] = 1; board_matrix[12+1][5] = 1; board_matrix[12+2][5] = 1;
        vertical_walls.append(wall(195+2, 405+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 12 && walls.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[12][7] = 1; board_matrix[12+1][7] = 1; board_matrix[12+2][7] = 1;
        vertical_walls.append(wall(260+2, 405+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 12 && walls.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[12][9] = 1; board_matrix[12+1][9] = 1; board_matrix[12+2][9] = 1;
        vertical_walls.append(wall(325+2, 405+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 12 && walls.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[12][11] = 1; board_matrix[12+1][11] = 1; board_matrix[12+2][11] = 1;
        vertical_walls.append(wall(390+2, 405+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 12 && walls.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[12][13] = 1; board_matrix[12+1][13] = 1; board_matrix[12+2][13] = 1;
        vertical_walls.append(wall(455+2, 405+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 12 && walls.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[12][15] = 1; board_matrix[12+1][15] = 1; board_matrix[12+2][15] = 1;
        vertical_walls.append(wall(520+2, 405+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 14 && walls.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[14][1] = 1; board_matrix[14+1][1] = 1; board_matrix[14+2][1] = 1;
        vertical_walls.append(wall(65+2, 470+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 14 && walls.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[14][3] = 1; board_matrix[14+1][3] = 1; board_matrix[14+2][3] = 1;
        vertical_walls.append(wall(130+2, 470+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 14 && walls.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[14][5] = 1; board_matrix[14+1][5] = 1; board_matrix[14+2][5] = 1;
        vertical_walls.append(wall(195+2, 470+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 14 && walls.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[14][7] = 1; board_matrix[14+1][7] = 1; board_matrix[14+2][7] = 1;
        vertical_walls.append(wall(260+2, 470+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 14 && walls.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[14][9] = 1; board_matrix[14+1][9] = 1; board_matrix[14+2][9] = 1;
        vertical_walls.append(wall(325+2, 470+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 14 && walls.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[14][11] = 1; board_matrix[14+1][11] = 1; board_matrix[14+2][11] = 1;
        vertical_walls.append(wall(390+2, 470+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 14 && walls.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[14][13] = 1; board_matrix[14+1][13] = 1; board_matrix[14+2][13] = 1;
        vertical_walls.append(wall(455+2, 470+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 14 && walls.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[14][15] = 1; board_matrix[14+1][15] = 1; board_matrix[14+2][15] = 1;
        vertical_walls.append(wall(520+2, 470+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 1 && walls.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[1][0] = 1; board_matrix[1][0+1] = 1; board_matrix[1][0+2] = 1;
        horizontal_walls.append(wall(15+2, 65+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 1 && walls.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[1][2] = 1; board_matrix[1][2+1] = 1; board_matrix[1][2+2] = 1;
        horizontal_walls.append(wall(80+2, 65+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 1 && walls.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[1][4] = 1; board_matrix[1][4+1] = 1; board_matrix[1][4+2] = 1;
        horizontal_walls.append(wall(145+2, 65+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 1 && walls.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[1][6] = 1; board_matrix[1][6+1] = 1; board_matrix[1][6+2] = 1;
        horizontal_walls.append(wall(210+2, 65+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 1 && walls.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[1][8] = 1; board_matrix[1][8+1] = 1; board_matrix[1][8+2] = 1;
        horizontal_walls.append(wall(275+2, 65+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 1 && walls.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[1][10] = 1; board_matrix[1][10+1] = 1; board_matrix[1][10+2] = 1;
        horizontal_walls.append(wall(340+2, 65+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 1 && walls.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[1][12] = 1; board_matrix[1][12+1] = 1; board_matrix[1][12+2] = 1;
        horizontal_walls.append(wall(405+2, 65+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 1 && walls.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[1][14] = 1; board_matrix[1][14+1] = 1; board_matrix[1][14+2] = 1;
        horizontal_walls.append(wall(470+2, 65+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 3 && walls.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[3][0] = 1; board_matrix[3][0+1] = 1; board_matrix[3][0+2] = 1;
        horizontal_walls.append(wall(15+2, 130+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 3 && walls.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[3][2] = 1; board_matrix[3][2+1] = 1; board_matrix[3][2+2] = 1;
        horizontal_walls.append(wall(80+2, 130+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 3 && walls.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[3][4] = 1; board_matrix[3][4+1] = 1; board_matrix[3][4+2] = 1;
        horizontal_walls.append(wall(145+2, 130+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 3 && walls.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[3][6] = 1; board_matrix[3][6+1] = 1; board_matrix[3][6+2] = 1;
        horizontal_walls.append(wall(210+2, 130+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 3 && walls.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[3][8] = 1; board_matrix[3][8+1] = 1; board_matrix[3][8+2] = 1;
        horizontal_walls.append(wall(275+2, 130+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 3 && walls.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[3][10] = 1; board_matrix[3][10+1] = 1; board_matrix[3][10+2] = 1;
        horizontal_walls.append(wall(340+2, 130+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 3 && walls.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[3][12] = 1; board_matrix[3][12+1] = 1; board_matrix[3][12+2] = 1;
        horizontal_walls.append(wall(405+2, 130+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 3 && walls.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[3][14] = 1; board_matrix[3][14+1] = 1; board_matrix[3][14+2] = 1;
        horizontal_walls.append(wall(470+2, 130+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 5 && walls.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[5][0] = 1; board_matrix[5][0+1] = 1; board_matrix[5][0+2] = 1;
        horizontal_walls.append(wall(15+2, 195+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 5 && walls.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[5][2] = 1; board_matrix[5][2+1] = 1; board_matrix[5][2+2] = 1;
        horizontal_walls.append(wall(80+2, 195+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 5 && walls.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[5][4] = 1; board_matrix[5][4+1] = 1; board_matrix[5][4+2] = 1;
        horizontal_walls.append(wall(145+2, 195+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 5 && walls.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[5][6] = 1; board_matrix[5][6+1] = 1; board_matrix[5][6+2] = 1;
        horizontal_walls.append(wall(210+2, 195+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 5 && walls.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[5][8] = 1; board_matrix[5][8+1] = 1; board_matrix[5][8+2] = 1;
        horizontal_walls.append(wall(275+2, 195+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 5 && walls.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[5][10] = 1; board_matrix[5][10+1] = 1; board_matrix[5][10+2] = 1;
        horizontal_walls.append(wall(340+2, 195+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 5 && walls.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[5][12] = 1; board_matrix[5][12+1] = 1; board_matrix[5][12+2] = 1;
        horizontal_walls.append(wall(405+2, 195+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 5 && walls.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[5][14] = 1; board_matrix[5][14+1] = 1; board_matrix[5][14+2] = 1;
        horizontal_walls.append(wall(470+2, 195+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 7 && walls.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[7][0] = 1; board_matrix[7][0+1] = 1; board_matrix[7][0+2] = 1;
        horizontal_walls.append(wall(15+2, 260+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 7 && walls.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[7][2] = 1; board_matrix[7][2+1] = 1; board_matrix[7][2+2] = 1;
        horizontal_walls.append(wall(80+2, 260+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 7 && walls.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[7][4] = 1; board_matrix[7][4+1] = 1; board_matrix[7][4+2] = 1;
        horizontal_walls.append(wall(145+2, 260+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 7 && walls.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[7][6] = 1; board_matrix[7][6+1] = 1; board_matrix[7][6+2] = 1;
        horizontal_walls.append(wall(210+2, 260+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 7 && walls.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[7][8] = 1; board_matrix[7][8+1] = 1; board_matrix[7][8+2] = 1;
        horizontal_walls.append(wall(275+2, 260+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 7 && walls.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[7][10] = 1; board_matrix[7][10+1] = 1; board_matrix[7][10+2] = 1;
        horizontal_walls.append(wall(340+2, 260+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 7 && walls.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[7][12] = 1; board_matrix[7][12+1] = 1; board_matrix[7][12+2] = 1;
        horizontal_walls.append(wall(405+2, 260+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 7 && walls.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[7][14] = 1; board_matrix[7][14+1] = 1; board_matrix[7][14+2] = 1;
        horizontal_walls.append(wall(470+2, 260+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 9 && walls.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[9][0] = 1; board_matrix[9][0+1] = 1; board_matrix[9][0+2] = 1;
        horizontal_walls.append(wall(15+2, 325+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 9 && walls.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[9][2] = 1; board_matrix[9][2+1] = 1; board_matrix[9][2+2] = 1;
        horizontal_walls.append(wall(80+2, 325+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 9 && walls.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[9][4] = 1; board_matrix[9][4+1] = 1; board_matrix[9][4+2] = 1;
        horizontal_walls.append(wall(145+2, 325+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 9 && walls.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[9][6] = 1; board_matrix[9][6+1] = 1; board_matrix[9][6+2] = 1;
        horizontal_walls.append(wall(210+2, 325+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 9 && walls.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[9][8] = 1; board_matrix[9][8+1] = 1; board_matrix[9][8+2] = 1;
        horizontal_walls.append(wall(275+2, 325+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 9 && walls.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[9][10] = 1; board_matrix[9][10+1] = 1; board_matrix[9][10+2] = 1;
        horizontal_walls.append(wall(340+2, 325+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 9 && walls.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[9][12] = 1; board_matrix[9][12+1] = 1; board_matrix[9][12+2] = 1;
        horizontal_walls.append(wall(405+2, 325+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 9 && walls.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[9][14] = 1; board_matrix[9][14+1] = 1; board_matrix[9][14+2] = 1;
        horizontal_walls.append(wall(470+2, 325+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 11 && walls.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[11][0] = 1; board_matrix[11][0+1] = 1; board_matrix[11][0+2] = 1;
        horizontal_walls.append(wall(15+2, 390+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 11 && walls.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[11][2] = 1; board_matrix[11][2+1] = 1; board_matrix[11][2+2] = 1;
        horizontal_walls.append(wall(80+2, 390+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 11 && walls.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[11][4] = 1; board_matrix[11][4+1] = 1; board_matrix[11][4+2] = 1;
        horizontal_walls.append(wall(145+2, 390+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 11 && walls.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[11][6] = 1; board_matrix[11][6+1] = 1; board_matrix[11][6+2] = 1;
        horizontal_walls.append(wall(210+2, 390+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 11 && walls.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[11][8] = 1; board_matrix[11][8+1] = 1; board_matrix[11][8+2] = 1;
        horizontal_walls.append(wall(275+2, 390+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 11 && walls.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[11][10] = 1; board_matrix[11][10+1] = 1; board_matrix[11][10+2] = 1;
        horizontal_walls.append(wall(340+2, 390+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 11 && walls.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[11][12] = 1; board_matrix[11][12+1] = 1; board_matrix[11][12+2] = 1;
        horizontal_walls.append(wall(405+2, 390+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 11 && walls.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[11][14] = 1; board_matrix[11][14+1] = 1; board_matrix[11][14+2] = 1;
        horizontal_walls.append(wall(470+2, 390+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 13 && walls.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[13][0] = 1; board_matrix[13][0+1] = 1; board_matrix[13][0+2] = 1;
        horizontal_walls.append(wall(15+2, 455+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 13 && walls.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[13][2] = 1; board_matrix[13][2+1] = 1; board_matrix[13][2+2] = 1;
        horizontal_walls.append(wall(80+2, 455+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 13 && walls.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[13][4] = 1; board_matrix[13][4+1] = 1; board_matrix[13][4+2] = 1;
        horizontal_walls.append(wall(145+2, 455+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 13 && walls.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[13][6] = 1; board_matrix[13][6+1] = 1; board_matrix[13][6+2] = 1;
        horizontal_walls.append(wall(210+2, 455+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 13 && walls.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[13][8] = 1; board_matrix[13][8+1] = 1; board_matrix[13][8+2] = 1;
        horizontal_walls.append(wall(275+2, 455+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 13 && walls.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[13][10] = 1; board_matrix[13][10+1] = 1; board_matrix[13][10+2] = 1;
        horizontal_walls.append(wall(340+2, 455+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 13 && walls.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[13][12] = 1; board_matrix[13][12+1] = 1; board_matrix[13][12+2] = 1;
        horizontal_walls.append(wall(405+2, 455+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 13 && walls.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[13][14] = 1; board_matrix[13][14+1] = 1; board_matrix[13][14+2] = 1;
        horizontal_walls.append(wall(470+2, 455+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 15 && walls.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[15][0] = 1; board_matrix[15][0+1] = 1; board_matrix[15][0+2] = 1;
        horizontal_walls.append(wall(15+2, 520+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 15 && walls.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[15][2] = 1; board_matrix[15][2+1] = 1; board_matrix[15][2+2] = 1;
        horizontal_walls.append(wall(80+2, 520+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 15 && walls.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[15][4] = 1; board_matrix[15][4+1] = 1; board_matrix[15][4+2] = 1;
        horizontal_walls.append(wall(145+2, 520+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 15 && walls.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[15][6] = 1; board_matrix[15][6+1] = 1; board_matrix[15][6+2] = 1;
        horizontal_walls.append(wall(210+2, 520+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 15 && walls.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[15][8] = 1; board_matrix[15][8+1] = 1; board_matrix[15][8+2] = 1;
        horizontal_walls.append(wall(275+2, 520+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 15 && walls.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[15][10] = 1; board_matrix[15][10+1] = 1; board_matrix[15][10+2] = 1;
        horizontal_walls.append(wall(340+2, 520+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 15 && walls.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[15][12] = 1; board_matrix[15][12+1] = 1; board_matrix[15][12+2] = 1;
        horizontal_walls.append(wall(405+2, 520+2));}

    if(walls.split(QChar(' ')).at(1).toInt() == 15 && walls.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[15][14] = 1; board_matrix[15][14+1] = 1; board_matrix[15][14+2] = 1;
        horizontal_walls.append(wall(470+2, 520+2));}
}

