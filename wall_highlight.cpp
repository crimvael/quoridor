#include "quoridor.h"
#include "ui_quoridor.h"
#include <QMouseEvent>


bool Quoridor::check_wall_number(){

    if(BLUE && walls_blue > 0)
        return true;

    if(RED && walls_red > 0)
        return true;

    return false;

}

void Quoridor::mouseMoveEvent(QMouseEvent *event){

    if(start && check_wall_number()){


        ui->label_6->setText(QString::number(event->pos().x()) + ", " + QString::number(event->pos().y()));
        ui->label_8->setText(QString::number(wall_position[0]) + ", " + QString::number(wall_position[1]));

        int n = 0;
        for (int j=15; j<517; j+=65) {
            int m = 1;
            for (int i=65; i<522; i+=65) {
                if((event->pos().x() > i && event->pos().x() < i+15) && (event->pos().y() > j && event->pos().y() < j+50)){
                    if(board_matrix[n][m] == 1 || board_matrix[n+1][m] == 1 || board_matrix[n+2][m] == 1) return;
                    wall_position[0] = i+2; wall_position[1] = j+2; wall_position[2] = 0; update();}
                m+=2;
            }
            n+=2;
        }

        n = 1;
        for (int j=65; j<522; j+=65) {
            int m = 0;
            for (int i=15; i<517; i+=65) {
                if((event->pos().x() > i && event->pos().x() < i+50) && (event->pos().y() > j && event->pos().y() < j+15)){
                    if(board_matrix[n][m] == 1 || board_matrix[n][m+1] == 1 || board_matrix[n][m+2] == 1) return;
                    wall_position[0] = i+2; wall_position[1] = j+2; wall_position[2] = 1; update();}
                m+=2;
            }
            n+=2;
        }

    }
}
