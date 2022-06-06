#include "quoridor.h"
#include "ui_quoridor.h"


void Quoridor::ai_wall(QString wall_info){


    if(wall_info.split(QChar(' ')).at(1).toInt() == 0 && wall_info.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[0][1] = 1; board_matrix[0+1][1] = 1; board_matrix[0+2][1] = 1;
        vertical_walls.append(place(65+2, 15+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 0 && wall_info.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[0][3] = 1; board_matrix[0+1][3] = 1; board_matrix[0+2][3] = 1;
        vertical_walls.append(place(130+2, 15+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 0 && wall_info.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[0][5] = 1; board_matrix[0+1][5] = 1; board_matrix[0+2][5] = 1;
        vertical_walls.append(place(195+2, 15+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 0 && wall_info.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[0][7] = 1; board_matrix[0+1][7] = 1; board_matrix[0+2][7] = 1;
        vertical_walls.append(place(260+2, 15+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 0 && wall_info.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[0][9] = 1; board_matrix[0+1][9] = 1; board_matrix[0+2][9] = 1;
        vertical_walls.append(place(325+2, 15+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 0 && wall_info.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[0][11] = 1; board_matrix[0+1][11] = 1; board_matrix[0+2][11] = 1;
        vertical_walls.append(place(390+2, 15+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 0 && wall_info.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[0][13] = 1; board_matrix[0+1][13] = 1; board_matrix[0+2][13] = 1;
        vertical_walls.append(place(455+2, 15+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 0 && wall_info.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[0][15] = 1; board_matrix[0+1][15] = 1; board_matrix[0+2][15] = 1;
        vertical_walls.append(place(520+2, 15+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 2 && wall_info.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[2][1] = 1; board_matrix[2+1][1] = 1; board_matrix[2+2][1] = 1;
        vertical_walls.append(place(65+2, 80+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 2 && wall_info.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[2][3] = 1; board_matrix[2+1][3] = 1; board_matrix[2+2][3] = 1;
        vertical_walls.append(place(130+2, 80+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 2 && wall_info.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[2][5] = 1; board_matrix[2+1][5] = 1; board_matrix[2+2][5] = 1;
        vertical_walls.append(place(195+2, 80+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 2 && wall_info.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[2][7] = 1; board_matrix[2+1][7] = 1; board_matrix[2+2][7] = 1;
        vertical_walls.append(place(260+2, 80+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 2 && wall_info.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[2][9] = 1; board_matrix[2+1][9] = 1; board_matrix[2+2][9] = 1;
        vertical_walls.append(place(325+2, 80+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 2 && wall_info.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[2][11] = 1; board_matrix[2+1][11] = 1; board_matrix[2+2][11] = 1;
        vertical_walls.append(place(390+2, 80+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 2 && wall_info.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[2][13] = 1; board_matrix[2+1][13] = 1; board_matrix[2+2][13] = 1;
        vertical_walls.append(place(455+2, 80+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 2 && wall_info.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[2][15] = 1; board_matrix[2+1][15] = 1; board_matrix[2+2][15] = 1;
        vertical_walls.append(place(520+2, 80+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 4 && wall_info.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[4][1] = 1; board_matrix[4+1][1] = 1; board_matrix[4+2][1] = 1;
        vertical_walls.append(place(65+2, 145+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 4 && wall_info.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[4][3] = 1; board_matrix[4+1][3] = 1; board_matrix[4+2][3] = 1;
        vertical_walls.append(place(130+2, 145+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 4 && wall_info.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[4][5] = 1; board_matrix[4+1][5] = 1; board_matrix[4+2][5] = 1;
        vertical_walls.append(place(195+2, 145+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 4 && wall_info.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[4][7] = 1; board_matrix[4+1][7] = 1; board_matrix[4+2][7] = 1;
        vertical_walls.append(place(260+2, 145+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 4 && wall_info.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[4][9] = 1; board_matrix[4+1][9] = 1; board_matrix[4+2][9] = 1;
        vertical_walls.append(place(325+2, 145+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 4 && wall_info.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[4][11] = 1; board_matrix[4+1][11] = 1; board_matrix[4+2][11] = 1;
        vertical_walls.append(place(390+2, 145+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 4 && wall_info.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[4][13] = 1; board_matrix[4+1][13] = 1; board_matrix[4+2][13] = 1;
        vertical_walls.append(place(455+2, 145+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 4 && wall_info.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[4][15] = 1; board_matrix[4+1][15] = 1; board_matrix[4+2][15] = 1;
        vertical_walls.append(place(520+2, 145+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 6 && wall_info.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[6][1] = 1; board_matrix[6+1][1] = 1; board_matrix[6+2][1] = 1;
        vertical_walls.append(place(65+2, 210+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 6 && wall_info.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[6][3] = 1; board_matrix[6+1][3] = 1; board_matrix[6+2][3] = 1;
        vertical_walls.append(place(130+2, 210+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 6 && wall_info.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[6][5] = 1; board_matrix[6+1][5] = 1; board_matrix[6+2][5] = 1;
        vertical_walls.append(place(195+2, 210+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 6 && wall_info.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[6][7] = 1; board_matrix[6+1][7] = 1; board_matrix[6+2][7] = 1;
        vertical_walls.append(place(260+2, 210+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 6 && wall_info.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[6][9] = 1; board_matrix[6+1][9] = 1; board_matrix[6+2][9] = 1;
        vertical_walls.append(place(325+2, 210+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 6 && wall_info.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[6][11] = 1; board_matrix[6+1][11] = 1; board_matrix[6+2][11] = 1;
        vertical_walls.append(place(390+2, 210+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 6 && wall_info.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[6][13] = 1; board_matrix[6+1][13] = 1; board_matrix[6+2][13] = 1;
        vertical_walls.append(place(455+2, 210+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 6 && wall_info.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[6][15] = 1; board_matrix[6+1][15] = 1; board_matrix[6+2][15] = 1;
        vertical_walls.append(place(520+2, 210+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 8 && wall_info.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[8][1] = 1; board_matrix[8+1][1] = 1; board_matrix[8+2][1] = 1;
        vertical_walls.append(place(65+2, 275+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 8 && wall_info.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[8][3] = 1; board_matrix[8+1][3] = 1; board_matrix[8+2][3] = 1;
        vertical_walls.append(place(130+2, 275+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 8 && wall_info.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[8][5] = 1; board_matrix[8+1][5] = 1; board_matrix[8+2][5] = 1;
        vertical_walls.append(place(195+2, 275+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 8 && wall_info.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[8][7] = 1; board_matrix[8+1][7] = 1; board_matrix[8+2][7] = 1;
        vertical_walls.append(place(260+2, 275+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 8 && wall_info.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[8][9] = 1; board_matrix[8+1][9] = 1; board_matrix[8+2][9] = 1;
        vertical_walls.append(place(325+2, 275+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 8 && wall_info.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[8][11] = 1; board_matrix[8+1][11] = 1; board_matrix[8+2][11] = 1;
        vertical_walls.append(place(390+2, 275+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 8 && wall_info.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[8][13] = 1; board_matrix[8+1][13] = 1; board_matrix[8+2][13] = 1;
        vertical_walls.append(place(455+2, 275+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 8 && wall_info.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[8][15] = 1; board_matrix[8+1][15] = 1; board_matrix[8+2][15] = 1;
        vertical_walls.append(place(520+2, 275+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 10 && wall_info.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[10][1] = 1; board_matrix[10+1][1] = 1; board_matrix[10+2][1] = 1;
        vertical_walls.append(place(65+2, 340+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 10 && wall_info.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[10][3] = 1; board_matrix[10+1][3] = 1; board_matrix[10+2][3] = 1;
        vertical_walls.append(place(130+2, 340+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 10 && wall_info.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[10][5] = 1; board_matrix[10+1][5] = 1; board_matrix[10+2][5] = 1;
        vertical_walls.append(place(195+2, 340+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 10 && wall_info.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[10][7] = 1; board_matrix[10+1][7] = 1; board_matrix[10+2][7] = 1;
        vertical_walls.append(place(260+2, 340+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 10 && wall_info.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[10][9] = 1; board_matrix[10+1][9] = 1; board_matrix[10+2][9] = 1;
        vertical_walls.append(place(325+2, 340+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 10 && wall_info.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[10][11] = 1; board_matrix[10+1][11] = 1; board_matrix[10+2][11] = 1;
        vertical_walls.append(place(390+2, 340+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 10 && wall_info.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[10][13] = 1; board_matrix[10+1][13] = 1; board_matrix[10+2][13] = 1;
        vertical_walls.append(place(455+2, 340+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 10 && wall_info.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[10][15] = 1; board_matrix[10+1][15] = 1; board_matrix[10+2][15] = 1;
        vertical_walls.append(place(520+2, 340+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 12 && wall_info.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[12][1] = 1; board_matrix[12+1][1] = 1; board_matrix[12+2][1] = 1;
        vertical_walls.append(place(65+2, 405+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 12 && wall_info.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[12][3] = 1; board_matrix[12+1][3] = 1; board_matrix[12+2][3] = 1;
        vertical_walls.append(place(130+2, 405+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 12 && wall_info.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[12][5] = 1; board_matrix[12+1][5] = 1; board_matrix[12+2][5] = 1;
        vertical_walls.append(place(195+2, 405+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 12 && wall_info.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[12][7] = 1; board_matrix[12+1][7] = 1; board_matrix[12+2][7] = 1;
        vertical_walls.append(place(260+2, 405+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 12 && wall_info.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[12][9] = 1; board_matrix[12+1][9] = 1; board_matrix[12+2][9] = 1;
        vertical_walls.append(place(325+2, 405+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 12 && wall_info.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[12][11] = 1; board_matrix[12+1][11] = 1; board_matrix[12+2][11] = 1;
        vertical_walls.append(place(390+2, 405+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 12 && wall_info.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[12][13] = 1; board_matrix[12+1][13] = 1; board_matrix[12+2][13] = 1;
        vertical_walls.append(place(455+2, 405+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 12 && wall_info.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[12][15] = 1; board_matrix[12+1][15] = 1; board_matrix[12+2][15] = 1;
        vertical_walls.append(place(520+2, 405+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 14 && wall_info.split(QChar(' ')).at(2).toInt() == 1){
        board_matrix[14][1] = 1; board_matrix[14+1][1] = 1; board_matrix[14+2][1] = 1;
        vertical_walls.append(place(65+2, 470+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 14 && wall_info.split(QChar(' ')).at(2).toInt() == 3){
        board_matrix[14][3] = 1; board_matrix[14+1][3] = 1; board_matrix[14+2][3] = 1;
        vertical_walls.append(place(130+2, 470+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 14 && wall_info.split(QChar(' ')).at(2).toInt() == 5){
        board_matrix[14][5] = 1; board_matrix[14+1][5] = 1; board_matrix[14+2][5] = 1;
        vertical_walls.append(place(195+2, 470+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 14 && wall_info.split(QChar(' ')).at(2).toInt() == 7){
        board_matrix[14][7] = 1; board_matrix[14+1][7] = 1; board_matrix[14+2][7] = 1;
        vertical_walls.append(place(260+2, 470+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 14 && wall_info.split(QChar(' ')).at(2).toInt() == 9){
        board_matrix[14][9] = 1; board_matrix[14+1][9] = 1; board_matrix[14+2][9] = 1;
        vertical_walls.append(place(325+2, 470+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 14 && wall_info.split(QChar(' ')).at(2).toInt() == 11){
        board_matrix[14][11] = 1; board_matrix[14+1][11] = 1; board_matrix[14+2][11] = 1;
        vertical_walls.append(place(390+2, 470+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 14 && wall_info.split(QChar(' ')).at(2).toInt() == 13){
        board_matrix[14][13] = 1; board_matrix[14+1][13] = 1; board_matrix[14+2][13] = 1;
        vertical_walls.append(place(455+2, 470+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 14 && wall_info.split(QChar(' ')).at(2).toInt() == 15){
        board_matrix[14][15] = 1; board_matrix[14+1][15] = 1; board_matrix[14+2][15] = 1;
        vertical_walls.append(place(520+2, 470+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 1 && wall_info.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[1][0] = 1; board_matrix[1][0+1] = 1; board_matrix[1][0+2] = 1;
        horizontal_walls.append(place(15+2, 65+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 1 && wall_info.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[1][2] = 1; board_matrix[1][2+1] = 1; board_matrix[1][2+2] = 1;
        horizontal_walls.append(place(80+2, 65+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 1 && wall_info.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[1][4] = 1; board_matrix[1][4+1] = 1; board_matrix[1][4+2] = 1;
        horizontal_walls.append(place(145+2, 65+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 1 && wall_info.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[1][6] = 1; board_matrix[1][6+1] = 1; board_matrix[1][6+2] = 1;
        horizontal_walls.append(place(210+2, 65+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 1 && wall_info.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[1][8] = 1; board_matrix[1][8+1] = 1; board_matrix[1][8+2] = 1;
        horizontal_walls.append(place(275+2, 65+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 1 && wall_info.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[1][10] = 1; board_matrix[1][10+1] = 1; board_matrix[1][10+2] = 1;
        horizontal_walls.append(place(340+2, 65+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 1 && wall_info.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[1][12] = 1; board_matrix[1][12+1] = 1; board_matrix[1][12+2] = 1;
        horizontal_walls.append(place(405+2, 65+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 1 && wall_info.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[1][14] = 1; board_matrix[1][14+1] = 1; board_matrix[1][14+2] = 1;
        horizontal_walls.append(place(470+2, 65+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 3 && wall_info.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[3][0] = 1; board_matrix[3][0+1] = 1; board_matrix[3][0+2] = 1;
        horizontal_walls.append(place(15+2, 130+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 3 && wall_info.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[3][2] = 1; board_matrix[3][2+1] = 1; board_matrix[3][2+2] = 1;
        horizontal_walls.append(place(80+2, 130+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 3 && wall_info.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[3][4] = 1; board_matrix[3][4+1] = 1; board_matrix[3][4+2] = 1;
        horizontal_walls.append(place(145+2, 130+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 3 && wall_info.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[3][6] = 1; board_matrix[3][6+1] = 1; board_matrix[3][6+2] = 1;
        horizontal_walls.append(place(210+2, 130+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 3 && wall_info.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[3][8] = 1; board_matrix[3][8+1] = 1; board_matrix[3][8+2] = 1;
        horizontal_walls.append(place(275+2, 130+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 3 && wall_info.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[3][10] = 1; board_matrix[3][10+1] = 1; board_matrix[3][10+2] = 1;
        horizontal_walls.append(place(340+2, 130+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 3 && wall_info.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[3][12] = 1; board_matrix[3][12+1] = 1; board_matrix[3][12+2] = 1;
        horizontal_walls.append(place(405+2, 130+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 3 && wall_info.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[3][14] = 1; board_matrix[3][14+1] = 1; board_matrix[3][14+2] = 1;
        horizontal_walls.append(place(470+2, 130+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 5 && wall_info.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[5][0] = 1; board_matrix[5][0+1] = 1; board_matrix[5][0+2] = 1;
        horizontal_walls.append(place(15+2, 195+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 5 && wall_info.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[5][2] = 1; board_matrix[5][2+1] = 1; board_matrix[5][2+2] = 1;
        horizontal_walls.append(place(80+2, 195+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 5 && wall_info.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[5][4] = 1; board_matrix[5][4+1] = 1; board_matrix[5][4+2] = 1;
        horizontal_walls.append(place(145+2, 195+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 5 && wall_info.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[5][6] = 1; board_matrix[5][6+1] = 1; board_matrix[5][6+2] = 1;
        horizontal_walls.append(place(210+2, 195+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 5 && wall_info.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[5][8] = 1; board_matrix[5][8+1] = 1; board_matrix[5][8+2] = 1;
        horizontal_walls.append(place(275+2, 195+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 5 && wall_info.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[5][10] = 1; board_matrix[5][10+1] = 1; board_matrix[5][10+2] = 1;
        horizontal_walls.append(place(340+2, 195+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 5 && wall_info.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[5][12] = 1; board_matrix[5][12+1] = 1; board_matrix[5][12+2] = 1;
        horizontal_walls.append(place(405+2, 195+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 5 && wall_info.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[5][14] = 1; board_matrix[5][14+1] = 1; board_matrix[5][14+2] = 1;
        horizontal_walls.append(place(470+2, 195+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 7 && wall_info.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[7][0] = 1; board_matrix[7][0+1] = 1; board_matrix[7][0+2] = 1;
        horizontal_walls.append(place(15+2, 260+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 7 && wall_info.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[7][2] = 1; board_matrix[7][2+1] = 1; board_matrix[7][2+2] = 1;
        horizontal_walls.append(place(80+2, 260+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 7 && wall_info.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[7][4] = 1; board_matrix[7][4+1] = 1; board_matrix[7][4+2] = 1;
        horizontal_walls.append(place(145+2, 260+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 7 && wall_info.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[7][6] = 1; board_matrix[7][6+1] = 1; board_matrix[7][6+2] = 1;
        horizontal_walls.append(place(210+2, 260+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 7 && wall_info.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[7][8] = 1; board_matrix[7][8+1] = 1; board_matrix[7][8+2] = 1;
        horizontal_walls.append(place(275+2, 260+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 7 && wall_info.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[7][10] = 1; board_matrix[7][10+1] = 1; board_matrix[7][10+2] = 1;
        horizontal_walls.append(place(340+2, 260+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 7 && wall_info.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[7][12] = 1; board_matrix[7][12+1] = 1; board_matrix[7][12+2] = 1;
        horizontal_walls.append(place(405+2, 260+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 7 && wall_info.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[7][14] = 1; board_matrix[7][14+1] = 1; board_matrix[7][14+2] = 1;
        horizontal_walls.append(place(470+2, 260+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 9 && wall_info.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[9][0] = 1; board_matrix[9][0+1] = 1; board_matrix[9][0+2] = 1;
        horizontal_walls.append(place(15+2, 325+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 9 && wall_info.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[9][2] = 1; board_matrix[9][2+1] = 1; board_matrix[9][2+2] = 1;
        horizontal_walls.append(place(80+2, 325+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 9 && wall_info.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[9][4] = 1; board_matrix[9][4+1] = 1; board_matrix[9][4+2] = 1;
        horizontal_walls.append(place(145+2, 325+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 9 && wall_info.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[9][6] = 1; board_matrix[9][6+1] = 1; board_matrix[9][6+2] = 1;
        horizontal_walls.append(place(210+2, 325+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 9 && wall_info.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[9][8] = 1; board_matrix[9][8+1] = 1; board_matrix[9][8+2] = 1;
        horizontal_walls.append(place(275+2, 325+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 9 && wall_info.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[9][10] = 1; board_matrix[9][10+1] = 1; board_matrix[9][10+2] = 1;
        horizontal_walls.append(place(340+2, 325+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 9 && wall_info.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[9][12] = 1; board_matrix[9][12+1] = 1; board_matrix[9][12+2] = 1;
        horizontal_walls.append(place(405+2, 325+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 9 && wall_info.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[9][14] = 1; board_matrix[9][14+1] = 1; board_matrix[9][14+2] = 1;
        horizontal_walls.append(place(470+2, 325+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 11 && wall_info.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[11][0] = 1; board_matrix[11][0+1] = 1; board_matrix[11][0+2] = 1;
        horizontal_walls.append(place(15+2, 390+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 11 && wall_info.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[11][2] = 1; board_matrix[11][2+1] = 1; board_matrix[11][2+2] = 1;
        horizontal_walls.append(place(80+2, 390+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 11 && wall_info.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[11][4] = 1; board_matrix[11][4+1] = 1; board_matrix[11][4+2] = 1;
        horizontal_walls.append(place(145+2, 390+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 11 && wall_info.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[11][6] = 1; board_matrix[11][6+1] = 1; board_matrix[11][6+2] = 1;
        horizontal_walls.append(place(210+2, 390+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 11 && wall_info.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[11][8] = 1; board_matrix[11][8+1] = 1; board_matrix[11][8+2] = 1;
        horizontal_walls.append(place(275+2, 390+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 11 && wall_info.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[11][10] = 1; board_matrix[11][10+1] = 1; board_matrix[11][10+2] = 1;
        horizontal_walls.append(place(340+2, 390+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 11 && wall_info.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[11][12] = 1; board_matrix[11][12+1] = 1; board_matrix[11][12+2] = 1;
        horizontal_walls.append(place(405+2, 390+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 11 && wall_info.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[11][14] = 1; board_matrix[11][14+1] = 1; board_matrix[11][14+2] = 1;
        horizontal_walls.append(place(470+2, 390+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 13 && wall_info.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[13][0] = 1; board_matrix[13][0+1] = 1; board_matrix[13][0+2] = 1;
        horizontal_walls.append(place(15+2, 455+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 13 && wall_info.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[13][2] = 1; board_matrix[13][2+1] = 1; board_matrix[13][2+2] = 1;
        horizontal_walls.append(place(80+2, 455+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 13 && wall_info.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[13][4] = 1; board_matrix[13][4+1] = 1; board_matrix[13][4+2] = 1;
        horizontal_walls.append(place(145+2, 455+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 13 && wall_info.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[13][6] = 1; board_matrix[13][6+1] = 1; board_matrix[13][6+2] = 1;
        horizontal_walls.append(place(210+2, 455+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 13 && wall_info.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[13][8] = 1; board_matrix[13][8+1] = 1; board_matrix[13][8+2] = 1;
        horizontal_walls.append(place(275+2, 455+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 13 && wall_info.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[13][10] = 1; board_matrix[13][10+1] = 1; board_matrix[13][10+2] = 1;
        horizontal_walls.append(place(340+2, 455+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 13 && wall_info.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[13][12] = 1; board_matrix[13][12+1] = 1; board_matrix[13][12+2] = 1;
        horizontal_walls.append(place(405+2, 455+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 13 && wall_info.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[13][14] = 1; board_matrix[13][14+1] = 1; board_matrix[13][14+2] = 1;
        horizontal_walls.append(place(470+2, 455+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 15 && wall_info.split(QChar(' ')).at(2).toInt() == 0){
        board_matrix[15][0] = 1; board_matrix[15][0+1] = 1; board_matrix[15][0+2] = 1;
        horizontal_walls.append(place(15+2, 520+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 15 && wall_info.split(QChar(' ')).at(2).toInt() == 2){
        board_matrix[15][2] = 1; board_matrix[15][2+1] = 1; board_matrix[15][2+2] = 1;
        horizontal_walls.append(place(80+2, 520+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 15 && wall_info.split(QChar(' ')).at(2).toInt() == 4){
        board_matrix[15][4] = 1; board_matrix[15][4+1] = 1; board_matrix[15][4+2] = 1;
        horizontal_walls.append(place(145+2, 520+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 15 && wall_info.split(QChar(' ')).at(2).toInt() == 6){
        board_matrix[15][6] = 1; board_matrix[15][6+1] = 1; board_matrix[15][6+2] = 1;
        horizontal_walls.append(place(210+2, 520+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 15 && wall_info.split(QChar(' ')).at(2).toInt() == 8){
        board_matrix[15][8] = 1; board_matrix[15][8+1] = 1; board_matrix[15][8+2] = 1;
        horizontal_walls.append(place(275+2, 520+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 15 && wall_info.split(QChar(' ')).at(2).toInt() == 10){
        board_matrix[15][10] = 1; board_matrix[15][10+1] = 1; board_matrix[15][10+2] = 1;
        horizontal_walls.append(place(340+2, 520+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 15 && wall_info.split(QChar(' ')).at(2).toInt() == 12){
        board_matrix[15][12] = 1; board_matrix[15][12+1] = 1; board_matrix[15][12+2] = 1;
        horizontal_walls.append(place(405+2, 520+2));}

    if(wall_info.split(QChar(' ')).at(1).toInt() == 15 && wall_info.split(QChar(' ')).at(2).toInt() == 14){
        board_matrix[15][14] = 1; board_matrix[15][14+1] = 1; board_matrix[15][14+2] = 1;
        horizontal_walls.append(place(470+2, 520+2));}
}
