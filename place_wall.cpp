#include "quoridor.h"
#include "ui_quoridor.h"
#include <QMouseEvent>


void Quoridor::mousePressEvent(QMouseEvent *event){

    if(wall_unlocked && check_wall_number()){

        for (int y=0; y<17; y++) {
            for (int x=0; x<17; x++) {
                board_copy_1[y][x] = board_matrix[y][x];
                board_copy_2[y][x] = board_matrix[y][x];
            }
        }

        int n = 0;
        for (int j=15; j<517; j+=65) {
            int m = 1;
            for (int i=65; i<522; i+=65) {
                if((event->pos().x() > i && event->pos().x() < i+15) && (event->pos().y() > j && event->pos().y() < j+50)){
                    if(wall_position[2] == 0) {
                        if(board_matrix[n][m] == 1 || board_matrix[n+1][m] == 1 || board_matrix[n+2][m] == 1) return;

                        board_copy_1[n][m] = 1; board_copy_1[n+1][m] = 1; board_copy_1[n+2][m] = 1;
                        board_copy_2[n][m] = 1; board_copy_2[n+1][m] = 1; board_copy_2[n+2][m] = 1;
                        check_placeble_1(player_blue.last().y, player_blue.last().x); check_placeble_2(player_red.last().y, player_red.last().x);
                        if(placeble_1 && placeble_2){
                            vertical_walls.append(place(i+2, j+2)); moves.append("v "+ QString::number(n) + " " + QString::number(m)); update();
                            board_matrix[n][m] = 1; board_matrix[n+1][m] = 1; board_matrix[n+2][m] = 1; placeble_1 = false; placeble_2 = false;
                            QTableWidgetItem* item = new QTableWidgetItem("1"); item->setTextAlignment(Qt::AlignCenter); item->setBackground(Qt::gray);
                            QTableWidgetItem* item2 = new QTableWidgetItem("1"); item2->setTextAlignment(Qt::AlignCenter); item2->setBackground(Qt::gray);
                            QTableWidgetItem* item3 = new QTableWidgetItem("1"); item3->setTextAlignment(Qt::AlignCenter); item3->setBackground(Qt::gray);
                            ui->tableWidget->setItem(n,m, item); ui->tableWidget->setItem(n+1,m, item2);ui->tableWidget->setItem(n+2,m, item3);
                            if(BLUE){BLUE = false; RED = true; walls_blue--; game_manager(); return;}
                            if(RED){BLUE = true; RED = false; walls_red--; game_manager(); return;}}
                        }
                    }
                m+=2;
            }
            n+=2;
        }

        n = 1;
        for (int j=65; j<522; j+=65) {
            int m = 0;
            for (int i=15; i<517; i+=65) {
                if((event->pos().x() > i && event->pos().x() < i+50) && (event->pos().y() > j && event->pos().y() < j+15)){
                    if(wall_position[2] == 1) {
                        if(board_matrix[n][m] == 1 || board_matrix[n][m+1] == 1 || board_matrix[n][m+2] == 1) return;

                        board_copy_1[n][m] = 1; board_copy_1[n][m+1] = 1; board_copy_1[n][m+2] = 1;
                        board_copy_2[n][m] = 1; board_copy_2[n][m+1] = 1; board_copy_2[n][m+2] = 1;
                        check_placeble_1(player_blue.last().y, player_blue.last().x); check_placeble_2(player_red.last().y, player_red.last().x);
                        if(placeble_1 && placeble_2){
                            horizontal_walls.append(place(i+2, j+2)); moves.append("h "+ QString::number(n) + " " + QString::number(m)); update();
                            board_matrix[n][m] = 1; board_matrix[n][m+1] = 1; board_matrix[n][m+2] = 1; placeble_1 = false; placeble_2 = false;
                            QTableWidgetItem* item = new QTableWidgetItem("1"); item->setTextAlignment(Qt::AlignCenter); item->setBackground(Qt::gray);
                            QTableWidgetItem* item2 = new QTableWidgetItem("1"); item2->setTextAlignment(Qt::AlignCenter); item2->setBackground(Qt::gray);
                            QTableWidgetItem* item3 = new QTableWidgetItem("1"); item3->setTextAlignment(Qt::AlignCenter); item3->setBackground(Qt::gray);
                            ui->tableWidget->setItem(n,m, item); ui->tableWidget->setItem(n,m+1, item2);ui->tableWidget->setItem(n,m+2, item3);
                            if(BLUE){BLUE = false; RED = true; walls_blue--; game_manager(); return;}
                            if(RED){BLUE = true; RED = false; walls_red--; game_manager(); return;}}
                        }
                    }
                m+=2;
            }
            n+=2;
        }
    }
}
