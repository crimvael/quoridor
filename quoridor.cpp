#include "quoridor.h"
#include "ui_quoridor.h"
#include <QMouseEvent>
#include <QPainter>
#include <QList>

bool window_expanded = false;
bool start = false; bool show_wall = false; bool wall_unlocked = false; bool ai = false;
bool move_select = false; bool placeble_1 = false; bool placeble_2 = false; bool BLUE = false; bool RED = false;
int curr_position[] = {-1, -1}; int wall_position[] = {-1, -1, -1};
int walls_blue = 10; int walls_red = 10; QString next_m = "";
int board_matrix[17][17]; int board_copy_1[17][17]; int board_copy_2[17][17]; int board_copy_s[17][17];
QList<place> player_blue; QList<place> player_red; QList<place> vertical_walls; QList<place> horizontal_walls; QList<QString> moves;

Quoridor::Quoridor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Quoridor)
{
    ui->setupUi(this);

    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->resizeRowsToContents();
    ui->tableWidget_2->resizeColumnsToContents();
    ui->tableWidget_2->resizeRowsToContents();
    ui->tableWidget_3->resizeColumnsToContents();
    ui->tableWidget_3->resizeRowsToContents();
    ui->tableWidget_4->resizeColumnsToContents();
    ui->tableWidget_4->resizeRowsToContents();


    for (int i=0; i < 17; i++) {
        for (int j=0; j < 17; j++) {
            board_matrix[i][j] = 0;
            QTableWidgetItem* item = new QTableWidgetItem("0");
            item->setTextAlignment(Qt::AlignCenter);
            if(i%2 == 0 && j%2 == 0)
                item->setBackground(QColor(153, 255, 153));
            ui->tableWidget->setItem(i, j, item);
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

void Quoridor::on_newGameButton_clicked()
{

    if(ui->radioButton->isChecked())
        ai = true;
    if(ui->radioButton_2->isChecked())
        ai = false;

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


    for (int i=0; i < 17; i++) {
        for (int j=0; j < 17; j++) {
            board_matrix[i][j] = 0;
        }
    }

    walls_blue = 10; walls_red = 10;
    show_wall = true;
    wall_unlocked = true;
    BLUE = true; RED = false;
    set_players(0, 8, 2);
    set_players(16, 8, 1);
    player_red.append(place(0, 8));
    player_blue.append(place(16, 8));
    moves.append("m 1");
    moves.append("m 2");
    start = true;
    game_manager();
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


    if(RED && ai){

        show_wall = false;
        wall_unlocked = false;

        next_move();

        int y = next_m.split(QChar(' ')).at(1).toInt();
        int x = next_m.split(QChar(' ')).at(2).toInt();

        if(next_m.at(0) == 'm'){
            remove_pawn(curr_position[0], curr_position[1]);
            set_players(y, x, 2);
            moves.append("m 2");
            player_red.append(place(y, x));
        }

        if(next_m.at(0) == 'v' || next_m.at(0) == 'h'){
            walls_red--;
            ai_wall(next_m); moves.append(next_m); update();
        }

        RED = false; BLUE = true;
        show_wall = true; wall_unlocked = true;
        game_manager();

    }

    if(RED){ui->label_9->setText("true"); ui->label_10->setText("false");}
    if(BLUE){ui->label_9->setText("false"); ui->label_10->setText("true");}
    ui->label_7->setText(QString::number(curr_position[0]) + ", " + QString::number(curr_position[1]));


    ui->tableWidget_2->setRowCount(0);
    for(int n=0; n < fmax(player_blue.size(), player_red.size()); n++){
        ui->tableWidget_2->insertRow(ui->tableWidget_2->rowCount());
        if(n < player_blue.size()){
            QTableWidgetItem* item = new QTableWidgetItem(QString::number(player_blue[n].y) + ", " + QString::number(player_blue[n].x));
            item->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_2->setItem(n, 0, item);
        }
        if(n < player_red.size()){
            QTableWidgetItem* item_2 = new QTableWidgetItem(QString::number(player_red[n].y) + ", " + QString::number(player_red[n].x));
            item_2->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_2->setItem(n, 1, item_2);
        }
    }

    ui->tableWidget_3->setRowCount(0);
    for(int n=0; n < fmax(vertical_walls.size(), horizontal_walls.size()); n++){
        ui->tableWidget_3->insertRow(ui->tableWidget_3->rowCount());
        if(n < vertical_walls.size()){
            QTableWidgetItem* item = new QTableWidgetItem(QString::number(vertical_walls[n].y) + ", " + QString::number(vertical_walls[n].x));
            item->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_3->setItem(n, 0, item);
        }
        if(n < horizontal_walls.size()){
            QTableWidgetItem* item_2 = new QTableWidgetItem(QString::number(horizontal_walls[n].y) + ", " + QString::number(horizontal_walls[n].x));
            item_2->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_3->setItem(n, 1, item_2);
        }
    }

    ui->tableWidget_4->setRowCount(0);
    for(int n=0; n < moves.size(); n++){
        ui->tableWidget_4->insertRow(ui->tableWidget_4->rowCount());
            QTableWidgetItem* item = new QTableWidgetItem(moves[n]);
            item->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_4->setItem(n, 0, item);
    }

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

    if(x < 17 && x != 0){
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
            if(wall_position[2] == 0){
                paint.drawRect(wall_position[0],wall_position[1],11,111);}

            if(wall_position[2] == 1){
                paint.drawRect(wall_position[0],wall_position[1],111,11);}}

        for (int i=0; i<vertical_walls.size(); i++ ) {
            paint.fillRect(QRect(vertical_walls[i].y, vertical_walls[i].x, 11, 111), Qt::SolidPattern);}

        for (int i=0; i<horizontal_walls.size(); i++ ) {
            paint.fillRect(QRect(horizontal_walls[i].y, horizontal_walls[i].x, 111, 11), Qt::SolidPattern);}}

}

void Quoridor::on_undoButton_clicked()
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

    ui->newGameButton->setEnabled(true);
    ui->undoButton->setEnabled(true);
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

void Quoridor::on_details_Button_clicked()
{
    if(!window_expanded){
        ui->details_Button->setText("Hide details <<");
        this->setMinimumSize(1340,750);
        this->setMaximumSize(1340,750);
        window_expanded = true;
    }
    else{
        ui->details_Button->setText("Show details >>");
        this->setMinimumSize(600,750);
        this->setMaximumSize(600,750);
        window_expanded = false;
    }
}

