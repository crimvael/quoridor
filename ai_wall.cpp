#include "quoridor.h"
#include "ui_quoridor.h"


void Quoridor::ai_wall(QString wall_info){


    if(wall_info.split(QChar(' ')).at(1).toInt() == 0 && wall_info.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[0][1] = 1; board_matrix[0+1][1] = 1; board_matrix[0+2][1] = 1;
        ui->tableWidget->setItem(0,1, new QTableWidgetItem(QString::number(board_matrix[0][1])));ui->tableWidget->setItem(0+1,1, new QTableWidgetItem(QString::number(board_matrix[0+1][1])));ui->tableWidget->setItem(0+2,1, new QTableWidgetItem(QString::number(board_matrix[0+2][1])));
        ui->tableWidget->item(0,1)->setBackground(Qt::gray);ui->tableWidget->item(0+1,1)->setBackground(Qt::gray);ui->tableWidget->item(0+2,1)->setBackground(Qt::gray);
        vertical_walls.append(place(65+2, 15+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 0 && wall_info.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[0][3] = 1; board_matrix[0+1][3] = 1; board_matrix[0+2][3] = 1;
        ui->tableWidget->setItem(0,3, new QTableWidgetItem(QString::number(board_matrix[0][3])));ui->tableWidget->setItem(0+1,3, new QTableWidgetItem(QString::number(board_matrix[0+1][3])));ui->tableWidget->setItem(0+2,3, new QTableWidgetItem(QString::number(board_matrix[0+2][3])));
        ui->tableWidget->item(0,3)->setBackground(Qt::gray);ui->tableWidget->item(0+1,3)->setBackground(Qt::gray);ui->tableWidget->item(0+2,3)->setBackground(Qt::gray);
        vertical_walls.append(place(130+2, 15+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 0 && wall_info.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[0][5] = 1; board_matrix[0+1][5] = 1; board_matrix[0+2][5] = 1;
        ui->tableWidget->setItem(0,5, new QTableWidgetItem(QString::number(board_matrix[0][5])));ui->tableWidget->setItem(0+1,5, new QTableWidgetItem(QString::number(board_matrix[0+1][5])));ui->tableWidget->setItem(0+2,5, new QTableWidgetItem(QString::number(board_matrix[0+2][5])));
        ui->tableWidget->item(0,5)->setBackground(Qt::gray);ui->tableWidget->item(0+1,5)->setBackground(Qt::gray);ui->tableWidget->item(0+2,5)->setBackground(Qt::gray);
        vertical_walls.append(place(195+2, 15+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 0 && wall_info.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[0][7] = 1; board_matrix[0+1][7] = 1; board_matrix[0+2][7] = 1;
        ui->tableWidget->setItem(0,7, new QTableWidgetItem(QString::number(board_matrix[0][7])));ui->tableWidget->setItem(0+1,7, new QTableWidgetItem(QString::number(board_matrix[0+1][7])));ui->tableWidget->setItem(0+2,7, new QTableWidgetItem(QString::number(board_matrix[0+2][7])));
        ui->tableWidget->item(0,7)->setBackground(Qt::gray);ui->tableWidget->item(0+1,7)->setBackground(Qt::gray);ui->tableWidget->item(0+2,7)->setBackground(Qt::gray);
        vertical_walls.append(place(260+2, 15+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 0 && wall_info.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[0][9] = 1; board_matrix[0+1][9] = 1; board_matrix[0+2][9] = 1;
        ui->tableWidget->setItem(0,9, new QTableWidgetItem(QString::number(board_matrix[0][9])));ui->tableWidget->setItem(0+1,9, new QTableWidgetItem(QString::number(board_matrix[0+1][9])));ui->tableWidget->setItem(0+2,9, new QTableWidgetItem(QString::number(board_matrix[0+2][9])));
        ui->tableWidget->item(0,9)->setBackground(Qt::gray);ui->tableWidget->item(0+1,9)->setBackground(Qt::gray);ui->tableWidget->item(0+2,9)->setBackground(Qt::gray);
        vertical_walls.append(place(325+2, 15+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 0 && wall_info.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[0][11] = 1; board_matrix[0+1][11] = 1; board_matrix[0+2][11] = 1;
        ui->tableWidget->setItem(0,11, new QTableWidgetItem(QString::number(board_matrix[0][11])));ui->tableWidget->setItem(0+1,11, new QTableWidgetItem(QString::number(board_matrix[0+1][11])));ui->tableWidget->setItem(0+2,11, new QTableWidgetItem(QString::number(board_matrix[0+2][11])));
        ui->tableWidget->item(0,11)->setBackground(Qt::gray);ui->tableWidget->item(0+1,11)->setBackground(Qt::gray);ui->tableWidget->item(0+2,11)->setBackground(Qt::gray);
        vertical_walls.append(place(390+2, 15+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 0 && wall_info.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[0][13] = 1; board_matrix[0+1][13] = 1; board_matrix[0+2][13] = 1;
        ui->tableWidget->setItem(0,13, new QTableWidgetItem(QString::number(board_matrix[0][13])));ui->tableWidget->setItem(0+1,13, new QTableWidgetItem(QString::number(board_matrix[0+1][13])));ui->tableWidget->setItem(0+2,13, new QTableWidgetItem(QString::number(board_matrix[0+2][13])));
        ui->tableWidget->item(0,13)->setBackground(Qt::gray);ui->tableWidget->item(0+1,13)->setBackground(Qt::gray);ui->tableWidget->item(0+2,13)->setBackground(Qt::gray);
        vertical_walls.append(place(455+2, 15+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 0 && wall_info.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[0][15] = 1; board_matrix[0+1][15] = 1; board_matrix[0+2][15] = 1;
        ui->tableWidget->setItem(0,15, new QTableWidgetItem(QString::number(board_matrix[0][15])));ui->tableWidget->setItem(0+1,15, new QTableWidgetItem(QString::number(board_matrix[0+1][15])));ui->tableWidget->setItem(0+2,15, new QTableWidgetItem(QString::number(board_matrix[0+2][15])));
        ui->tableWidget->item(0,15)->setBackground(Qt::gray);ui->tableWidget->item(0+1,15)->setBackground(Qt::gray);ui->tableWidget->item(0+2,15)->setBackground(Qt::gray);
        vertical_walls.append(place(520+2, 15+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 2 && wall_info.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[2][1] = 1; board_matrix[2+1][1] = 1; board_matrix[2+2][1] = 1;
        ui->tableWidget->setItem(2,1, new QTableWidgetItem(QString::number(board_matrix[2][1])));ui->tableWidget->setItem(2+1,1, new QTableWidgetItem(QString::number(board_matrix[2+1][1])));ui->tableWidget->setItem(2+2,1, new QTableWidgetItem(QString::number(board_matrix[2+2][1])));
        ui->tableWidget->item(2,1)->setBackground(Qt::gray);ui->tableWidget->item(2+1,1)->setBackground(Qt::gray);ui->tableWidget->item(2+2,1)->setBackground(Qt::gray);
        vertical_walls.append(place(65+2, 80+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 2 && wall_info.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[2][3] = 1; board_matrix[2+1][3] = 1; board_matrix[2+2][3] = 1;
        ui->tableWidget->setItem(2,3, new QTableWidgetItem(QString::number(board_matrix[2][3])));ui->tableWidget->setItem(2+1,3, new QTableWidgetItem(QString::number(board_matrix[2+1][3])));ui->tableWidget->setItem(2+2,3, new QTableWidgetItem(QString::number(board_matrix[2+2][3])));
        ui->tableWidget->item(2,3)->setBackground(Qt::gray);ui->tableWidget->item(2+1,3)->setBackground(Qt::gray);ui->tableWidget->item(2+2,3)->setBackground(Qt::gray);
        vertical_walls.append(place(130+2, 80+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 2 && wall_info.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[2][5] = 1; board_matrix[2+1][5] = 1; board_matrix[2+2][5] = 1;
        ui->tableWidget->setItem(2,5, new QTableWidgetItem(QString::number(board_matrix[2][5])));ui->tableWidget->setItem(2+1,5, new QTableWidgetItem(QString::number(board_matrix[2+1][5])));ui->tableWidget->setItem(2+2,5, new QTableWidgetItem(QString::number(board_matrix[2+2][5])));
        ui->tableWidget->item(2,5)->setBackground(Qt::gray);ui->tableWidget->item(2+1,5)->setBackground(Qt::gray);ui->tableWidget->item(2+2,5)->setBackground(Qt::gray);
        vertical_walls.append(place(195+2, 80+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 2 && wall_info.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[2][7] = 1; board_matrix[2+1][7] = 1; board_matrix[2+2][7] = 1;
        ui->tableWidget->setItem(2,7, new QTableWidgetItem(QString::number(board_matrix[2][7])));ui->tableWidget->setItem(2+1,7, new QTableWidgetItem(QString::number(board_matrix[2+1][7])));ui->tableWidget->setItem(2+2,7, new QTableWidgetItem(QString::number(board_matrix[2+2][7])));
        ui->tableWidget->item(2,7)->setBackground(Qt::gray);ui->tableWidget->item(2+1,7)->setBackground(Qt::gray);ui->tableWidget->item(2+2,7)->setBackground(Qt::gray);
        vertical_walls.append(place(260+2, 80+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 2 && wall_info.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[2][9] = 1; board_matrix[2+1][9] = 1; board_matrix[2+2][9] = 1;
        ui->tableWidget->setItem(2,9, new QTableWidgetItem(QString::number(board_matrix[2][9])));ui->tableWidget->setItem(2+1,9, new QTableWidgetItem(QString::number(board_matrix[2+1][9])));ui->tableWidget->setItem(2+2,9, new QTableWidgetItem(QString::number(board_matrix[2+2][9])));
        ui->tableWidget->item(2,9)->setBackground(Qt::gray);ui->tableWidget->item(2+1,9)->setBackground(Qt::gray);ui->tableWidget->item(2+2,9)->setBackground(Qt::gray);
        vertical_walls.append(place(325+2, 80+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 2 && wall_info.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[2][11] = 1; board_matrix[2+1][11] = 1; board_matrix[2+2][11] = 1;
        ui->tableWidget->setItem(2,11, new QTableWidgetItem(QString::number(board_matrix[2][11])));ui->tableWidget->setItem(2+1,11, new QTableWidgetItem(QString::number(board_matrix[2+1][11])));ui->tableWidget->setItem(2+2,11, new QTableWidgetItem(QString::number(board_matrix[2+2][11])));
        ui->tableWidget->item(2,11)->setBackground(Qt::gray);ui->tableWidget->item(2+1,11)->setBackground(Qt::gray);ui->tableWidget->item(2+2,11)->setBackground(Qt::gray);
        vertical_walls.append(place(390+2, 80+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 2 && wall_info.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[2][13] = 1; board_matrix[2+1][13] = 1; board_matrix[2+2][13] = 1;
        ui->tableWidget->setItem(2,13, new QTableWidgetItem(QString::number(board_matrix[2][13])));ui->tableWidget->setItem(2+1,13, new QTableWidgetItem(QString::number(board_matrix[2+1][13])));ui->tableWidget->setItem(2+2,13, new QTableWidgetItem(QString::number(board_matrix[2+2][13])));
        ui->tableWidget->item(2,13)->setBackground(Qt::gray);ui->tableWidget->item(2+1,13)->setBackground(Qt::gray);ui->tableWidget->item(2+2,13)->setBackground(Qt::gray);
        vertical_walls.append(place(455+2, 80+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 2 && wall_info.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[2][15] = 1; board_matrix[2+1][15] = 1; board_matrix[2+2][15] = 1;
        ui->tableWidget->setItem(2,15, new QTableWidgetItem(QString::number(board_matrix[2][15])));ui->tableWidget->setItem(2+1,15, new QTableWidgetItem(QString::number(board_matrix[2+1][15])));ui->tableWidget->setItem(2+2,15, new QTableWidgetItem(QString::number(board_matrix[2+2][15])));
        ui->tableWidget->item(2,15)->setBackground(Qt::gray);ui->tableWidget->item(2+1,15)->setBackground(Qt::gray);ui->tableWidget->item(2+2,15)->setBackground(Qt::gray);
        vertical_walls.append(place(520+2, 80+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 4 && wall_info.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[4][1] = 1; board_matrix[4+1][1] = 1; board_matrix[4+2][1] = 1;
        ui->tableWidget->setItem(4,1, new QTableWidgetItem(QString::number(board_matrix[4][1])));ui->tableWidget->setItem(4+1,1, new QTableWidgetItem(QString::number(board_matrix[4+1][1])));ui->tableWidget->setItem(4+2,1, new QTableWidgetItem(QString::number(board_matrix[4+2][1])));
        ui->tableWidget->item(4,1)->setBackground(Qt::gray);ui->tableWidget->item(4+1,1)->setBackground(Qt::gray);ui->tableWidget->item(4+2,1)->setBackground(Qt::gray);
        vertical_walls.append(place(65+2, 145+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 4 && wall_info.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[4][3] = 1; board_matrix[4+1][3] = 1; board_matrix[4+2][3] = 1;
        ui->tableWidget->setItem(4,3, new QTableWidgetItem(QString::number(board_matrix[4][3])));ui->tableWidget->setItem(4+1,3, new QTableWidgetItem(QString::number(board_matrix[4+1][3])));ui->tableWidget->setItem(4+2,3, new QTableWidgetItem(QString::number(board_matrix[4+2][3])));
        ui->tableWidget->item(4,3)->setBackground(Qt::gray);ui->tableWidget->item(4+1,3)->setBackground(Qt::gray);ui->tableWidget->item(4+2,3)->setBackground(Qt::gray);
        vertical_walls.append(place(130+2, 145+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 4 && wall_info.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[4][5] = 1; board_matrix[4+1][5] = 1; board_matrix[4+2][5] = 1;
        ui->tableWidget->setItem(4,5, new QTableWidgetItem(QString::number(board_matrix[4][5])));ui->tableWidget->setItem(4+1,5, new QTableWidgetItem(QString::number(board_matrix[4+1][5])));ui->tableWidget->setItem(4+2,5, new QTableWidgetItem(QString::number(board_matrix[4+2][5])));
        ui->tableWidget->item(4,5)->setBackground(Qt::gray);ui->tableWidget->item(4+1,5)->setBackground(Qt::gray);ui->tableWidget->item(4+2,5)->setBackground(Qt::gray);
        vertical_walls.append(place(195+2, 145+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 4 && wall_info.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[4][7] = 1; board_matrix[4+1][7] = 1; board_matrix[4+2][7] = 1;
        ui->tableWidget->setItem(4,7, new QTableWidgetItem(QString::number(board_matrix[4][7])));ui->tableWidget->setItem(4+1,7, new QTableWidgetItem(QString::number(board_matrix[4+1][7])));ui->tableWidget->setItem(4+2,7, new QTableWidgetItem(QString::number(board_matrix[4+2][7])));
        ui->tableWidget->item(4,7)->setBackground(Qt::gray);ui->tableWidget->item(4+1,7)->setBackground(Qt::gray);ui->tableWidget->item(4+2,7)->setBackground(Qt::gray);
        vertical_walls.append(place(260+2, 145+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 4 && wall_info.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[4][9] = 1; board_matrix[4+1][9] = 1; board_matrix[4+2][9] = 1;
        ui->tableWidget->setItem(4,9, new QTableWidgetItem(QString::number(board_matrix[4][9])));ui->tableWidget->setItem(4+1,9, new QTableWidgetItem(QString::number(board_matrix[4+1][9])));ui->tableWidget->setItem(4+2,9, new QTableWidgetItem(QString::number(board_matrix[4+2][9])));
        ui->tableWidget->item(4,9)->setBackground(Qt::gray);ui->tableWidget->item(4+1,9)->setBackground(Qt::gray);ui->tableWidget->item(4+2,9)->setBackground(Qt::gray);
        vertical_walls.append(place(325+2, 145+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 4 && wall_info.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[4][11] = 1; board_matrix[4+1][11] = 1; board_matrix[4+2][11] = 1;
        ui->tableWidget->setItem(4,11, new QTableWidgetItem(QString::number(board_matrix[4][11])));ui->tableWidget->setItem(4+1,11, new QTableWidgetItem(QString::number(board_matrix[4+1][11])));ui->tableWidget->setItem(4+2,11, new QTableWidgetItem(QString::number(board_matrix[4+2][11])));
        ui->tableWidget->item(4,11)->setBackground(Qt::gray);ui->tableWidget->item(4+1,11)->setBackground(Qt::gray);ui->tableWidget->item(4+2,11)->setBackground(Qt::gray);
        vertical_walls.append(place(390+2, 145+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 4 && wall_info.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[4][13] = 1; board_matrix[4+1][13] = 1; board_matrix[4+2][13] = 1;
        ui->tableWidget->setItem(4,13, new QTableWidgetItem(QString::number(board_matrix[4][13])));ui->tableWidget->setItem(4+1,13, new QTableWidgetItem(QString::number(board_matrix[4+1][13])));ui->tableWidget->setItem(4+2,13, new QTableWidgetItem(QString::number(board_matrix[4+2][13])));
        ui->tableWidget->item(4,13)->setBackground(Qt::gray);ui->tableWidget->item(4+1,13)->setBackground(Qt::gray);ui->tableWidget->item(4+2,13)->setBackground(Qt::gray);
        vertical_walls.append(place(455+2, 145+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 4 && wall_info.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[4][15] = 1; board_matrix[4+1][15] = 1; board_matrix[4+2][15] = 1;
        ui->tableWidget->setItem(4,15, new QTableWidgetItem(QString::number(board_matrix[4][15])));ui->tableWidget->setItem(4+1,15, new QTableWidgetItem(QString::number(board_matrix[4+1][15])));ui->tableWidget->setItem(4+2,15, new QTableWidgetItem(QString::number(board_matrix[4+2][15])));
        ui->tableWidget->item(4,15)->setBackground(Qt::gray);ui->tableWidget->item(4+1,15)->setBackground(Qt::gray);ui->tableWidget->item(4+2,15)->setBackground(Qt::gray);
        vertical_walls.append(place(520+2, 145+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 6 && wall_info.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[6][1] = 1; board_matrix[6+1][1] = 1; board_matrix[6+2][1] = 1;
        ui->tableWidget->setItem(6,1, new QTableWidgetItem(QString::number(board_matrix[6][1])));ui->tableWidget->setItem(6+1,1, new QTableWidgetItem(QString::number(board_matrix[6+1][1])));ui->tableWidget->setItem(6+2,1, new QTableWidgetItem(QString::number(board_matrix[6+2][1])));
        ui->tableWidget->item(6,1)->setBackground(Qt::gray);ui->tableWidget->item(6+1,1)->setBackground(Qt::gray);ui->tableWidget->item(6+2,1)->setBackground(Qt::gray);
        vertical_walls.append(place(65+2, 210+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 6 && wall_info.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[6][3] = 1; board_matrix[6+1][3] = 1; board_matrix[6+2][3] = 1;
        ui->tableWidget->setItem(6,3, new QTableWidgetItem(QString::number(board_matrix[6][3])));ui->tableWidget->setItem(6+1,3, new QTableWidgetItem(QString::number(board_matrix[6+1][3])));ui->tableWidget->setItem(6+2,3, new QTableWidgetItem(QString::number(board_matrix[6+2][3])));
        ui->tableWidget->item(6,3)->setBackground(Qt::gray);ui->tableWidget->item(6+1,3)->setBackground(Qt::gray);ui->tableWidget->item(6+2,3)->setBackground(Qt::gray);
        vertical_walls.append(place(130+2, 210+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 6 && wall_info.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[6][5] = 1; board_matrix[6+1][5] = 1; board_matrix[6+2][5] = 1;
        ui->tableWidget->setItem(6,5, new QTableWidgetItem(QString::number(board_matrix[6][5])));ui->tableWidget->setItem(6+1,5, new QTableWidgetItem(QString::number(board_matrix[6+1][5])));ui->tableWidget->setItem(6+2,5, new QTableWidgetItem(QString::number(board_matrix[6+2][5])));
        ui->tableWidget->item(6,5)->setBackground(Qt::gray);ui->tableWidget->item(6+1,5)->setBackground(Qt::gray);ui->tableWidget->item(6+2,5)->setBackground(Qt::gray);
        vertical_walls.append(place(195+2, 210+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 6 && wall_info.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[6][7] = 1; board_matrix[6+1][7] = 1; board_matrix[6+2][7] = 1;
        ui->tableWidget->setItem(6,7, new QTableWidgetItem(QString::number(board_matrix[6][7])));ui->tableWidget->setItem(6+1,7, new QTableWidgetItem(QString::number(board_matrix[6+1][7])));ui->tableWidget->setItem(6+2,7, new QTableWidgetItem(QString::number(board_matrix[6+2][7])));
        ui->tableWidget->item(6,7)->setBackground(Qt::gray);ui->tableWidget->item(6+1,7)->setBackground(Qt::gray);ui->tableWidget->item(6+2,7)->setBackground(Qt::gray);
        vertical_walls.append(place(260+2, 210+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 6 && wall_info.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[6][9] = 1; board_matrix[6+1][9] = 1; board_matrix[6+2][9] = 1;
        ui->tableWidget->setItem(6,9, new QTableWidgetItem(QString::number(board_matrix[6][9])));ui->tableWidget->setItem(6+1,9, new QTableWidgetItem(QString::number(board_matrix[6+1][9])));ui->tableWidget->setItem(6+2,9, new QTableWidgetItem(QString::number(board_matrix[6+2][9])));
        ui->tableWidget->item(6,9)->setBackground(Qt::gray);ui->tableWidget->item(6+1,9)->setBackground(Qt::gray);ui->tableWidget->item(6+2,9)->setBackground(Qt::gray);
        vertical_walls.append(place(325+2, 210+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 6 && wall_info.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[6][11] = 1; board_matrix[6+1][11] = 1; board_matrix[6+2][11] = 1;
        ui->tableWidget->setItem(6,11, new QTableWidgetItem(QString::number(board_matrix[6][11])));ui->tableWidget->setItem(6+1,11, new QTableWidgetItem(QString::number(board_matrix[6+1][11])));ui->tableWidget->setItem(6+2,11, new QTableWidgetItem(QString::number(board_matrix[6+2][11])));
        ui->tableWidget->item(6,11)->setBackground(Qt::gray);ui->tableWidget->item(6+1,11)->setBackground(Qt::gray);ui->tableWidget->item(6+2,11)->setBackground(Qt::gray);
        vertical_walls.append(place(390+2, 210+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 6 && wall_info.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[6][13] = 1; board_matrix[6+1][13] = 1; board_matrix[6+2][13] = 1;
        ui->tableWidget->setItem(6,13, new QTableWidgetItem(QString::number(board_matrix[6][13])));ui->tableWidget->setItem(6+1,13, new QTableWidgetItem(QString::number(board_matrix[6+1][13])));ui->tableWidget->setItem(6+2,13, new QTableWidgetItem(QString::number(board_matrix[6+2][13])));
        ui->tableWidget->item(6,13)->setBackground(Qt::gray);ui->tableWidget->item(6+1,13)->setBackground(Qt::gray);ui->tableWidget->item(6+2,13)->setBackground(Qt::gray);
        vertical_walls.append(place(455+2, 210+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 6 && wall_info.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[6][15] = 1; board_matrix[6+1][15] = 1; board_matrix[6+2][15] = 1;
        ui->tableWidget->setItem(6,15, new QTableWidgetItem(QString::number(board_matrix[6][15])));ui->tableWidget->setItem(6+1,15, new QTableWidgetItem(QString::number(board_matrix[6+1][15])));ui->tableWidget->setItem(6+2,15, new QTableWidgetItem(QString::number(board_matrix[6+2][15])));
        ui->tableWidget->item(6,15)->setBackground(Qt::gray);ui->tableWidget->item(6+1,15)->setBackground(Qt::gray);ui->tableWidget->item(6+2,15)->setBackground(Qt::gray);
        vertical_walls.append(place(520+2, 210+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 8 && wall_info.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[8][1] = 1; board_matrix[8+1][1] = 1; board_matrix[8+2][1] = 1;
        ui->tableWidget->setItem(8,1, new QTableWidgetItem(QString::number(board_matrix[8][1])));ui->tableWidget->setItem(8+1,1, new QTableWidgetItem(QString::number(board_matrix[8+1][1])));ui->tableWidget->setItem(8+2,1, new QTableWidgetItem(QString::number(board_matrix[8+2][1])));
        ui->tableWidget->item(8,1)->setBackground(Qt::gray);ui->tableWidget->item(8+1,1)->setBackground(Qt::gray);ui->tableWidget->item(8+2,1)->setBackground(Qt::gray);
        vertical_walls.append(place(65+2, 275+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 8 && wall_info.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[8][3] = 1; board_matrix[8+1][3] = 1; board_matrix[8+2][3] = 1;
        ui->tableWidget->setItem(8,3, new QTableWidgetItem(QString::number(board_matrix[8][3])));ui->tableWidget->setItem(8+1,3, new QTableWidgetItem(QString::number(board_matrix[8+1][3])));ui->tableWidget->setItem(8+2,3, new QTableWidgetItem(QString::number(board_matrix[8+2][3])));
        ui->tableWidget->item(8,3)->setBackground(Qt::gray);ui->tableWidget->item(8+1,3)->setBackground(Qt::gray);ui->tableWidget->item(8+2,3)->setBackground(Qt::gray);
        vertical_walls.append(place(130+2, 275+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 8 && wall_info.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[8][5] = 1; board_matrix[8+1][5] = 1; board_matrix[8+2][5] = 1;
        ui->tableWidget->setItem(8,5, new QTableWidgetItem(QString::number(board_matrix[8][5])));ui->tableWidget->setItem(8+1,5, new QTableWidgetItem(QString::number(board_matrix[8+1][5])));ui->tableWidget->setItem(8+2,5, new QTableWidgetItem(QString::number(board_matrix[8+2][5])));
        ui->tableWidget->item(8,5)->setBackground(Qt::gray);ui->tableWidget->item(8+1,5)->setBackground(Qt::gray);ui->tableWidget->item(8+2,5)->setBackground(Qt::gray);
        vertical_walls.append(place(195+2, 275+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 8 && wall_info.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[8][7] = 1; board_matrix[8+1][7] = 1; board_matrix[8+2][7] = 1;
        ui->tableWidget->setItem(8,7, new QTableWidgetItem(QString::number(board_matrix[8][7])));ui->tableWidget->setItem(8+1,7, new QTableWidgetItem(QString::number(board_matrix[8+1][7])));ui->tableWidget->setItem(8+2,7, new QTableWidgetItem(QString::number(board_matrix[8+2][7])));
        ui->tableWidget->item(8,7)->setBackground(Qt::gray);ui->tableWidget->item(8+1,7)->setBackground(Qt::gray);ui->tableWidget->item(8+2,7)->setBackground(Qt::gray);
        vertical_walls.append(place(260+2, 275+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 8 && wall_info.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[8][9] = 1; board_matrix[8+1][9] = 1; board_matrix[8+2][9] = 1;
        ui->tableWidget->setItem(8,9, new QTableWidgetItem(QString::number(board_matrix[8][9])));ui->tableWidget->setItem(8+1,9, new QTableWidgetItem(QString::number(board_matrix[8+1][9])));ui->tableWidget->setItem(8+2,9, new QTableWidgetItem(QString::number(board_matrix[8+2][9])));
        ui->tableWidget->item(8,9)->setBackground(Qt::gray);ui->tableWidget->item(8+1,9)->setBackground(Qt::gray);ui->tableWidget->item(8+2,9)->setBackground(Qt::gray);
        vertical_walls.append(place(325+2, 275+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 8 && wall_info.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[8][11] = 1; board_matrix[8+1][11] = 1; board_matrix[8+2][11] = 1;
        ui->tableWidget->setItem(8,11, new QTableWidgetItem(QString::number(board_matrix[8][11])));ui->tableWidget->setItem(8+1,11, new QTableWidgetItem(QString::number(board_matrix[8+1][11])));ui->tableWidget->setItem(8+2,11, new QTableWidgetItem(QString::number(board_matrix[8+2][11])));
        ui->tableWidget->item(8,11)->setBackground(Qt::gray);ui->tableWidget->item(8+1,11)->setBackground(Qt::gray);ui->tableWidget->item(8+2,11)->setBackground(Qt::gray);
        vertical_walls.append(place(390+2, 275+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 8 && wall_info.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[8][13] = 1; board_matrix[8+1][13] = 1; board_matrix[8+2][13] = 1;
        ui->tableWidget->setItem(8,13, new QTableWidgetItem(QString::number(board_matrix[8][13])));ui->tableWidget->setItem(8+1,13, new QTableWidgetItem(QString::number(board_matrix[8+1][13])));ui->tableWidget->setItem(8+2,13, new QTableWidgetItem(QString::number(board_matrix[8+2][13])));
        ui->tableWidget->item(8,13)->setBackground(Qt::gray);ui->tableWidget->item(8+1,13)->setBackground(Qt::gray);ui->tableWidget->item(8+2,13)->setBackground(Qt::gray);
        vertical_walls.append(place(455+2, 275+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 8 && wall_info.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[8][15] = 1; board_matrix[8+1][15] = 1; board_matrix[8+2][15] = 1;
        ui->tableWidget->setItem(8,15, new QTableWidgetItem(QString::number(board_matrix[8][15])));ui->tableWidget->setItem(8+1,15, new QTableWidgetItem(QString::number(board_matrix[8+1][15])));ui->tableWidget->setItem(8+2,15, new QTableWidgetItem(QString::number(board_matrix[8+2][15])));
        ui->tableWidget->item(8,15)->setBackground(Qt::gray);ui->tableWidget->item(8+1,15)->setBackground(Qt::gray);ui->tableWidget->item(8+2,15)->setBackground(Qt::gray);
        vertical_walls.append(place(520+2, 275+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 10 && wall_info.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[10][1] = 1; board_matrix[10+1][1] = 1; board_matrix[10+2][1] = 1;
        ui->tableWidget->setItem(10,1, new QTableWidgetItem(QString::number(board_matrix[10][1])));ui->tableWidget->setItem(10+1,1, new QTableWidgetItem(QString::number(board_matrix[10+1][1])));ui->tableWidget->setItem(10+2,1, new QTableWidgetItem(QString::number(board_matrix[10+2][1])));
        ui->tableWidget->item(10,1)->setBackground(Qt::gray);ui->tableWidget->item(10+1,1)->setBackground(Qt::gray);ui->tableWidget->item(10+2,1)->setBackground(Qt::gray);
        vertical_walls.append(place(65+2, 340+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 10 && wall_info.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[10][3] = 1; board_matrix[10+1][3] = 1; board_matrix[10+2][3] = 1;
        ui->tableWidget->setItem(10,3, new QTableWidgetItem(QString::number(board_matrix[10][3])));ui->tableWidget->setItem(10+1,3, new QTableWidgetItem(QString::number(board_matrix[10+1][3])));ui->tableWidget->setItem(10+2,3, new QTableWidgetItem(QString::number(board_matrix[10+2][3])));
        ui->tableWidget->item(10,3)->setBackground(Qt::gray);ui->tableWidget->item(10+1,3)->setBackground(Qt::gray);ui->tableWidget->item(10+2,3)->setBackground(Qt::gray);
        vertical_walls.append(place(130+2, 340+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 10 && wall_info.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[10][5] = 1; board_matrix[10+1][5] = 1; board_matrix[10+2][5] = 1;
        ui->tableWidget->setItem(10,5, new QTableWidgetItem(QString::number(board_matrix[10][5])));ui->tableWidget->setItem(10+1,5, new QTableWidgetItem(QString::number(board_matrix[10+1][5])));ui->tableWidget->setItem(10+2,5, new QTableWidgetItem(QString::number(board_matrix[10+2][5])));
        ui->tableWidget->item(10,5)->setBackground(Qt::gray);ui->tableWidget->item(10+1,5)->setBackground(Qt::gray);ui->tableWidget->item(10+2,5)->setBackground(Qt::gray);
        vertical_walls.append(place(195+2, 340+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 10 && wall_info.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[10][7] = 1; board_matrix[10+1][7] = 1; board_matrix[10+2][7] = 1;
        ui->tableWidget->setItem(10,7, new QTableWidgetItem(QString::number(board_matrix[10][7])));ui->tableWidget->setItem(10+1,7, new QTableWidgetItem(QString::number(board_matrix[10+1][7])));ui->tableWidget->setItem(10+2,7, new QTableWidgetItem(QString::number(board_matrix[10+2][7])));
        ui->tableWidget->item(10,7)->setBackground(Qt::gray);ui->tableWidget->item(10+1,7)->setBackground(Qt::gray);ui->tableWidget->item(10+2,7)->setBackground(Qt::gray);
        vertical_walls.append(place(260+2, 340+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 10 && wall_info.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[10][9] = 1; board_matrix[10+1][9] = 1; board_matrix[10+2][9] = 1;
        ui->tableWidget->setItem(10,9, new QTableWidgetItem(QString::number(board_matrix[10][9])));ui->tableWidget->setItem(10+1,9, new QTableWidgetItem(QString::number(board_matrix[10+1][9])));ui->tableWidget->setItem(10+2,9, new QTableWidgetItem(QString::number(board_matrix[10+2][9])));
        ui->tableWidget->item(10,9)->setBackground(Qt::gray);ui->tableWidget->item(10+1,9)->setBackground(Qt::gray);ui->tableWidget->item(10+2,9)->setBackground(Qt::gray);
        vertical_walls.append(place(325+2, 340+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 10 && wall_info.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[10][11] = 1; board_matrix[10+1][11] = 1; board_matrix[10+2][11] = 1;
        ui->tableWidget->setItem(10,11, new QTableWidgetItem(QString::number(board_matrix[10][11])));ui->tableWidget->setItem(10+1,11, new QTableWidgetItem(QString::number(board_matrix[10+1][11])));ui->tableWidget->setItem(10+2,11, new QTableWidgetItem(QString::number(board_matrix[10+2][11])));
        ui->tableWidget->item(10,11)->setBackground(Qt::gray);ui->tableWidget->item(10+1,11)->setBackground(Qt::gray);ui->tableWidget->item(10+2,11)->setBackground(Qt::gray);
        vertical_walls.append(place(390+2, 340+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 10 && wall_info.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[10][13] = 1; board_matrix[10+1][13] = 1; board_matrix[10+2][13] = 1;
        ui->tableWidget->setItem(10,13, new QTableWidgetItem(QString::number(board_matrix[10][13])));ui->tableWidget->setItem(10+1,13, new QTableWidgetItem(QString::number(board_matrix[10+1][13])));ui->tableWidget->setItem(10+2,13, new QTableWidgetItem(QString::number(board_matrix[10+2][13])));
        ui->tableWidget->item(10,13)->setBackground(Qt::gray);ui->tableWidget->item(10+1,13)->setBackground(Qt::gray);ui->tableWidget->item(10+2,13)->setBackground(Qt::gray);
        vertical_walls.append(place(455+2, 340+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 10 && wall_info.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[10][15] = 1; board_matrix[10+1][15] = 1; board_matrix[10+2][15] = 1;
        ui->tableWidget->setItem(10,15, new QTableWidgetItem(QString::number(board_matrix[10][15])));ui->tableWidget->setItem(10+1,15, new QTableWidgetItem(QString::number(board_matrix[10+1][15])));ui->tableWidget->setItem(10+2,15, new QTableWidgetItem(QString::number(board_matrix[10+2][15])));
        ui->tableWidget->item(10,15)->setBackground(Qt::gray);ui->tableWidget->item(10+1,15)->setBackground(Qt::gray);ui->tableWidget->item(10+2,15)->setBackground(Qt::gray);
        vertical_walls.append(place(520+2, 340+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 12 && wall_info.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[12][1] = 1; board_matrix[12+1][1] = 1; board_matrix[12+2][1] = 1;
        ui->tableWidget->setItem(12,1, new QTableWidgetItem(QString::number(board_matrix[12][1])));ui->tableWidget->setItem(12+1,1, new QTableWidgetItem(QString::number(board_matrix[12+1][1])));ui->tableWidget->setItem(12+2,1, new QTableWidgetItem(QString::number(board_matrix[12+2][1])));
        ui->tableWidget->item(12,1)->setBackground(Qt::gray);ui->tableWidget->item(12+1,1)->setBackground(Qt::gray);ui->tableWidget->item(12+2,1)->setBackground(Qt::gray);
        vertical_walls.append(place(65+2, 405+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 12 && wall_info.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[12][3] = 1; board_matrix[12+1][3] = 1; board_matrix[12+2][3] = 1;
        ui->tableWidget->setItem(12,3, new QTableWidgetItem(QString::number(board_matrix[12][3])));ui->tableWidget->setItem(12+1,3, new QTableWidgetItem(QString::number(board_matrix[12+1][3])));ui->tableWidget->setItem(12+2,3, new QTableWidgetItem(QString::number(board_matrix[12+2][3])));
        ui->tableWidget->item(12,3)->setBackground(Qt::gray);ui->tableWidget->item(12+1,3)->setBackground(Qt::gray);ui->tableWidget->item(12+2,3)->setBackground(Qt::gray);
        vertical_walls.append(place(130+2, 405+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 12 && wall_info.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[12][5] = 1; board_matrix[12+1][5] = 1; board_matrix[12+2][5] = 1;
        ui->tableWidget->setItem(12,5, new QTableWidgetItem(QString::number(board_matrix[12][5])));ui->tableWidget->setItem(12+1,5, new QTableWidgetItem(QString::number(board_matrix[12+1][5])));ui->tableWidget->setItem(12+2,5, new QTableWidgetItem(QString::number(board_matrix[12+2][5])));
        ui->tableWidget->item(12,5)->setBackground(Qt::gray);ui->tableWidget->item(12+1,5)->setBackground(Qt::gray);ui->tableWidget->item(12+2,5)->setBackground(Qt::gray);
        vertical_walls.append(place(195+2, 405+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 12 && wall_info.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[12][7] = 1; board_matrix[12+1][7] = 1; board_matrix[12+2][7] = 1;
        ui->tableWidget->setItem(12,7, new QTableWidgetItem(QString::number(board_matrix[12][7])));ui->tableWidget->setItem(12+1,7, new QTableWidgetItem(QString::number(board_matrix[12+1][7])));ui->tableWidget->setItem(12+2,7, new QTableWidgetItem(QString::number(board_matrix[12+2][7])));
        ui->tableWidget->item(12,7)->setBackground(Qt::gray);ui->tableWidget->item(12+1,7)->setBackground(Qt::gray);ui->tableWidget->item(12+2,7)->setBackground(Qt::gray);
        vertical_walls.append(place(260+2, 405+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 12 && wall_info.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[12][9] = 1; board_matrix[12+1][9] = 1; board_matrix[12+2][9] = 1;
        ui->tableWidget->setItem(12,9, new QTableWidgetItem(QString::number(board_matrix[12][9])));ui->tableWidget->setItem(12+1,9, new QTableWidgetItem(QString::number(board_matrix[12+1][9])));ui->tableWidget->setItem(12+2,9, new QTableWidgetItem(QString::number(board_matrix[12+2][9])));
        ui->tableWidget->item(12,9)->setBackground(Qt::gray);ui->tableWidget->item(12+1,9)->setBackground(Qt::gray);ui->tableWidget->item(12+2,9)->setBackground(Qt::gray);
        vertical_walls.append(place(325+2, 405+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 12 && wall_info.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[12][11] = 1; board_matrix[12+1][11] = 1; board_matrix[12+2][11] = 1;
        ui->tableWidget->setItem(12,11, new QTableWidgetItem(QString::number(board_matrix[12][11])));ui->tableWidget->setItem(12+1,11, new QTableWidgetItem(QString::number(board_matrix[12+1][11])));ui->tableWidget->setItem(12+2,11, new QTableWidgetItem(QString::number(board_matrix[12+2][11])));
        ui->tableWidget->item(12,11)->setBackground(Qt::gray);ui->tableWidget->item(12+1,11)->setBackground(Qt::gray);ui->tableWidget->item(12+2,11)->setBackground(Qt::gray);
        vertical_walls.append(place(390+2, 405+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 12 && wall_info.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[12][13] = 1; board_matrix[12+1][13] = 1; board_matrix[12+2][13] = 1;
        ui->tableWidget->setItem(12,13, new QTableWidgetItem(QString::number(board_matrix[12][13])));ui->tableWidget->setItem(12+1,13, new QTableWidgetItem(QString::number(board_matrix[12+1][13])));ui->tableWidget->setItem(12+2,13, new QTableWidgetItem(QString::number(board_matrix[12+2][13])));
        ui->tableWidget->item(12,13)->setBackground(Qt::gray);ui->tableWidget->item(12+1,13)->setBackground(Qt::gray);ui->tableWidget->item(12+2,13)->setBackground(Qt::gray);
        vertical_walls.append(place(455+2, 405+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 12 && wall_info.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[12][15] = 1; board_matrix[12+1][15] = 1; board_matrix[12+2][15] = 1;
        ui->tableWidget->setItem(12,15, new QTableWidgetItem(QString::number(board_matrix[12][15])));ui->tableWidget->setItem(12+1,15, new QTableWidgetItem(QString::number(board_matrix[12+1][15])));ui->tableWidget->setItem(12+2,15, new QTableWidgetItem(QString::number(board_matrix[12+2][15])));
        ui->tableWidget->item(12,15)->setBackground(Qt::gray);ui->tableWidget->item(12+1,15)->setBackground(Qt::gray);ui->tableWidget->item(12+2,15)->setBackground(Qt::gray);
        vertical_walls.append(place(520+2, 405+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 14 && wall_info.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[14][1] = 1; board_matrix[14+1][1] = 1; board_matrix[14+2][1] = 1;
        ui->tableWidget->setItem(14,1, new QTableWidgetItem(QString::number(board_matrix[14][1])));ui->tableWidget->setItem(14+1,1, new QTableWidgetItem(QString::number(board_matrix[14+1][1])));ui->tableWidget->setItem(14+2,1, new QTableWidgetItem(QString::number(board_matrix[14+2][1])));
        ui->tableWidget->item(14,1)->setBackground(Qt::gray);ui->tableWidget->item(14+1,1)->setBackground(Qt::gray);ui->tableWidget->item(14+2,1)->setBackground(Qt::gray);
        vertical_walls.append(place(65+2, 470+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 14 && wall_info.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[14][3] = 1; board_matrix[14+1][3] = 1; board_matrix[14+2][3] = 1;
        ui->tableWidget->setItem(14,3, new QTableWidgetItem(QString::number(board_matrix[14][3])));ui->tableWidget->setItem(14+1,3, new QTableWidgetItem(QString::number(board_matrix[14+1][3])));ui->tableWidget->setItem(14+2,3, new QTableWidgetItem(QString::number(board_matrix[14+2][3])));
        ui->tableWidget->item(14,3)->setBackground(Qt::gray);ui->tableWidget->item(14+1,3)->setBackground(Qt::gray);ui->tableWidget->item(14+2,3)->setBackground(Qt::gray);
        vertical_walls.append(place(130+2, 470+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 14 && wall_info.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[14][5] = 1; board_matrix[14+1][5] = 1; board_matrix[14+2][5] = 1;
        ui->tableWidget->setItem(14,5, new QTableWidgetItem(QString::number(board_matrix[14][5])));ui->tableWidget->setItem(14+1,5, new QTableWidgetItem(QString::number(board_matrix[14+1][5])));ui->tableWidget->setItem(14+2,5, new QTableWidgetItem(QString::number(board_matrix[14+2][5])));
        ui->tableWidget->item(14,5)->setBackground(Qt::gray);ui->tableWidget->item(14+1,5)->setBackground(Qt::gray);ui->tableWidget->item(14+2,5)->setBackground(Qt::gray);
        vertical_walls.append(place(195+2, 470+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 14 && wall_info.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[14][7] = 1; board_matrix[14+1][7] = 1; board_matrix[14+2][7] = 1;
        ui->tableWidget->setItem(14,7, new QTableWidgetItem(QString::number(board_matrix[14][7])));ui->tableWidget->setItem(14+1,7, new QTableWidgetItem(QString::number(board_matrix[14+1][7])));ui->tableWidget->setItem(14+2,7, new QTableWidgetItem(QString::number(board_matrix[14+2][7])));
        ui->tableWidget->item(14,7)->setBackground(Qt::gray);ui->tableWidget->item(14+1,7)->setBackground(Qt::gray);ui->tableWidget->item(14+2,7)->setBackground(Qt::gray);
        vertical_walls.append(place(260+2, 470+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 14 && wall_info.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[14][9] = 1; board_matrix[14+1][9] = 1; board_matrix[14+2][9] = 1;
        ui->tableWidget->setItem(14,9, new QTableWidgetItem(QString::number(board_matrix[14][9])));ui->tableWidget->setItem(14+1,9, new QTableWidgetItem(QString::number(board_matrix[14+1][9])));ui->tableWidget->setItem(14+2,9, new QTableWidgetItem(QString::number(board_matrix[14+2][9])));
        ui->tableWidget->item(14,9)->setBackground(Qt::gray);ui->tableWidget->item(14+1,9)->setBackground(Qt::gray);ui->tableWidget->item(14+2,9)->setBackground(Qt::gray);
        vertical_walls.append(place(325+2, 470+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 14 && wall_info.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[14][11] = 1; board_matrix[14+1][11] = 1; board_matrix[14+2][11] = 1;
        ui->tableWidget->setItem(14,11, new QTableWidgetItem(QString::number(board_matrix[14][11])));ui->tableWidget->setItem(14+1,11, new QTableWidgetItem(QString::number(board_matrix[14+1][11])));ui->tableWidget->setItem(14+2,11, new QTableWidgetItem(QString::number(board_matrix[14+2][11])));
        ui->tableWidget->item(14,11)->setBackground(Qt::gray);ui->tableWidget->item(14+1,11)->setBackground(Qt::gray);ui->tableWidget->item(14+2,11)->setBackground(Qt::gray);
        vertical_walls.append(place(390+2, 470+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 14 && wall_info.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[14][13] = 1; board_matrix[14+1][13] = 1; board_matrix[14+2][13] = 1;
        ui->tableWidget->setItem(14,13, new QTableWidgetItem(QString::number(board_matrix[14][13])));ui->tableWidget->setItem(14+1,13, new QTableWidgetItem(QString::number(board_matrix[14+1][13])));ui->tableWidget->setItem(14+2,13, new QTableWidgetItem(QString::number(board_matrix[14+2][13])));
        ui->tableWidget->item(14,13)->setBackground(Qt::gray);ui->tableWidget->item(14+1,13)->setBackground(Qt::gray);ui->tableWidget->item(14+2,13)->setBackground(Qt::gray);
        vertical_walls.append(place(455+2, 470+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 14 && wall_info.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[14][15] = 1; board_matrix[14+1][15] = 1; board_matrix[14+2][15] = 1;
        ui->tableWidget->setItem(14,15, new QTableWidgetItem(QString::number(board_matrix[14][15])));ui->tableWidget->setItem(14+1,15, new QTableWidgetItem(QString::number(board_matrix[14+1][15])));ui->tableWidget->setItem(14+2,15, new QTableWidgetItem(QString::number(board_matrix[14+2][15])));
        ui->tableWidget->item(14,15)->setBackground(Qt::gray);ui->tableWidget->item(14+1,15)->setBackground(Qt::gray);ui->tableWidget->item(14+2,15)->setBackground(Qt::gray);
        vertical_walls.append(place(520+2, 470+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 1 && wall_info.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[1][0] = 1; board_matrix[1][0+1] = 1; board_matrix[1][0+2] = 1;
        ui->tableWidget->setItem(1,0, new QTableWidgetItem(QString::number(board_matrix[1][0])));ui->tableWidget->setItem(1,0+1, new QTableWidgetItem(QString::number(board_matrix[1][0+1])));ui->tableWidget->setItem(1,0+2, new QTableWidgetItem(QString::number(board_matrix[1][0+2])));
        ui->tableWidget->item(1,0)->setBackground(Qt::gray);ui->tableWidget->item(1,0+1)->setBackground(Qt::gray);ui->tableWidget->item(1,0+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(15+2, 65+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 1 && wall_info.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[1][2] = 1; board_matrix[1][2+1] = 1; board_matrix[1][2+2] = 1;
        ui->tableWidget->setItem(1,2, new QTableWidgetItem(QString::number(board_matrix[1][2])));ui->tableWidget->setItem(1,2+1, new QTableWidgetItem(QString::number(board_matrix[1][2+1])));ui->tableWidget->setItem(1,2+2, new QTableWidgetItem(QString::number(board_matrix[1][2+2])));
        ui->tableWidget->item(1,2)->setBackground(Qt::gray);ui->tableWidget->item(1,2+1)->setBackground(Qt::gray);ui->tableWidget->item(1,2+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(80+2, 65+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 1 && wall_info.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[1][4] = 1; board_matrix[1][4+1] = 1; board_matrix[1][4+2] = 1;
        ui->tableWidget->setItem(1,4, new QTableWidgetItem(QString::number(board_matrix[1][4])));ui->tableWidget->setItem(1,4+1, new QTableWidgetItem(QString::number(board_matrix[1][4+1])));ui->tableWidget->setItem(1,4+2, new QTableWidgetItem(QString::number(board_matrix[1][4+2])));
        ui->tableWidget->item(1,4)->setBackground(Qt::gray);ui->tableWidget->item(1,4+1)->setBackground(Qt::gray);ui->tableWidget->item(1,4+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(145+2, 65+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 1 && wall_info.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[1][6] = 1; board_matrix[1][6+1] = 1; board_matrix[1][6+2] = 1;
        ui->tableWidget->setItem(1,6, new QTableWidgetItem(QString::number(board_matrix[1][6])));ui->tableWidget->setItem(1,6+1, new QTableWidgetItem(QString::number(board_matrix[1][6+1])));ui->tableWidget->setItem(1,6+2, new QTableWidgetItem(QString::number(board_matrix[1][6+2])));
        ui->tableWidget->item(1,6)->setBackground(Qt::gray);ui->tableWidget->item(1,6+1)->setBackground(Qt::gray);ui->tableWidget->item(1,6+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(210+2, 65+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 1 && wall_info.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[1][8] = 1; board_matrix[1][8+1] = 1; board_matrix[1][8+2] = 1;
        ui->tableWidget->setItem(1,8, new QTableWidgetItem(QString::number(board_matrix[1][8])));ui->tableWidget->setItem(1,8+1, new QTableWidgetItem(QString::number(board_matrix[1][8+1])));ui->tableWidget->setItem(1,8+2, new QTableWidgetItem(QString::number(board_matrix[1][8+2])));
        ui->tableWidget->item(1,8)->setBackground(Qt::gray);ui->tableWidget->item(1,8+1)->setBackground(Qt::gray);ui->tableWidget->item(1,8+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(275+2, 65+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 1 && wall_info.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[1][10] = 1; board_matrix[1][10+1] = 1; board_matrix[1][10+2] = 1;
        ui->tableWidget->setItem(1,10, new QTableWidgetItem(QString::number(board_matrix[1][10])));ui->tableWidget->setItem(1,10+1, new QTableWidgetItem(QString::number(board_matrix[1][10+1])));ui->tableWidget->setItem(1,10+2, new QTableWidgetItem(QString::number(board_matrix[1][10+2])));
        ui->tableWidget->item(1,10)->setBackground(Qt::gray);ui->tableWidget->item(1,10+1)->setBackground(Qt::gray);ui->tableWidget->item(1,10+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(340+2, 65+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 1 && wall_info.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[1][12] = 1; board_matrix[1][12+1] = 1; board_matrix[1][12+2] = 1;
        ui->tableWidget->setItem(1,12, new QTableWidgetItem(QString::number(board_matrix[1][12])));ui->tableWidget->setItem(1,12+1, new QTableWidgetItem(QString::number(board_matrix[1][12+1])));ui->tableWidget->setItem(1,12+2, new QTableWidgetItem(QString::number(board_matrix[1][12+2])));
        ui->tableWidget->item(1,12)->setBackground(Qt::gray);ui->tableWidget->item(1,12+1)->setBackground(Qt::gray);ui->tableWidget->item(1,12+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(405+2, 65+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 1 && wall_info.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[1][14] = 1; board_matrix[1][14+1] = 1; board_matrix[1][14+2] = 1;
        ui->tableWidget->setItem(1,14, new QTableWidgetItem(QString::number(board_matrix[1][14])));ui->tableWidget->setItem(1,14+1, new QTableWidgetItem(QString::number(board_matrix[1][14+1])));ui->tableWidget->setItem(1,14+2, new QTableWidgetItem(QString::number(board_matrix[1][14+2])));
        ui->tableWidget->item(1,14)->setBackground(Qt::gray);ui->tableWidget->item(1,14+1)->setBackground(Qt::gray);ui->tableWidget->item(1,14+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(470+2, 65+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 3 && wall_info.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[3][0] = 1; board_matrix[3][0+1] = 1; board_matrix[3][0+2] = 1;
        ui->tableWidget->setItem(3,0, new QTableWidgetItem(QString::number(board_matrix[3][0])));ui->tableWidget->setItem(3,0+1, new QTableWidgetItem(QString::number(board_matrix[3][0+1])));ui->tableWidget->setItem(3,0+2, new QTableWidgetItem(QString::number(board_matrix[3][0+2])));
        ui->tableWidget->item(3,0)->setBackground(Qt::gray);ui->tableWidget->item(3,0+1)->setBackground(Qt::gray);ui->tableWidget->item(3,0+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(15+2, 130+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 3 && wall_info.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[3][2] = 1; board_matrix[3][2+1] = 1; board_matrix[3][2+2] = 1;
        ui->tableWidget->setItem(3,2, new QTableWidgetItem(QString::number(board_matrix[3][2])));ui->tableWidget->setItem(3,2+1, new QTableWidgetItem(QString::number(board_matrix[3][2+1])));ui->tableWidget->setItem(3,2+2, new QTableWidgetItem(QString::number(board_matrix[3][2+2])));
        ui->tableWidget->item(3,2)->setBackground(Qt::gray);ui->tableWidget->item(3,2+1)->setBackground(Qt::gray);ui->tableWidget->item(3,2+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(80+2, 130+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 3 && wall_info.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[3][4] = 1; board_matrix[3][4+1] = 1; board_matrix[3][4+2] = 1;
        ui->tableWidget->setItem(3,4, new QTableWidgetItem(QString::number(board_matrix[3][4])));ui->tableWidget->setItem(3,4+1, new QTableWidgetItem(QString::number(board_matrix[3][4+1])));ui->tableWidget->setItem(3,4+2, new QTableWidgetItem(QString::number(board_matrix[3][4+2])));
        ui->tableWidget->item(3,4)->setBackground(Qt::gray);ui->tableWidget->item(3,4+1)->setBackground(Qt::gray);ui->tableWidget->item(3,4+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(145+2, 130+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 3 && wall_info.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[3][6] = 1; board_matrix[3][6+1] = 1; board_matrix[3][6+2] = 1;
        ui->tableWidget->setItem(3,6, new QTableWidgetItem(QString::number(board_matrix[3][6])));ui->tableWidget->setItem(3,6+1, new QTableWidgetItem(QString::number(board_matrix[3][6+1])));ui->tableWidget->setItem(3,6+2, new QTableWidgetItem(QString::number(board_matrix[3][6+2])));
        ui->tableWidget->item(3,6)->setBackground(Qt::gray);ui->tableWidget->item(3,6+1)->setBackground(Qt::gray);ui->tableWidget->item(3,6+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(210+2, 130+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 3 && wall_info.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[3][8] = 1; board_matrix[3][8+1] = 1; board_matrix[3][8+2] = 1;
        ui->tableWidget->setItem(3,8, new QTableWidgetItem(QString::number(board_matrix[3][8])));ui->tableWidget->setItem(3,8+1, new QTableWidgetItem(QString::number(board_matrix[3][8+1])));ui->tableWidget->setItem(3,8+2, new QTableWidgetItem(QString::number(board_matrix[3][8+2])));
        ui->tableWidget->item(3,8)->setBackground(Qt::gray);ui->tableWidget->item(3,8+1)->setBackground(Qt::gray);ui->tableWidget->item(3,8+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(275+2, 130+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 3 && wall_info.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[3][10] = 1; board_matrix[3][10+1] = 1; board_matrix[3][10+2] = 1;
        ui->tableWidget->setItem(3,10, new QTableWidgetItem(QString::number(board_matrix[3][10])));ui->tableWidget->setItem(3,10+1, new QTableWidgetItem(QString::number(board_matrix[3][10+1])));ui->tableWidget->setItem(3,10+2, new QTableWidgetItem(QString::number(board_matrix[3][10+2])));
        ui->tableWidget->item(3,10)->setBackground(Qt::gray);ui->tableWidget->item(3,10+1)->setBackground(Qt::gray);ui->tableWidget->item(3,10+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(340+2, 130+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 3 && wall_info.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[3][12] = 1; board_matrix[3][12+1] = 1; board_matrix[3][12+2] = 1;
        ui->tableWidget->setItem(3,12, new QTableWidgetItem(QString::number(board_matrix[3][12])));ui->tableWidget->setItem(3,12+1, new QTableWidgetItem(QString::number(board_matrix[3][12+1])));ui->tableWidget->setItem(3,12+2, new QTableWidgetItem(QString::number(board_matrix[3][12+2])));
        ui->tableWidget->item(3,12)->setBackground(Qt::gray);ui->tableWidget->item(3,12+1)->setBackground(Qt::gray);ui->tableWidget->item(3,12+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(405+2, 130+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 3 && wall_info.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[3][14] = 1; board_matrix[3][14+1] = 1; board_matrix[3][14+2] = 1;
        ui->tableWidget->setItem(3,14, new QTableWidgetItem(QString::number(board_matrix[3][14])));ui->tableWidget->setItem(3,14+1, new QTableWidgetItem(QString::number(board_matrix[3][14+1])));ui->tableWidget->setItem(3,14+2, new QTableWidgetItem(QString::number(board_matrix[3][14+2])));
        ui->tableWidget->item(3,14)->setBackground(Qt::gray);ui->tableWidget->item(3,14+1)->setBackground(Qt::gray);ui->tableWidget->item(3,14+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(470+2, 130+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 5 && wall_info.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[5][0] = 1; board_matrix[5][0+1] = 1; board_matrix[5][0+2] = 1;
        ui->tableWidget->setItem(5,0, new QTableWidgetItem(QString::number(board_matrix[5][0])));ui->tableWidget->setItem(5,0+1, new QTableWidgetItem(QString::number(board_matrix[5][0+1])));ui->tableWidget->setItem(5,0+2, new QTableWidgetItem(QString::number(board_matrix[5][0+2])));
        ui->tableWidget->item(5,0)->setBackground(Qt::gray);ui->tableWidget->item(5,0+1)->setBackground(Qt::gray);ui->tableWidget->item(5,0+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(15+2, 195+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 5 && wall_info.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[5][2] = 1; board_matrix[5][2+1] = 1; board_matrix[5][2+2] = 1;
        ui->tableWidget->setItem(5,2, new QTableWidgetItem(QString::number(board_matrix[5][2])));ui->tableWidget->setItem(5,2+1, new QTableWidgetItem(QString::number(board_matrix[5][2+1])));ui->tableWidget->setItem(5,2+2, new QTableWidgetItem(QString::number(board_matrix[5][2+2])));
        ui->tableWidget->item(5,2)->setBackground(Qt::gray);ui->tableWidget->item(5,2+1)->setBackground(Qt::gray);ui->tableWidget->item(5,2+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(80+2, 195+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 5 && wall_info.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[5][4] = 1; board_matrix[5][4+1] = 1; board_matrix[5][4+2] = 1;
        ui->tableWidget->setItem(5,4, new QTableWidgetItem(QString::number(board_matrix[5][4])));ui->tableWidget->setItem(5,4+1, new QTableWidgetItem(QString::number(board_matrix[5][4+1])));ui->tableWidget->setItem(5,4+2, new QTableWidgetItem(QString::number(board_matrix[5][4+2])));
        ui->tableWidget->item(5,4)->setBackground(Qt::gray);ui->tableWidget->item(5,4+1)->setBackground(Qt::gray);ui->tableWidget->item(5,4+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(145+2, 195+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 5 && wall_info.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[5][6] = 1; board_matrix[5][6+1] = 1; board_matrix[5][6+2] = 1;
        ui->tableWidget->setItem(5,6, new QTableWidgetItem(QString::number(board_matrix[5][6])));ui->tableWidget->setItem(5,6+1, new QTableWidgetItem(QString::number(board_matrix[5][6+1])));ui->tableWidget->setItem(5,6+2, new QTableWidgetItem(QString::number(board_matrix[5][6+2])));
        ui->tableWidget->item(5,6)->setBackground(Qt::gray);ui->tableWidget->item(5,6+1)->setBackground(Qt::gray);ui->tableWidget->item(5,6+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(210+2, 195+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 5 && wall_info.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[5][8] = 1; board_matrix[5][8+1] = 1; board_matrix[5][8+2] = 1;
        ui->tableWidget->setItem(5,8, new QTableWidgetItem(QString::number(board_matrix[5][8])));ui->tableWidget->setItem(5,8+1, new QTableWidgetItem(QString::number(board_matrix[5][8+1])));ui->tableWidget->setItem(5,8+2, new QTableWidgetItem(QString::number(board_matrix[5][8+2])));
        ui->tableWidget->item(5,8)->setBackground(Qt::gray);ui->tableWidget->item(5,8+1)->setBackground(Qt::gray);ui->tableWidget->item(5,8+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(275+2, 195+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 5 && wall_info.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[5][10] = 1; board_matrix[5][10+1] = 1; board_matrix[5][10+2] = 1;
        ui->tableWidget->setItem(5,10, new QTableWidgetItem(QString::number(board_matrix[5][10])));ui->tableWidget->setItem(5,10+1, new QTableWidgetItem(QString::number(board_matrix[5][10+1])));ui->tableWidget->setItem(5,10+2, new QTableWidgetItem(QString::number(board_matrix[5][10+2])));
        ui->tableWidget->item(5,10)->setBackground(Qt::gray);ui->tableWidget->item(5,10+1)->setBackground(Qt::gray);ui->tableWidget->item(5,10+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(340+2, 195+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 5 && wall_info.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[5][12] = 1; board_matrix[5][12+1] = 1; board_matrix[5][12+2] = 1;
        ui->tableWidget->setItem(5,12, new QTableWidgetItem(QString::number(board_matrix[5][12])));ui->tableWidget->setItem(5,12+1, new QTableWidgetItem(QString::number(board_matrix[5][12+1])));ui->tableWidget->setItem(5,12+2, new QTableWidgetItem(QString::number(board_matrix[5][12+2])));
        ui->tableWidget->item(5,12)->setBackground(Qt::gray);ui->tableWidget->item(5,12+1)->setBackground(Qt::gray);ui->tableWidget->item(5,12+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(405+2, 195+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 5 && wall_info.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[5][14] = 1; board_matrix[5][14+1] = 1; board_matrix[5][14+2] = 1;
        ui->tableWidget->setItem(5,14, new QTableWidgetItem(QString::number(board_matrix[5][14])));ui->tableWidget->setItem(5,14+1, new QTableWidgetItem(QString::number(board_matrix[5][14+1])));ui->tableWidget->setItem(5,14+2, new QTableWidgetItem(QString::number(board_matrix[5][14+2])));
        ui->tableWidget->item(5,14)->setBackground(Qt::gray);ui->tableWidget->item(5,14+1)->setBackground(Qt::gray);ui->tableWidget->item(5,14+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(470+2, 195+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 7 && wall_info.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[7][0] = 1; board_matrix[7][0+1] = 1; board_matrix[7][0+2] = 1;
        ui->tableWidget->setItem(7,0, new QTableWidgetItem(QString::number(board_matrix[7][0])));ui->tableWidget->setItem(7,0+1, new QTableWidgetItem(QString::number(board_matrix[7][0+1])));ui->tableWidget->setItem(7,0+2, new QTableWidgetItem(QString::number(board_matrix[7][0+2])));
        ui->tableWidget->item(7,0)->setBackground(Qt::gray);ui->tableWidget->item(7,0+1)->setBackground(Qt::gray);ui->tableWidget->item(7,0+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(15+2, 260+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 7 && wall_info.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[7][2] = 1; board_matrix[7][2+1] = 1; board_matrix[7][2+2] = 1;
        ui->tableWidget->setItem(7,2, new QTableWidgetItem(QString::number(board_matrix[7][2])));ui->tableWidget->setItem(7,2+1, new QTableWidgetItem(QString::number(board_matrix[7][2+1])));ui->tableWidget->setItem(7,2+2, new QTableWidgetItem(QString::number(board_matrix[7][2+2])));
        ui->tableWidget->item(7,2)->setBackground(Qt::gray);ui->tableWidget->item(7,2+1)->setBackground(Qt::gray);ui->tableWidget->item(7,2+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(80+2, 260+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 7 && wall_info.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[7][4] = 1; board_matrix[7][4+1] = 1; board_matrix[7][4+2] = 1;
        ui->tableWidget->setItem(7,4, new QTableWidgetItem(QString::number(board_matrix[7][4])));ui->tableWidget->setItem(7,4+1, new QTableWidgetItem(QString::number(board_matrix[7][4+1])));ui->tableWidget->setItem(7,4+2, new QTableWidgetItem(QString::number(board_matrix[7][4+2])));
        ui->tableWidget->item(7,4)->setBackground(Qt::gray);ui->tableWidget->item(7,4+1)->setBackground(Qt::gray);ui->tableWidget->item(7,4+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(145+2, 260+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 7 && wall_info.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[7][6] = 1; board_matrix[7][6+1] = 1; board_matrix[7][6+2] = 1;
        ui->tableWidget->setItem(7,6, new QTableWidgetItem(QString::number(board_matrix[7][6])));ui->tableWidget->setItem(7,6+1, new QTableWidgetItem(QString::number(board_matrix[7][6+1])));ui->tableWidget->setItem(7,6+2, new QTableWidgetItem(QString::number(board_matrix[7][6+2])));
        ui->tableWidget->item(7,6)->setBackground(Qt::gray);ui->tableWidget->item(7,6+1)->setBackground(Qt::gray);ui->tableWidget->item(7,6+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(210+2, 260+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 7 && wall_info.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[7][8] = 1; board_matrix[7][8+1] = 1; board_matrix[7][8+2] = 1;
        ui->tableWidget->setItem(7,8, new QTableWidgetItem(QString::number(board_matrix[7][8])));ui->tableWidget->setItem(7,8+1, new QTableWidgetItem(QString::number(board_matrix[7][8+1])));ui->tableWidget->setItem(7,8+2, new QTableWidgetItem(QString::number(board_matrix[7][8+2])));
        ui->tableWidget->item(7,8)->setBackground(Qt::gray);ui->tableWidget->item(7,8+1)->setBackground(Qt::gray);ui->tableWidget->item(7,8+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(275+2, 260+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 7 && wall_info.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[7][10] = 1; board_matrix[7][10+1] = 1; board_matrix[7][10+2] = 1;
        ui->tableWidget->setItem(7,10, new QTableWidgetItem(QString::number(board_matrix[7][10])));ui->tableWidget->setItem(7,10+1, new QTableWidgetItem(QString::number(board_matrix[7][10+1])));ui->tableWidget->setItem(7,10+2, new QTableWidgetItem(QString::number(board_matrix[7][10+2])));
        ui->tableWidget->item(7,10)->setBackground(Qt::gray);ui->tableWidget->item(7,10+1)->setBackground(Qt::gray);ui->tableWidget->item(7,10+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(340+2, 260+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 7 && wall_info.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[7][12] = 1; board_matrix[7][12+1] = 1; board_matrix[7][12+2] = 1;
        ui->tableWidget->setItem(7,12, new QTableWidgetItem(QString::number(board_matrix[7][12])));ui->tableWidget->setItem(7,12+1, new QTableWidgetItem(QString::number(board_matrix[7][12+1])));ui->tableWidget->setItem(7,12+2, new QTableWidgetItem(QString::number(board_matrix[7][12+2])));
        ui->tableWidget->item(7,12)->setBackground(Qt::gray);ui->tableWidget->item(7,12+1)->setBackground(Qt::gray);ui->tableWidget->item(7,12+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(405+2, 260+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 7 && wall_info.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[7][14] = 1; board_matrix[7][14+1] = 1; board_matrix[7][14+2] = 1;
        ui->tableWidget->setItem(7,14, new QTableWidgetItem(QString::number(board_matrix[7][14])));ui->tableWidget->setItem(7,14+1, new QTableWidgetItem(QString::number(board_matrix[7][14+1])));ui->tableWidget->setItem(7,14+2, new QTableWidgetItem(QString::number(board_matrix[7][14+2])));
        ui->tableWidget->item(7,14)->setBackground(Qt::gray);ui->tableWidget->item(7,14+1)->setBackground(Qt::gray);ui->tableWidget->item(7,14+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(470+2, 260+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 9 && wall_info.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[9][0] = 1; board_matrix[9][0+1] = 1; board_matrix[9][0+2] = 1;
        ui->tableWidget->setItem(9,0, new QTableWidgetItem(QString::number(board_matrix[9][0])));ui->tableWidget->setItem(9,0+1, new QTableWidgetItem(QString::number(board_matrix[9][0+1])));ui->tableWidget->setItem(9,0+2, new QTableWidgetItem(QString::number(board_matrix[9][0+2])));
        ui->tableWidget->item(9,0)->setBackground(Qt::gray);ui->tableWidget->item(9,0+1)->setBackground(Qt::gray);ui->tableWidget->item(9,0+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(15+2, 325+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 9 && wall_info.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[9][2] = 1; board_matrix[9][2+1] = 1; board_matrix[9][2+2] = 1;
        ui->tableWidget->setItem(9,2, new QTableWidgetItem(QString::number(board_matrix[9][2])));ui->tableWidget->setItem(9,2+1, new QTableWidgetItem(QString::number(board_matrix[9][2+1])));ui->tableWidget->setItem(9,2+2, new QTableWidgetItem(QString::number(board_matrix[9][2+2])));
        ui->tableWidget->item(9,2)->setBackground(Qt::gray);ui->tableWidget->item(9,2+1)->setBackground(Qt::gray);ui->tableWidget->item(9,2+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(80+2, 325+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 9 && wall_info.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[9][4] = 1; board_matrix[9][4+1] = 1; board_matrix[9][4+2] = 1;
        ui->tableWidget->setItem(9,4, new QTableWidgetItem(QString::number(board_matrix[9][4])));ui->tableWidget->setItem(9,4+1, new QTableWidgetItem(QString::number(board_matrix[9][4+1])));ui->tableWidget->setItem(9,4+2, new QTableWidgetItem(QString::number(board_matrix[9][4+2])));
        ui->tableWidget->item(9,4)->setBackground(Qt::gray);ui->tableWidget->item(9,4+1)->setBackground(Qt::gray);ui->tableWidget->item(9,4+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(145+2, 325+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 9 && wall_info.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[9][6] = 1; board_matrix[9][6+1] = 1; board_matrix[9][6+2] = 1;
        ui->tableWidget->setItem(9,6, new QTableWidgetItem(QString::number(board_matrix[9][6])));ui->tableWidget->setItem(9,6+1, new QTableWidgetItem(QString::number(board_matrix[9][6+1])));ui->tableWidget->setItem(9,6+2, new QTableWidgetItem(QString::number(board_matrix[9][6+2])));
        ui->tableWidget->item(9,6)->setBackground(Qt::gray);ui->tableWidget->item(9,6+1)->setBackground(Qt::gray);ui->tableWidget->item(9,6+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(210+2, 325+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 9 && wall_info.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[9][8] = 1; board_matrix[9][8+1] = 1; board_matrix[9][8+2] = 1;
        ui->tableWidget->setItem(9,8, new QTableWidgetItem(QString::number(board_matrix[9][8])));ui->tableWidget->setItem(9,8+1, new QTableWidgetItem(QString::number(board_matrix[9][8+1])));ui->tableWidget->setItem(9,8+2, new QTableWidgetItem(QString::number(board_matrix[9][8+2])));
        ui->tableWidget->item(9,8)->setBackground(Qt::gray);ui->tableWidget->item(9,8+1)->setBackground(Qt::gray);ui->tableWidget->item(9,8+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(275+2, 325+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 9 && wall_info.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[9][10] = 1; board_matrix[9][10+1] = 1; board_matrix[9][10+2] = 1;
        ui->tableWidget->setItem(9,10, new QTableWidgetItem(QString::number(board_matrix[9][10])));ui->tableWidget->setItem(9,10+1, new QTableWidgetItem(QString::number(board_matrix[9][10+1])));ui->tableWidget->setItem(9,10+2, new QTableWidgetItem(QString::number(board_matrix[9][10+2])));
        ui->tableWidget->item(9,10)->setBackground(Qt::gray);ui->tableWidget->item(9,10+1)->setBackground(Qt::gray);ui->tableWidget->item(9,10+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(340+2, 325+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 9 && wall_info.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[9][12] = 1; board_matrix[9][12+1] = 1; board_matrix[9][12+2] = 1;
        ui->tableWidget->setItem(9,12, new QTableWidgetItem(QString::number(board_matrix[9][12])));ui->tableWidget->setItem(9,12+1, new QTableWidgetItem(QString::number(board_matrix[9][12+1])));ui->tableWidget->setItem(9,12+2, new QTableWidgetItem(QString::number(board_matrix[9][12+2])));
        ui->tableWidget->item(9,12)->setBackground(Qt::gray);ui->tableWidget->item(9,12+1)->setBackground(Qt::gray);ui->tableWidget->item(9,12+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(405+2, 325+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 9 && wall_info.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[9][14] = 1; board_matrix[9][14+1] = 1; board_matrix[9][14+2] = 1;
        ui->tableWidget->setItem(9,14, new QTableWidgetItem(QString::number(board_matrix[9][14])));ui->tableWidget->setItem(9,14+1, new QTableWidgetItem(QString::number(board_matrix[9][14+1])));ui->tableWidget->setItem(9,14+2, new QTableWidgetItem(QString::number(board_matrix[9][14+2])));
        ui->tableWidget->item(9,14)->setBackground(Qt::gray);ui->tableWidget->item(9,14+1)->setBackground(Qt::gray);ui->tableWidget->item(9,14+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(470+2, 325+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 11 && wall_info.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[11][0] = 1; board_matrix[11][0+1] = 1; board_matrix[11][0+2] = 1;
        ui->tableWidget->setItem(11,0, new QTableWidgetItem(QString::number(board_matrix[11][0])));ui->tableWidget->setItem(11,0+1, new QTableWidgetItem(QString::number(board_matrix[11][0+1])));ui->tableWidget->setItem(11,0+2, new QTableWidgetItem(QString::number(board_matrix[11][0+2])));
        ui->tableWidget->item(11,0)->setBackground(Qt::gray);ui->tableWidget->item(11,0+1)->setBackground(Qt::gray);ui->tableWidget->item(11,0+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(15+2, 390+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 11 && wall_info.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[11][2] = 1; board_matrix[11][2+1] = 1; board_matrix[11][2+2] = 1;
        ui->tableWidget->setItem(11,2, new QTableWidgetItem(QString::number(board_matrix[11][2])));ui->tableWidget->setItem(11,2+1, new QTableWidgetItem(QString::number(board_matrix[11][2+1])));ui->tableWidget->setItem(11,2+2, new QTableWidgetItem(QString::number(board_matrix[11][2+2])));
        ui->tableWidget->item(11,2)->setBackground(Qt::gray);ui->tableWidget->item(11,2+1)->setBackground(Qt::gray);ui->tableWidget->item(11,2+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(80+2, 390+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 11 && wall_info.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[11][4] = 1; board_matrix[11][4+1] = 1; board_matrix[11][4+2] = 1;
        ui->tableWidget->setItem(11,4, new QTableWidgetItem(QString::number(board_matrix[11][4])));ui->tableWidget->setItem(11,4+1, new QTableWidgetItem(QString::number(board_matrix[11][4+1])));ui->tableWidget->setItem(11,4+2, new QTableWidgetItem(QString::number(board_matrix[11][4+2])));
        ui->tableWidget->item(11,4)->setBackground(Qt::gray);ui->tableWidget->item(11,4+1)->setBackground(Qt::gray);ui->tableWidget->item(11,4+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(145+2, 390+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 11 && wall_info.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[11][6] = 1; board_matrix[11][6+1] = 1; board_matrix[11][6+2] = 1;
        ui->tableWidget->setItem(11,6, new QTableWidgetItem(QString::number(board_matrix[11][6])));ui->tableWidget->setItem(11,6+1, new QTableWidgetItem(QString::number(board_matrix[11][6+1])));ui->tableWidget->setItem(11,6+2, new QTableWidgetItem(QString::number(board_matrix[11][6+2])));
        ui->tableWidget->item(11,6)->setBackground(Qt::gray);ui->tableWidget->item(11,6+1)->setBackground(Qt::gray);ui->tableWidget->item(11,6+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(210+2, 390+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 11 && wall_info.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[11][8] = 1; board_matrix[11][8+1] = 1; board_matrix[11][8+2] = 1;
        ui->tableWidget->setItem(11,8, new QTableWidgetItem(QString::number(board_matrix[11][8])));ui->tableWidget->setItem(11,8+1, new QTableWidgetItem(QString::number(board_matrix[11][8+1])));ui->tableWidget->setItem(11,8+2, new QTableWidgetItem(QString::number(board_matrix[11][8+2])));
        ui->tableWidget->item(11,8)->setBackground(Qt::gray);ui->tableWidget->item(11,8+1)->setBackground(Qt::gray);ui->tableWidget->item(11,8+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(275+2, 390+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 11 && wall_info.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[11][10] = 1; board_matrix[11][10+1] = 1; board_matrix[11][10+2] = 1;
        ui->tableWidget->setItem(11,10, new QTableWidgetItem(QString::number(board_matrix[11][10])));ui->tableWidget->setItem(11,10+1, new QTableWidgetItem(QString::number(board_matrix[11][10+1])));ui->tableWidget->setItem(11,10+2, new QTableWidgetItem(QString::number(board_matrix[11][10+2])));
        ui->tableWidget->item(11,10)->setBackground(Qt::gray);ui->tableWidget->item(11,10+1)->setBackground(Qt::gray);ui->tableWidget->item(11,10+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(340+2, 390+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 11 && wall_info.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[11][12] = 1; board_matrix[11][12+1] = 1; board_matrix[11][12+2] = 1;
        ui->tableWidget->setItem(11,12, new QTableWidgetItem(QString::number(board_matrix[11][12])));ui->tableWidget->setItem(11,12+1, new QTableWidgetItem(QString::number(board_matrix[11][12+1])));ui->tableWidget->setItem(11,12+2, new QTableWidgetItem(QString::number(board_matrix[11][12+2])));
        ui->tableWidget->item(11,12)->setBackground(Qt::gray);ui->tableWidget->item(11,12+1)->setBackground(Qt::gray);ui->tableWidget->item(11,12+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(405+2, 390+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 11 && wall_info.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[11][14] = 1; board_matrix[11][14+1] = 1; board_matrix[11][14+2] = 1;
        ui->tableWidget->setItem(11,14, new QTableWidgetItem(QString::number(board_matrix[11][14])));ui->tableWidget->setItem(11,14+1, new QTableWidgetItem(QString::number(board_matrix[11][14+1])));ui->tableWidget->setItem(11,14+2, new QTableWidgetItem(QString::number(board_matrix[11][14+2])));
        ui->tableWidget->item(11,14)->setBackground(Qt::gray);ui->tableWidget->item(11,14+1)->setBackground(Qt::gray);ui->tableWidget->item(11,14+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(470+2, 390+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 13 && wall_info.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[13][0] = 1; board_matrix[13][0+1] = 1; board_matrix[13][0+2] = 1;
        ui->tableWidget->setItem(13,0, new QTableWidgetItem(QString::number(board_matrix[13][0])));ui->tableWidget->setItem(13,0+1, new QTableWidgetItem(QString::number(board_matrix[13][0+1])));ui->tableWidget->setItem(13,0+2, new QTableWidgetItem(QString::number(board_matrix[13][0+2])));
        ui->tableWidget->item(13,0)->setBackground(Qt::gray);ui->tableWidget->item(13,0+1)->setBackground(Qt::gray);ui->tableWidget->item(13,0+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(15+2, 455+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 13 && wall_info.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[13][2] = 1; board_matrix[13][2+1] = 1; board_matrix[13][2+2] = 1;
        ui->tableWidget->setItem(13,2, new QTableWidgetItem(QString::number(board_matrix[13][2])));ui->tableWidget->setItem(13,2+1, new QTableWidgetItem(QString::number(board_matrix[13][2+1])));ui->tableWidget->setItem(13,2+2, new QTableWidgetItem(QString::number(board_matrix[13][2+2])));
        ui->tableWidget->item(13,2)->setBackground(Qt::gray);ui->tableWidget->item(13,2+1)->setBackground(Qt::gray);ui->tableWidget->item(13,2+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(80+2, 455+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 13 && wall_info.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[13][4] = 1; board_matrix[13][4+1] = 1; board_matrix[13][4+2] = 1;
        ui->tableWidget->setItem(13,4, new QTableWidgetItem(QString::number(board_matrix[13][4])));ui->tableWidget->setItem(13,4+1, new QTableWidgetItem(QString::number(board_matrix[13][4+1])));ui->tableWidget->setItem(13,4+2, new QTableWidgetItem(QString::number(board_matrix[13][4+2])));
        ui->tableWidget->item(13,4)->setBackground(Qt::gray);ui->tableWidget->item(13,4+1)->setBackground(Qt::gray);ui->tableWidget->item(13,4+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(145+2, 455+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 13 && wall_info.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[13][6] = 1; board_matrix[13][6+1] = 1; board_matrix[13][6+2] = 1;
        ui->tableWidget->setItem(13,6, new QTableWidgetItem(QString::number(board_matrix[13][6])));ui->tableWidget->setItem(13,6+1, new QTableWidgetItem(QString::number(board_matrix[13][6+1])));ui->tableWidget->setItem(13,6+2, new QTableWidgetItem(QString::number(board_matrix[13][6+2])));
        ui->tableWidget->item(13,6)->setBackground(Qt::gray);ui->tableWidget->item(13,6+1)->setBackground(Qt::gray);ui->tableWidget->item(13,6+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(210+2, 455+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 13 && wall_info.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[13][8] = 1; board_matrix[13][8+1] = 1; board_matrix[13][8+2] = 1;
        ui->tableWidget->setItem(13,8, new QTableWidgetItem(QString::number(board_matrix[13][8])));ui->tableWidget->setItem(13,8+1, new QTableWidgetItem(QString::number(board_matrix[13][8+1])));ui->tableWidget->setItem(13,8+2, new QTableWidgetItem(QString::number(board_matrix[13][8+2])));
        ui->tableWidget->item(13,8)->setBackground(Qt::gray);ui->tableWidget->item(13,8+1)->setBackground(Qt::gray);ui->tableWidget->item(13,8+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(275+2, 455+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 13 && wall_info.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[13][10] = 1; board_matrix[13][10+1] = 1; board_matrix[13][10+2] = 1;
        ui->tableWidget->setItem(13,10, new QTableWidgetItem(QString::number(board_matrix[13][10])));ui->tableWidget->setItem(13,10+1, new QTableWidgetItem(QString::number(board_matrix[13][10+1])));ui->tableWidget->setItem(13,10+2, new QTableWidgetItem(QString::number(board_matrix[13][10+2])));
        ui->tableWidget->item(13,10)->setBackground(Qt::gray);ui->tableWidget->item(13,10+1)->setBackground(Qt::gray);ui->tableWidget->item(13,10+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(340+2, 455+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 13 && wall_info.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[13][12] = 1; board_matrix[13][12+1] = 1; board_matrix[13][12+2] = 1;
        ui->tableWidget->setItem(13,12, new QTableWidgetItem(QString::number(board_matrix[13][12])));ui->tableWidget->setItem(13,12+1, new QTableWidgetItem(QString::number(board_matrix[13][12+1])));ui->tableWidget->setItem(13,12+2, new QTableWidgetItem(QString::number(board_matrix[13][12+2])));
        ui->tableWidget->item(13,12)->setBackground(Qt::gray);ui->tableWidget->item(13,12+1)->setBackground(Qt::gray);ui->tableWidget->item(13,12+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(405+2, 455+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 13 && wall_info.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[13][14] = 1; board_matrix[13][14+1] = 1; board_matrix[13][14+2] = 1;
        ui->tableWidget->setItem(13,14, new QTableWidgetItem(QString::number(board_matrix[13][14])));ui->tableWidget->setItem(13,14+1, new QTableWidgetItem(QString::number(board_matrix[13][14+1])));ui->tableWidget->setItem(13,14+2, new QTableWidgetItem(QString::number(board_matrix[13][14+2])));
        ui->tableWidget->item(13,14)->setBackground(Qt::gray);ui->tableWidget->item(13,14+1)->setBackground(Qt::gray);ui->tableWidget->item(13,14+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(470+2, 455+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 15 && wall_info.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[15][0] = 1; board_matrix[15][0+1] = 1; board_matrix[15][0+2] = 1;
        ui->tableWidget->setItem(15,0, new QTableWidgetItem(QString::number(board_matrix[15][0])));ui->tableWidget->setItem(15,0+1, new QTableWidgetItem(QString::number(board_matrix[15][0+1])));ui->tableWidget->setItem(15,0+2, new QTableWidgetItem(QString::number(board_matrix[15][0+2])));
        ui->tableWidget->item(15,0)->setBackground(Qt::gray);ui->tableWidget->item(15,0+1)->setBackground(Qt::gray);ui->tableWidget->item(15,0+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(15+2, 520+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 15 && wall_info.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[15][2] = 1; board_matrix[15][2+1] = 1; board_matrix[15][2+2] = 1;
        ui->tableWidget->setItem(15,2, new QTableWidgetItem(QString::number(board_matrix[15][2])));ui->tableWidget->setItem(15,2+1, new QTableWidgetItem(QString::number(board_matrix[15][2+1])));ui->tableWidget->setItem(15,2+2, new QTableWidgetItem(QString::number(board_matrix[15][2+2])));
        ui->tableWidget->item(15,2)->setBackground(Qt::gray);ui->tableWidget->item(15,2+1)->setBackground(Qt::gray);ui->tableWidget->item(15,2+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(80+2, 520+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 15 && wall_info.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[15][4] = 1; board_matrix[15][4+1] = 1; board_matrix[15][4+2] = 1;
        ui->tableWidget->setItem(15,4, new QTableWidgetItem(QString::number(board_matrix[15][4])));ui->tableWidget->setItem(15,4+1, new QTableWidgetItem(QString::number(board_matrix[15][4+1])));ui->tableWidget->setItem(15,4+2, new QTableWidgetItem(QString::number(board_matrix[15][4+2])));
        ui->tableWidget->item(15,4)->setBackground(Qt::gray);ui->tableWidget->item(15,4+1)->setBackground(Qt::gray);ui->tableWidget->item(15,4+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(145+2, 520+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 15 && wall_info.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[15][6] = 1; board_matrix[15][6+1] = 1; board_matrix[15][6+2] = 1;
        ui->tableWidget->setItem(15,6, new QTableWidgetItem(QString::number(board_matrix[15][6])));ui->tableWidget->setItem(15,6+1, new QTableWidgetItem(QString::number(board_matrix[15][6+1])));ui->tableWidget->setItem(15,6+2, new QTableWidgetItem(QString::number(board_matrix[15][6+2])));
        ui->tableWidget->item(15,6)->setBackground(Qt::gray);ui->tableWidget->item(15,6+1)->setBackground(Qt::gray);ui->tableWidget->item(15,6+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(210+2, 520+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 15 && wall_info.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[15][8] = 1; board_matrix[15][8+1] = 1; board_matrix[15][8+2] = 1;
        ui->tableWidget->setItem(15,8, new QTableWidgetItem(QString::number(board_matrix[15][8])));ui->tableWidget->setItem(15,8+1, new QTableWidgetItem(QString::number(board_matrix[15][8+1])));ui->tableWidget->setItem(15,8+2, new QTableWidgetItem(QString::number(board_matrix[15][8+2])));
        ui->tableWidget->item(15,8)->setBackground(Qt::gray);ui->tableWidget->item(15,8+1)->setBackground(Qt::gray);ui->tableWidget->item(15,8+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(275+2, 520+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 15 && wall_info.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[15][10] = 1; board_matrix[15][10+1] = 1; board_matrix[15][10+2] = 1;
        ui->tableWidget->setItem(15,10, new QTableWidgetItem(QString::number(board_matrix[15][10])));ui->tableWidget->setItem(15,10+1, new QTableWidgetItem(QString::number(board_matrix[15][10+1])));ui->tableWidget->setItem(15,10+2, new QTableWidgetItem(QString::number(board_matrix[15][10+2])));
        ui->tableWidget->item(15,10)->setBackground(Qt::gray);ui->tableWidget->item(15,10+1)->setBackground(Qt::gray);ui->tableWidget->item(15,10+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(340+2, 520+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 15 && wall_info.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[15][12] = 1; board_matrix[15][12+1] = 1; board_matrix[15][12+2] = 1;
        ui->tableWidget->setItem(15,12, new QTableWidgetItem(QString::number(board_matrix[15][12])));ui->tableWidget->setItem(15,12+1, new QTableWidgetItem(QString::number(board_matrix[15][12+1])));ui->tableWidget->setItem(15,12+2, new QTableWidgetItem(QString::number(board_matrix[15][12+2])));
        ui->tableWidget->item(15,12)->setBackground(Qt::gray);ui->tableWidget->item(15,12+1)->setBackground(Qt::gray);ui->tableWidget->item(15,12+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(405+2, 520+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 15 && wall_info.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[15][14] = 1; board_matrix[15][14+1] = 1; board_matrix[15][14+2] = 1;
        ui->tableWidget->setItem(15,14, new QTableWidgetItem(QString::number(board_matrix[15][14])));ui->tableWidget->setItem(15,14+1, new QTableWidgetItem(QString::number(board_matrix[15][14+1])));ui->tableWidget->setItem(15,14+2, new QTableWidgetItem(QString::number(board_matrix[15][14+2])));
        ui->tableWidget->item(15,14)->setBackground(Qt::gray);ui->tableWidget->item(15,14+1)->setBackground(Qt::gray);ui->tableWidget->item(15,14+2)->setBackground(Qt::gray);
        horizontal_walls.append(place(470+2, 520+2));}
}
