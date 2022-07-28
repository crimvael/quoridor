#include "quoridor.h"
#include "ui_quoridor.h"


void Quoridor::ai_wall(QString wall_info){

    int n = 0;
    for (int j=15; j<517; j+=65) {
        int m = 1;
        for (int i=65; i<522; i+=65) {
            if(wall_info.split(QChar(' ')).at(1).toInt() == n && wall_info.split(QChar(' ')).at(2).toInt() == m){
                board_matrix[n][m] = 1; board_matrix[n+1][m] = 1; board_matrix[n+2][m] = 1;
                QTableWidgetItem* item = new QTableWidgetItem("1"); item->setTextAlignment(Qt::AlignCenter); item->setBackground(Qt::gray);
                QTableWidgetItem* item2 = new QTableWidgetItem("1"); item2->setTextAlignment(Qt::AlignCenter); item2->setBackground(Qt::gray);
                QTableWidgetItem* item3 = new QTableWidgetItem("1"); item3->setTextAlignment(Qt::AlignCenter); item3->setBackground(Qt::gray);
                ui->tableWidget->setItem(n,m, item); ui->tableWidget->setItem(n+1,m, item2);ui->tableWidget->setItem(n+2,m, item3);
                vertical_walls.append(place(i+2, j+2));}
            m+=2;
        }
        n+=2;
    }

    n = 1;
    for (int j=65; j<522; j+=65) {
        int m = 0;
        for (int i=15; i<517; i+=65) {
            if(wall_info.split(QChar(' ')).at(1).toInt() == n && wall_info.split(QChar(' ')).at(2).toInt() == m){
                        board_matrix[n][m] = 1; board_matrix[n][m+1] = 1; board_matrix[n][m+2] = 1;
                        QTableWidgetItem* item = new QTableWidgetItem("1"); item->setTextAlignment(Qt::AlignCenter); item->setBackground(Qt::gray);
                        QTableWidgetItem* item2 = new QTableWidgetItem("1"); item2->setTextAlignment(Qt::AlignCenter); item2->setBackground(Qt::gray);
                        QTableWidgetItem* item3 = new QTableWidgetItem("1"); item3->setTextAlignment(Qt::AlignCenter); item3->setBackground(Qt::gray);
                        ui->tableWidget->setItem(n,m, item); ui->tableWidget->setItem(n,m+1, item2);ui->tableWidget->setItem(n,m+2, item3);
                        horizontal_walls.append(place(i+2, j+2));}
            m+=2;
        }
        n+=2;
    }

}
