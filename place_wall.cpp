#include "quoridor.h"
#include "ui_quoridor.h"
#include <QMouseEvent>

struct wall {
    int x;
    int y;

    wall(int xx, int yy) : x(xx), y(yy) {}
};

extern bool wall_enabled;
extern bool p1; extern bool p2;
extern bool vertical; extern bool horizontal;
extern QList<wall> vertical_walls; extern QList<wall> horizontal_walls;
extern QList<wall> matrix_walls;
extern int board_matrix[17][17];


void Quoridor::mousePressEvent(QMouseEvent *event){

    if(wall_enabled){
        if(event->button() == Qt::LeftButton){

            if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 15 && event->pos().y() < 65))
                if(vertical) {
                    if(board_matrix[0][1] == 1 || board_matrix[0+1][1] == 1 || board_matrix[0+2][1] == 1) return;
                    vertical_walls.append(wall(65+2, 15+2)); update();
                    board_matrix[0][1] = 1; board_matrix[0+1][1] = 1; board_matrix[0+2][1] = 1;}

            if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 15 && event->pos().y() < 65))
                if(vertical) {
                    if(board_matrix[0][3] == 1 || board_matrix[0+1][3] == 1 || board_matrix[0+2][3] == 1) return;
                    vertical_walls.append(wall(130+2, 15+2)); update();
                    board_matrix[0][3] = 1; board_matrix[0+1][3] = 1; board_matrix[0+2][3] = 1;}

            if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 15 && event->pos().y() < 65))
                if(vertical) {
                    if(board_matrix[0][5] == 1 || board_matrix[0+1][5] == 1 || board_matrix[0+2][5] == 1) return;
                    vertical_walls.append(wall(195+2, 15+2)); update();
                    board_matrix[0][5] = 1; board_matrix[0+1][5] = 1; board_matrix[0+2][5] = 1;}

            if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 15 && event->pos().y() < 65))
                if(vertical) {
                    if(board_matrix[0][7] == 1 || board_matrix[0+1][7] == 1 || board_matrix[0+2][7] == 1) return;
                    vertical_walls.append(wall(260+2, 15+2)); update();
                    board_matrix[0][7] = 1; board_matrix[0+1][7] = 1; board_matrix[0+2][7] = 1;}

            if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 15 && event->pos().y() < 65))
                if(vertical) {
                    if(board_matrix[0][9] == 1 || board_matrix[0+1][9] == 1 || board_matrix[0+2][9] == 1) return;
                    vertical_walls.append(wall(325+2, 15+2)); update();
                    board_matrix[0][9] = 1; board_matrix[0+1][9] = 1; board_matrix[0+2][9] = 1;}

            if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 15 && event->pos().y() < 65))
                if(vertical) {
                    if(board_matrix[0][11] == 1 || board_matrix[0+1][11] == 1 || board_matrix[0+2][11] == 1) return;
                    vertical_walls.append(wall(390+2, 15+2)); update();
                    board_matrix[0][11] = 1; board_matrix[0+1][11] = 1; board_matrix[0+2][11] = 1;}

            if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 15 && event->pos().y() < 65))
                if(vertical) {
                    if(board_matrix[0][13] == 1 || board_matrix[0+1][13] == 1 || board_matrix[0+2][13] == 1) return;
                    vertical_walls.append(wall(455+2, 15+2)); update();
                    board_matrix[0][13] = 1; board_matrix[0+1][13] = 1; board_matrix[0+2][13] = 1;}

            if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 15 && event->pos().y() < 65))
                if(vertical) {
                    if(board_matrix[0][15] == 1 || board_matrix[0+1][15] == 1 || board_matrix[0+2][15] == 1) return;
                    vertical_walls.append(wall(520+2, 15+2)); update();
                    board_matrix[0][15] = 1; board_matrix[0+1][15] = 1; board_matrix[0+2][15] = 1;}

            if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 80 && event->pos().y() < 130))
                if(vertical) {
                    if(board_matrix[2][1] == 1 || board_matrix[2+1][1] == 1 || board_matrix[2+2][1] == 1) return;
                    vertical_walls.append(wall(65+2, 80+2)); update();
                    board_matrix[2][1] = 1; board_matrix[2+1][1] = 1; board_matrix[2+2][1] = 1;}

            if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 80 && event->pos().y() < 130))
                if(vertical) {
                    if(board_matrix[2][3] == 1 || board_matrix[2+1][3] == 1 || board_matrix[2+2][3] == 1) return;
                    vertical_walls.append(wall(130+2, 80+2)); update();
                    board_matrix[2][3] = 1; board_matrix[2+1][3] = 1; board_matrix[2+2][3] = 1;}

            if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 80 && event->pos().y() < 130))
                if(vertical) {
                    if(board_matrix[2][5] == 1 || board_matrix[2+1][5] == 1 || board_matrix[2+2][5] == 1) return;
                    vertical_walls.append(wall(195+2, 80+2)); update();
                    board_matrix[2][5] = 1; board_matrix[2+1][5] = 1; board_matrix[2+2][5] = 1;}

            if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 80 && event->pos().y() < 130))
                if(vertical) {
                    if(board_matrix[2][7] == 1 || board_matrix[2+1][7] == 1 || board_matrix[2+2][7] == 1) return;
                    vertical_walls.append(wall(260+2, 80+2)); update();
                    board_matrix[2][7] = 1; board_matrix[2+1][7] = 1; board_matrix[2+2][7] = 1;}

            if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 80 && event->pos().y() < 130))
                if(vertical) {
                    if(board_matrix[2][9] == 1 || board_matrix[2+1][9] == 1 || board_matrix[2+2][9] == 1) return;
                    vertical_walls.append(wall(325+2, 80+2)); update();
                    board_matrix[2][9] = 1; board_matrix[2+1][9] = 1; board_matrix[2+2][9] = 1;}

            if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 80 && event->pos().y() < 130))
                if(vertical) {
                    if(board_matrix[2][11] == 1 || board_matrix[2+1][11] == 1 || board_matrix[2+2][11] == 1) return;
                    vertical_walls.append(wall(390+2, 80+2)); update();
                    board_matrix[2][11] = 1; board_matrix[2+1][11] = 1; board_matrix[2+2][11] = 1;}

            if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 80 && event->pos().y() < 130))
                if(vertical) {
                    if(board_matrix[2][13] == 1 || board_matrix[2+1][13] == 1 || board_matrix[2+2][13] == 1) return;
                    vertical_walls.append(wall(455+2, 80+2)); update();
                    board_matrix[2][13] = 1; board_matrix[2+1][13] = 1; board_matrix[2+2][13] = 1;}

            if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 80 && event->pos().y() < 130))
                if(vertical) {
                    if(board_matrix[2][15] == 1 || board_matrix[2+1][15] == 1 || board_matrix[2+2][15] == 1) return;
                    vertical_walls.append(wall(520+2, 80+2)); update();
                    board_matrix[2][15] = 1; board_matrix[2+1][15] = 1; board_matrix[2+2][15] = 1;}

            if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 145 && event->pos().y() < 195))
                if(vertical) {
                    if(board_matrix[4][1] == 1 || board_matrix[4+1][1] == 1 || board_matrix[4+2][1] == 1) return;
                    vertical_walls.append(wall(65+2, 145+2)); update();
                    board_matrix[4][1] = 1; board_matrix[4+1][1] = 1; board_matrix[4+2][1] = 1;}

            if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 145 && event->pos().y() < 195))
                if(vertical) {
                    if(board_matrix[4][3] == 1 || board_matrix[4+1][3] == 1 || board_matrix[4+2][3] == 1) return;
                    vertical_walls.append(wall(130+2, 145+2)); update();
                    board_matrix[4][3] = 1; board_matrix[4+1][3] = 1; board_matrix[4+2][3] = 1;}

            if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 145 && event->pos().y() < 195))
                if(vertical) {
                    if(board_matrix[4][5] == 1 || board_matrix[4+1][5] == 1 || board_matrix[4+2][5] == 1) return;
                    vertical_walls.append(wall(195+2, 145+2)); update();
                    board_matrix[4][5] = 1; board_matrix[4+1][5] = 1; board_matrix[4+2][5] = 1;}

            if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 145 && event->pos().y() < 195))
                if(vertical) {
                    if(board_matrix[4][7] == 1 || board_matrix[4+1][7] == 1 || board_matrix[4+2][7] == 1) return;
                    vertical_walls.append(wall(260+2, 145+2)); update();
                    board_matrix[4][7] = 1; board_matrix[4+1][7] = 1; board_matrix[4+2][7] = 1;}

            if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 145 && event->pos().y() < 195))
                if(vertical) {
                    if(board_matrix[4][9] == 1 || board_matrix[4+1][9] == 1 || board_matrix[4+2][9] == 1) return;
                    vertical_walls.append(wall(325+2, 145+2)); update();
                    board_matrix[4][9] = 1; board_matrix[4+1][9] = 1; board_matrix[4+2][9] = 1;}

            if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 145 && event->pos().y() < 195))
                if(vertical) {
                    if(board_matrix[4][11] == 1 || board_matrix[4+1][11] == 1 || board_matrix[4+2][11] == 1) return;
                    vertical_walls.append(wall(390+2, 145+2)); update();
                    board_matrix[4][11] = 1; board_matrix[4+1][11] = 1; board_matrix[4+2][11] = 1;}

            if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 145 && event->pos().y() < 195))
                if(vertical) {
                    if(board_matrix[4][13] == 1 || board_matrix[4+1][13] == 1 || board_matrix[4+2][13] == 1) return;
                    vertical_walls.append(wall(455+2, 145+2)); update();
                    board_matrix[4][13] = 1; board_matrix[4+1][13] = 1; board_matrix[4+2][13] = 1;}

            if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 145 && event->pos().y() < 195))
                if(vertical) {
                    if(board_matrix[4][15] == 1 || board_matrix[4+1][15] == 1 || board_matrix[4+2][15] == 1) return;
                    vertical_walls.append(wall(520+2, 145+2)); update();
                    board_matrix[4][15] = 1; board_matrix[4+1][15] = 1; board_matrix[4+2][15] = 1;}

            if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 210 && event->pos().y() < 260))
                if(vertical) {
                    if(board_matrix[6][1] == 1 || board_matrix[6+1][1] == 1 || board_matrix[6+2][1] == 1) return;
                    vertical_walls.append(wall(65+2, 210+2)); update();
                    board_matrix[6][1] = 1; board_matrix[6+1][1] = 1; board_matrix[6+2][1] = 1;}

            if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 210 && event->pos().y() < 260))
                if(vertical) {
                    if(board_matrix[6][3] == 1 || board_matrix[6+1][3] == 1 || board_matrix[6+2][3] == 1) return;
                    vertical_walls.append(wall(130+2, 210+2)); update();
                    board_matrix[6][3] = 1; board_matrix[6+1][3] = 1; board_matrix[6+2][3] = 1;}

            if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 210 && event->pos().y() < 260))
                if(vertical) {
                    if(board_matrix[6][5] == 1 || board_matrix[6+1][5] == 1 || board_matrix[6+2][5] == 1) return;
                    vertical_walls.append(wall(195+2, 210+2)); update();
                    board_matrix[6][5] = 1; board_matrix[6+1][5] = 1; board_matrix[6+2][5] = 1;}

            if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 210 && event->pos().y() < 260))
                if(vertical) {
                    if(board_matrix[6][7] == 1 || board_matrix[6+1][7] == 1 || board_matrix[6+2][7] == 1) return;
                    vertical_walls.append(wall(260+2, 210+2)); update();
                    board_matrix[6][7] = 1; board_matrix[6+1][7] = 1; board_matrix[6+2][7] = 1;}

            if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 210 && event->pos().y() < 260))
                if(vertical) {
                    if(board_matrix[6][9] == 1 || board_matrix[6+1][9] == 1 || board_matrix[6+2][9] == 1) return;
                    vertical_walls.append(wall(325+2, 210+2)); update();
                    board_matrix[6][9] = 1; board_matrix[6+1][9] = 1; board_matrix[6+2][9] = 1;}

            if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 210 && event->pos().y() < 260))
                if(vertical) {
                    if(board_matrix[6][11] == 1 || board_matrix[6+1][11] == 1 || board_matrix[6+2][11] == 1) return;
                    vertical_walls.append(wall(390+2, 210+2)); update();
                    board_matrix[6][11] = 1; board_matrix[6+1][11] = 1; board_matrix[6+2][11] = 1;}

            if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 210 && event->pos().y() < 260))
                if(vertical) {
                    if(board_matrix[6][13] == 1 || board_matrix[6+1][13] == 1 || board_matrix[6+2][13] == 1) return;
                    vertical_walls.append(wall(455+2, 210+2)); update();
                    board_matrix[6][13] = 1; board_matrix[6+1][13] = 1; board_matrix[6+2][13] = 1;}

            if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 210 && event->pos().y() < 260))
                if(vertical) {
                    if(board_matrix[6][15] == 1 || board_matrix[6+1][15] == 1 || board_matrix[6+2][15] == 1) return;
                    vertical_walls.append(wall(520+2, 210+2)); update();
                    board_matrix[6][15] = 1; board_matrix[6+1][15] = 1; board_matrix[6+2][15] = 1;}

            if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 275 && event->pos().y() < 325))
                if(vertical) {
                    if(board_matrix[8][1] == 1 || board_matrix[8+1][1] == 1 || board_matrix[8+2][1] == 1) return;
                    vertical_walls.append(wall(65+2, 275+2)); update();
                    board_matrix[8][1] = 1; board_matrix[8+1][1] = 1; board_matrix[8+2][1] = 1;}

            if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 275 && event->pos().y() < 325))
                if(vertical) {
                    if(board_matrix[8][3] == 1 || board_matrix[8+1][3] == 1 || board_matrix[8+2][3] == 1) return;
                    vertical_walls.append(wall(130+2, 275+2)); update();
                    board_matrix[8][3] = 1; board_matrix[8+1][3] = 1; board_matrix[8+2][3] = 1;}

            if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 275 && event->pos().y() < 325))
                if(vertical) {
                    if(board_matrix[8][5] == 1 || board_matrix[8+1][5] == 1 || board_matrix[8+2][5] == 1) return;
                    vertical_walls.append(wall(195+2, 275+2)); update();
                    board_matrix[8][5] = 1; board_matrix[8+1][5] = 1; board_matrix[8+2][5] = 1;}

            if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 275 && event->pos().y() < 325))
                if(vertical) {
                    if(board_matrix[8][7] == 1 || board_matrix[8+1][7] == 1 || board_matrix[8+2][7] == 1) return;
                    vertical_walls.append(wall(260+2, 275+2)); update();
                    board_matrix[8][7] = 1; board_matrix[8+1][7] = 1; board_matrix[8+2][7] = 1;}

            if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 275 && event->pos().y() < 325))
                if(vertical) {
                    if(board_matrix[8][9] == 1 || board_matrix[8+1][9] == 1 || board_matrix[8+2][9] == 1) return;
                    vertical_walls.append(wall(325+2, 275+2)); update();
                    board_matrix[8][9] = 1; board_matrix[8+1][9] = 1; board_matrix[8+2][9] = 1;}

            if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 275 && event->pos().y() < 325))
                if(vertical) {
                    if(board_matrix[8][11] == 1 || board_matrix[8+1][11] == 1 || board_matrix[8+2][11] == 1) return;
                    vertical_walls.append(wall(390+2, 275+2)); update();
                    board_matrix[8][11] = 1; board_matrix[8+1][11] = 1; board_matrix[8+2][11] = 1;}

            if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 275 && event->pos().y() < 325))
                if(vertical) {
                    if(board_matrix[8][13] == 1 || board_matrix[8+1][13] == 1 || board_matrix[8+2][13] == 1) return;
                    vertical_walls.append(wall(455+2, 275+2)); update();
                    board_matrix[8][13] = 1; board_matrix[8+1][13] = 1; board_matrix[8+2][13] = 1;}

            if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 275 && event->pos().y() < 325))
                if(vertical) {
                    if(board_matrix[8][15] == 1 || board_matrix[8+1][15] == 1 || board_matrix[8+2][15] == 1) return;
                    vertical_walls.append(wall(520+2, 275+2)); update();
                    board_matrix[8][15] = 1; board_matrix[8+1][15] = 1; board_matrix[8+2][15] = 1;}

            if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 340 && event->pos().y() < 390))
                if(vertical) {
                    if(board_matrix[10][1] == 1 || board_matrix[10+1][1] == 1 || board_matrix[10+2][1] == 1) return;
                    vertical_walls.append(wall(65+2, 340+2)); update();
                    board_matrix[10][1] = 1; board_matrix[10+1][1] = 1; board_matrix[10+2][1] = 1;}

            if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 340 && event->pos().y() < 390))
                if(vertical) {
                    if(board_matrix[10][3] == 1 || board_matrix[10+1][3] == 1 || board_matrix[10+2][3] == 1) return;
                    vertical_walls.append(wall(130+2, 340+2)); update();
                    board_matrix[10][3] = 1; board_matrix[10+1][3] = 1; board_matrix[10+2][3] = 1;}

            if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 340 && event->pos().y() < 390))
                if(vertical) {
                    if(board_matrix[10][5] == 1 || board_matrix[10+1][5] == 1 || board_matrix[10+2][5] == 1) return;
                    vertical_walls.append(wall(195+2, 340+2)); update();
                    board_matrix[10][5] = 1; board_matrix[10+1][5] = 1; board_matrix[10+2][5] = 1;}

            if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 340 && event->pos().y() < 390))
                if(vertical) {
                    if(board_matrix[10][7] == 1 || board_matrix[10+1][7] == 1 || board_matrix[10+2][7] == 1) return;
                    vertical_walls.append(wall(260+2, 340+2)); update();
                    board_matrix[10][7] = 1; board_matrix[10+1][7] = 1; board_matrix[10+2][7] = 1;}

            if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 340 && event->pos().y() < 390))
                if(vertical) {
                    if(board_matrix[10][9] == 1 || board_matrix[10+1][9] == 1 || board_matrix[10+2][9] == 1) return;
                    vertical_walls.append(wall(325+2, 340+2)); update();
                    board_matrix[10][9] = 1; board_matrix[10+1][9] = 1; board_matrix[10+2][9] = 1;}

            if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 340 && event->pos().y() < 390))
                if(vertical) {
                    if(board_matrix[10][11] == 1 || board_matrix[10+1][11] == 1 || board_matrix[10+2][11] == 1) return;
                    vertical_walls.append(wall(390+2, 340+2)); update();
                    board_matrix[10][11] = 1; board_matrix[10+1][11] = 1; board_matrix[10+2][11] = 1;}

            if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 340 && event->pos().y() < 390))
                if(vertical) {
                    if(board_matrix[10][13] == 1 || board_matrix[10+1][13] == 1 || board_matrix[10+2][13] == 1) return;
                    vertical_walls.append(wall(455+2, 340+2)); update();
                    board_matrix[10][13] = 1; board_matrix[10+1][13] = 1; board_matrix[10+2][13] = 1;}

            if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 340 && event->pos().y() < 390))
                if(vertical) {
                    if(board_matrix[10][15] == 1 || board_matrix[10+1][15] == 1 || board_matrix[10+2][15] == 1) return;
                    vertical_walls.append(wall(520+2, 340+2)); update();
                    board_matrix[10][15] = 1; board_matrix[10+1][15] = 1; board_matrix[10+2][15] = 1;}

            if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 405 && event->pos().y() < 455))
                if(vertical) {
                    if(board_matrix[12][1] == 1 || board_matrix[12+1][1] == 1 || board_matrix[12+2][1] == 1) return;
                    vertical_walls.append(wall(65+2, 405+2)); update();
                    board_matrix[12][1] = 1; board_matrix[12+1][1] = 1; board_matrix[12+2][1] = 1;}

            if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 405 && event->pos().y() < 455))
                if(vertical) {
                    if(board_matrix[12][3] == 1 || board_matrix[12+1][3] == 1 || board_matrix[12+2][3] == 1) return;
                    vertical_walls.append(wall(130+2, 405+2)); update();
                    board_matrix[12][3] = 1; board_matrix[12+1][3] = 1; board_matrix[12+2][3] = 1;}

            if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 405 && event->pos().y() < 455))
                if(vertical) {
                    if(board_matrix[12][5] == 1 || board_matrix[12+1][5] == 1 || board_matrix[12+2][5] == 1) return;
                    vertical_walls.append(wall(195+2, 405+2)); update();
                    board_matrix[12][5] = 1; board_matrix[12+1][5] = 1; board_matrix[12+2][5] = 1;}

            if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 405 && event->pos().y() < 455))
                if(vertical) {
                    if(board_matrix[12][7] == 1 || board_matrix[12+1][7] == 1 || board_matrix[12+2][7] == 1) return;
                    vertical_walls.append(wall(260+2, 405+2)); update();
                    board_matrix[12][7] = 1; board_matrix[12+1][7] = 1; board_matrix[12+2][7] = 1;}

            if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 405 && event->pos().y() < 455))
                if(vertical) {
                    if(board_matrix[12][9] == 1 || board_matrix[12+1][9] == 1 || board_matrix[12+2][9] == 1) return;
                    vertical_walls.append(wall(325+2, 405+2)); update();
                    board_matrix[12][9] = 1; board_matrix[12+1][9] = 1; board_matrix[12+2][9] = 1;}

            if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 405 && event->pos().y() < 455))
                if(vertical) {
                    if(board_matrix[12][11] == 1 || board_matrix[12+1][11] == 1 || board_matrix[12+2][11] == 1) return;
                    vertical_walls.append(wall(390+2, 405+2)); update();
                    board_matrix[12][11] = 1; board_matrix[12+1][11] = 1; board_matrix[12+2][11] = 1;}

            if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 405 && event->pos().y() < 455))
                if(vertical) {
                    if(board_matrix[12][13] == 1 || board_matrix[12+1][13] == 1 || board_matrix[12+2][13] == 1) return;
                    vertical_walls.append(wall(455+2, 405+2)); update();
                    board_matrix[12][13] = 1; board_matrix[12+1][13] = 1; board_matrix[12+2][13] = 1;}

            if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 405 && event->pos().y() < 455))
                if(vertical) {
                    if(board_matrix[12][15] == 1 || board_matrix[12+1][15] == 1 || board_matrix[12+2][15] == 1) return;
                    vertical_walls.append(wall(520+2, 405+2)); update();
                    board_matrix[12][15] = 1; board_matrix[12+1][15] = 1; board_matrix[12+2][15] = 1;}

            if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 470 && event->pos().y() < 520))
                if(vertical) {
                    if(board_matrix[14][1] == 1 || board_matrix[14+1][1] == 1 || board_matrix[14+2][1] == 1) return;
                    vertical_walls.append(wall(65+2, 470+2)); update();
                    board_matrix[14][1] = 1; board_matrix[14+1][1] = 1; board_matrix[14+2][1] = 1;}

            if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 470 && event->pos().y() < 520))
                if(vertical) {
                    if(board_matrix[14][3] == 1 || board_matrix[14+1][3] == 1 || board_matrix[14+2][3] == 1) return;
                    vertical_walls.append(wall(130+2, 470+2)); update();
                    board_matrix[14][3] = 1; board_matrix[14+1][3] = 1; board_matrix[14+2][3] = 1;}

            if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 470 && event->pos().y() < 520))
                if(vertical) {
                    if(board_matrix[14][5] == 1 || board_matrix[14+1][5] == 1 || board_matrix[14+2][5] == 1) return;
                    vertical_walls.append(wall(195+2, 470+2)); update();
                    board_matrix[14][5] = 1; board_matrix[14+1][5] = 1; board_matrix[14+2][5] = 1;}

            if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 470 && event->pos().y() < 520))
                if(vertical) {
                    if(board_matrix[14][7] == 1 || board_matrix[14+1][7] == 1 || board_matrix[14+2][7] == 1) return;
                    vertical_walls.append(wall(260+2, 470+2)); update();
                    board_matrix[14][7] = 1; board_matrix[14+1][7] = 1; board_matrix[14+2][7] = 1;}

            if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 470 && event->pos().y() < 520))
                if(vertical) {
                    if(board_matrix[14][9] == 1 || board_matrix[14+1][9] == 1 || board_matrix[14+2][9] == 1) return;
                    vertical_walls.append(wall(325+2, 470+2)); update();
                    board_matrix[14][9] = 1; board_matrix[14+1][9] = 1; board_matrix[14+2][9] = 1;}

            if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 470 && event->pos().y() < 520))
                if(vertical) {
                    if(board_matrix[14][11] == 1 || board_matrix[14+1][11] == 1 || board_matrix[14+2][11] == 1) return;
                    vertical_walls.append(wall(390+2, 470+2)); update();
                    board_matrix[14][11] = 1; board_matrix[14+1][11] = 1; board_matrix[14+2][11] = 1;}

            if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 470 && event->pos().y() < 520))
                if(vertical) {
                    if(board_matrix[14][13] == 1 || board_matrix[14+1][13] == 1 || board_matrix[14+2][13] == 1) return;
                    vertical_walls.append(wall(455+2, 470+2)); update();
                    board_matrix[14][13] = 1; board_matrix[14+1][13] = 1; board_matrix[14+2][13] = 1;}

            if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 470 && event->pos().y() < 520))
                if(vertical) {
                    if(board_matrix[14][15] == 1 || board_matrix[14+1][15] == 1 || board_matrix[14+2][15] == 1) return;
                    vertical_walls.append(wall(520+2, 470+2)); update();
                    board_matrix[14][15] = 1; board_matrix[14+1][15] = 1; board_matrix[14+2][15] = 1;}

            if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 65 && event->pos().y() < 80))
                if(horizontal) {
                    if(board_matrix[1][0] == 1 || board_matrix[1][0+1] == 1 || board_matrix[1][0+2] == 1) return;
                    horizontal_walls.append(wall(15+2, 65+2)); update();
                    board_matrix[1][0] = 1; board_matrix[1][0+1] = 1; board_matrix[1][0+2] = 1;}

            if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 65 && event->pos().y() < 80))
                if(horizontal) {
                    if(board_matrix[1][2] == 1 || board_matrix[1][2+1] == 1 || board_matrix[1][2+2] == 1) return;
                    horizontal_walls.append(wall(80+2, 65+2)); update();
                    board_matrix[1][2] = 1; board_matrix[1][2+1] = 1; board_matrix[1][2+2] = 1;}

            if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 65 && event->pos().y() < 80))
                if(horizontal) {
                    if(board_matrix[1][4] == 1 || board_matrix[1][4+1] == 1 || board_matrix[1][4+2] == 1) return;
                    horizontal_walls.append(wall(145+2, 65+2)); update();
                    board_matrix[1][4] = 1; board_matrix[1][4+1] = 1; board_matrix[1][4+2] = 1;}

            if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 65 && event->pos().y() < 80))
                if(horizontal) {
                    if(board_matrix[1][6] == 1 || board_matrix[1][6+1] == 1 || board_matrix[1][6+2] == 1) return;
                    horizontal_walls.append(wall(210+2, 65+2)); update();
                    board_matrix[1][6] = 1; board_matrix[1][6+1] = 1; board_matrix[1][6+2] = 1;}

            if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 65 && event->pos().y() < 80))
                if(horizontal) {
                    if(board_matrix[1][8] == 1 || board_matrix[1][8+1] == 1 || board_matrix[1][8+2] == 1) return;
                    horizontal_walls.append(wall(275+2, 65+2)); update();
                    board_matrix[1][8] = 1; board_matrix[1][8+1] = 1; board_matrix[1][8+2] = 1;}

            if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 65 && event->pos().y() < 80))
                if(horizontal) {
                    if(board_matrix[1][10] == 1 || board_matrix[1][10+1] == 1 || board_matrix[1][10+2] == 1) return;
                    horizontal_walls.append(wall(340+2, 65+2)); update();
                    board_matrix[1][10] = 1; board_matrix[1][10+1] = 1; board_matrix[1][10+2] = 1;}

            if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 65 && event->pos().y() < 80))
                if(horizontal) {
                    if(board_matrix[1][12] == 1 || board_matrix[1][12+1] == 1 || board_matrix[1][12+2] == 1) return;
                    horizontal_walls.append(wall(405+2, 65+2)); update();
                    board_matrix[1][12] = 1; board_matrix[1][12+1] = 1; board_matrix[1][12+2] = 1;}

            if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 65 && event->pos().y() < 80))
                if(horizontal) {
                    if(board_matrix[1][14] == 1 || board_matrix[1][14+1] == 1 || board_matrix[1][14+2] == 1) return;
                    horizontal_walls.append(wall(470+2, 65+2)); update();
                    board_matrix[1][14] = 1; board_matrix[1][14+1] = 1; board_matrix[1][14+2] = 1;}

            if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 130 && event->pos().y() < 145))
                if(horizontal) {
                    if(board_matrix[3][0] == 1 || board_matrix[3][0+1] == 1 || board_matrix[3][0+2] == 1) return;
                    horizontal_walls.append(wall(15+2, 130+2)); update();
                    board_matrix[3][0] = 1; board_matrix[3][0+1] = 1; board_matrix[3][0+2] = 1;}

            if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 130 && event->pos().y() < 145))
                if(horizontal) {
                    if(board_matrix[3][2] == 1 || board_matrix[3][2+1] == 1 || board_matrix[3][2+2] == 1) return;
                    horizontal_walls.append(wall(80+2, 130+2)); update();
                    board_matrix[3][2] = 1; board_matrix[3][2+1] = 1; board_matrix[3][2+2] = 1;}

            if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 130 && event->pos().y() < 145))
                if(horizontal) {
                    if(board_matrix[3][4] == 1 || board_matrix[3][4+1] == 1 || board_matrix[3][4+2] == 1) return;
                    horizontal_walls.append(wall(145+2, 130+2)); update();
                    board_matrix[3][4] = 1; board_matrix[3][4+1] = 1; board_matrix[3][4+2] = 1;}

            if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 130 && event->pos().y() < 145))
                if(horizontal) {
                    if(board_matrix[3][6] == 1 || board_matrix[3][6+1] == 1 || board_matrix[3][6+2] == 1) return;
                    horizontal_walls.append(wall(210+2, 130+2)); update();
                    board_matrix[3][6] = 1; board_matrix[3][6+1] = 1; board_matrix[3][6+2] = 1;}

            if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 130 && event->pos().y() < 145))
                if(horizontal) {
                    if(board_matrix[3][8] == 1 || board_matrix[3][8+1] == 1 || board_matrix[3][8+2] == 1) return;
                    horizontal_walls.append(wall(275+2, 130+2)); update();
                    board_matrix[3][8] = 1; board_matrix[3][8+1] = 1; board_matrix[3][8+2] = 1;}

            if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 130 && event->pos().y() < 145))
                if(horizontal) {
                    if(board_matrix[3][10] == 1 || board_matrix[3][10+1] == 1 || board_matrix[3][10+2] == 1) return;
                    horizontal_walls.append(wall(340+2, 130+2)); update();
                    board_matrix[3][10] = 1; board_matrix[3][10+1] = 1; board_matrix[3][10+2] = 1;}

            if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 130 && event->pos().y() < 145))
                if(horizontal) {
                    if(board_matrix[3][12] == 1 || board_matrix[3][12+1] == 1 || board_matrix[3][12+2] == 1) return;
                    horizontal_walls.append(wall(405+2, 130+2)); update();
                    board_matrix[3][12] = 1; board_matrix[3][12+1] = 1; board_matrix[3][12+2] = 1;}

            if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 130 && event->pos().y() < 145))
                if(horizontal) {
                    if(board_matrix[3][14] == 1 || board_matrix[3][14+1] == 1 || board_matrix[3][14+2] == 1) return;
                    horizontal_walls.append(wall(470+2, 130+2)); update();
                    board_matrix[3][14] = 1; board_matrix[3][14+1] = 1; board_matrix[3][14+2] = 1;}

            if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 195 && event->pos().y() < 210))
                if(horizontal) {
                    if(board_matrix[5][0] == 1 || board_matrix[5][0+1] == 1 || board_matrix[5][0+2] == 1) return;
                    horizontal_walls.append(wall(15+2, 195+2)); update();
                    board_matrix[5][0] = 1; board_matrix[5][0+1] = 1; board_matrix[5][0+2] = 1;}

            if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 195 && event->pos().y() < 210))
                if(horizontal) {
                    if(board_matrix[5][2] == 1 || board_matrix[5][2+1] == 1 || board_matrix[5][2+2] == 1) return;
                    horizontal_walls.append(wall(80+2, 195+2)); update();
                    board_matrix[5][2] = 1; board_matrix[5][2+1] = 1; board_matrix[5][2+2] = 1;}

            if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 195 && event->pos().y() < 210))
                if(horizontal) {
                    if(board_matrix[5][4] == 1 || board_matrix[5][4+1] == 1 || board_matrix[5][4+2] == 1) return;
                    horizontal_walls.append(wall(145+2, 195+2)); update();
                    board_matrix[5][4] = 1; board_matrix[5][4+1] = 1; board_matrix[5][4+2] = 1;}

            if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 195 && event->pos().y() < 210))
                if(horizontal) {
                    if(board_matrix[5][6] == 1 || board_matrix[5][6+1] == 1 || board_matrix[5][6+2] == 1) return;
                    horizontal_walls.append(wall(210+2, 195+2)); update();
                    board_matrix[5][6] = 1; board_matrix[5][6+1] = 1; board_matrix[5][6+2] = 1;}

            if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 195 && event->pos().y() < 210))
                if(horizontal) {
                    if(board_matrix[5][8] == 1 || board_matrix[5][8+1] == 1 || board_matrix[5][8+2] == 1) return;
                    horizontal_walls.append(wall(275+2, 195+2)); update();
                    board_matrix[5][8] = 1; board_matrix[5][8+1] = 1; board_matrix[5][8+2] = 1;}

            if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 195 && event->pos().y() < 210))
                if(horizontal) {
                    if(board_matrix[5][10] == 1 || board_matrix[5][10+1] == 1 || board_matrix[5][10+2] == 1) return;
                    horizontal_walls.append(wall(340+2, 195+2)); update();
                    board_matrix[5][10] = 1; board_matrix[5][10+1] = 1; board_matrix[5][10+2] = 1;}

            if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 195 && event->pos().y() < 210))
                if(horizontal) {
                    if(board_matrix[5][12] == 1 || board_matrix[5][12+1] == 1 || board_matrix[5][12+2] == 1) return;
                    horizontal_walls.append(wall(405+2, 195+2)); update();
                    board_matrix[5][12] = 1; board_matrix[5][12+1] = 1; board_matrix[5][12+2] = 1;}

            if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 195 && event->pos().y() < 210))
                if(horizontal) {
                    if(board_matrix[5][14] == 1 || board_matrix[5][14+1] == 1 || board_matrix[5][14+2] == 1) return;
                    horizontal_walls.append(wall(470+2, 195+2)); update();
                    board_matrix[5][14] = 1; board_matrix[5][14+1] = 1; board_matrix[5][14+2] = 1;}

            if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 260 && event->pos().y() < 275))
                if(horizontal) {
                    if(board_matrix[7][0] == 1 || board_matrix[7][0+1] == 1 || board_matrix[7][0+2] == 1) return;
                    horizontal_walls.append(wall(15+2, 260+2)); update();
                    board_matrix[7][0] = 1; board_matrix[7][0+1] = 1; board_matrix[7][0+2] = 1;}

            if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 260 && event->pos().y() < 275))
                if(horizontal) {
                    if(board_matrix[7][2] == 1 || board_matrix[7][2+1] == 1 || board_matrix[7][2+2] == 1) return;
                    horizontal_walls.append(wall(80+2, 260+2)); update();
                    board_matrix[7][2] = 1; board_matrix[7][2+1] = 1; board_matrix[7][2+2] = 1;}

            if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 260 && event->pos().y() < 275))
                if(horizontal) {
                    if(board_matrix[7][4] == 1 || board_matrix[7][4+1] == 1 || board_matrix[7][4+2] == 1) return;
                    horizontal_walls.append(wall(145+2, 260+2)); update();
                    board_matrix[7][4] = 1; board_matrix[7][4+1] = 1; board_matrix[7][4+2] = 1;}

            if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 260 && event->pos().y() < 275))
                if(horizontal) {
                    if(board_matrix[7][6] == 1 || board_matrix[7][6+1] == 1 || board_matrix[7][6+2] == 1) return;
                    horizontal_walls.append(wall(210+2, 260+2)); update();
                    board_matrix[7][6] = 1; board_matrix[7][6+1] = 1; board_matrix[7][6+2] = 1;}

            if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 260 && event->pos().y() < 275))
                if(horizontal) {
                    if(board_matrix[7][8] == 1 || board_matrix[7][8+1] == 1 || board_matrix[7][8+2] == 1) return;
                    horizontal_walls.append(wall(275+2, 260+2)); update();
                    board_matrix[7][8] = 1; board_matrix[7][8+1] = 1; board_matrix[7][8+2] = 1;}

            if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 260 && event->pos().y() < 275))
                if(horizontal) {
                    if(board_matrix[7][10] == 1 || board_matrix[7][10+1] == 1 || board_matrix[7][10+2] == 1) return;
                    horizontal_walls.append(wall(340+2, 260+2)); update();
                    board_matrix[7][10] = 1; board_matrix[7][10+1] = 1; board_matrix[7][10+2] = 1;}

            if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 260 && event->pos().y() < 275))
                if(horizontal) {
                    if(board_matrix[7][12] == 1 || board_matrix[7][12+1] == 1 || board_matrix[7][12+2] == 1) return;
                    horizontal_walls.append(wall(405+2, 260+2)); update();
                    board_matrix[7][12] = 1; board_matrix[7][12+1] = 1; board_matrix[7][12+2] = 1;}

            if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 260 && event->pos().y() < 275))
                if(horizontal) {
                    if(board_matrix[7][14] == 1 || board_matrix[7][14+1] == 1 || board_matrix[7][14+2] == 1) return;
                    horizontal_walls.append(wall(470+2, 260+2)); update();
                    board_matrix[7][14] = 1; board_matrix[7][14+1] = 1; board_matrix[7][14+2] = 1;}

            if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 325 && event->pos().y() < 340))
                if(horizontal) {
                    if(board_matrix[9][0] == 1 || board_matrix[9][0+1] == 1 || board_matrix[9][0+2] == 1) return;
                    horizontal_walls.append(wall(15+2, 325+2)); update();
                    board_matrix[9][0] = 1; board_matrix[9][0+1] = 1; board_matrix[9][0+2] = 1;}

            if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 325 && event->pos().y() < 340))
                if(horizontal) {
                    if(board_matrix[9][2] == 1 || board_matrix[9][2+1] == 1 || board_matrix[9][2+2] == 1) return;
                    horizontal_walls.append(wall(80+2, 325+2)); update();
                    board_matrix[9][2] = 1; board_matrix[9][2+1] = 1; board_matrix[9][2+2] = 1;}

            if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 325 && event->pos().y() < 340))
                if(horizontal) {
                    if(board_matrix[9][4] == 1 || board_matrix[9][4+1] == 1 || board_matrix[9][4+2] == 1) return;
                    horizontal_walls.append(wall(145+2, 325+2)); update();
                    board_matrix[9][4] = 1; board_matrix[9][4+1] = 1; board_matrix[9][4+2] = 1;}

            if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 325 && event->pos().y() < 340))
                if(horizontal) {
                    if(board_matrix[9][6] == 1 || board_matrix[9][6+1] == 1 || board_matrix[9][6+2] == 1) return;
                    horizontal_walls.append(wall(210+2, 325+2)); update();
                    board_matrix[9][6] = 1; board_matrix[9][6+1] = 1; board_matrix[9][6+2] = 1;}

            if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 325 && event->pos().y() < 340))
                if(horizontal) {
                    if(board_matrix[9][8] == 1 || board_matrix[9][8+1] == 1 || board_matrix[9][8+2] == 1) return;
                    horizontal_walls.append(wall(275+2, 325+2)); update();
                    board_matrix[9][8] = 1; board_matrix[9][8+1] = 1; board_matrix[9][8+2] = 1;}

            if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 325 && event->pos().y() < 340))
                if(horizontal) {
                    if(board_matrix[9][10] == 1 || board_matrix[9][10+1] == 1 || board_matrix[9][10+2] == 1) return;
                    horizontal_walls.append(wall(340+2, 325+2)); update();
                    board_matrix[9][10] = 1; board_matrix[9][10+1] = 1; board_matrix[9][10+2] = 1;}

            if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 325 && event->pos().y() < 340))
                if(horizontal) {
                    if(board_matrix[9][12] == 1 || board_matrix[9][12+1] == 1 || board_matrix[9][12+2] == 1) return;
                    horizontal_walls.append(wall(405+2, 325+2)); update();
                    board_matrix[9][12] = 1; board_matrix[9][12+1] = 1; board_matrix[9][12+2] = 1;}

            if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 325 && event->pos().y() < 340))
                if(horizontal) {
                    if(board_matrix[9][14] == 1 || board_matrix[9][14+1] == 1 || board_matrix[9][14+2] == 1) return;
                    horizontal_walls.append(wall(470+2, 325+2)); update();
                    board_matrix[9][14] = 1; board_matrix[9][14+1] = 1; board_matrix[9][14+2] = 1;}

            if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 390 && event->pos().y() < 405))
                if(horizontal) {
                    if(board_matrix[11][0] == 1 || board_matrix[11][0+1] == 1 || board_matrix[11][0+2] == 1) return;
                    horizontal_walls.append(wall(15+2, 390+2)); update();
                    board_matrix[11][0] = 1; board_matrix[11][0+1] = 1; board_matrix[11][0+2] = 1;}

            if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 390 && event->pos().y() < 405))
                if(horizontal) {
                    if(board_matrix[11][2] == 1 || board_matrix[11][2+1] == 1 || board_matrix[11][2+2] == 1) return;
                    horizontal_walls.append(wall(80+2, 390+2)); update();
                    board_matrix[11][2] = 1; board_matrix[11][2+1] = 1; board_matrix[11][2+2] = 1;}

            if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 390 && event->pos().y() < 405))
                if(horizontal) {
                    if(board_matrix[11][4] == 1 || board_matrix[11][4+1] == 1 || board_matrix[11][4+2] == 1) return;
                    horizontal_walls.append(wall(145+2, 390+2)); update();
                    board_matrix[11][4] = 1; board_matrix[11][4+1] = 1; board_matrix[11][4+2] = 1;}

            if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 390 && event->pos().y() < 405))
                if(horizontal) {
                    if(board_matrix[11][6] == 1 || board_matrix[11][6+1] == 1 || board_matrix[11][6+2] == 1) return;
                    horizontal_walls.append(wall(210+2, 390+2)); update();
                    board_matrix[11][6] = 1; board_matrix[11][6+1] = 1; board_matrix[11][6+2] = 1;}

            if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 390 && event->pos().y() < 405))
                if(horizontal) {
                    if(board_matrix[11][8] == 1 || board_matrix[11][8+1] == 1 || board_matrix[11][8+2] == 1) return;
                    horizontal_walls.append(wall(275+2, 390+2)); update();
                    board_matrix[11][8] = 1; board_matrix[11][8+1] = 1; board_matrix[11][8+2] = 1;}

            if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 390 && event->pos().y() < 405))
                if(horizontal) {
                    if(board_matrix[11][10] == 1 || board_matrix[11][10+1] == 1 || board_matrix[11][10+2] == 1) return;
                    horizontal_walls.append(wall(340+2, 390+2)); update();
                    board_matrix[11][10] = 1; board_matrix[11][10+1] = 1; board_matrix[11][10+2] = 1;}

            if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 390 && event->pos().y() < 405))
                if(horizontal) {
                    if(board_matrix[11][12] == 1 || board_matrix[11][12+1] == 1 || board_matrix[11][12+2] == 1) return;
                    horizontal_walls.append(wall(405+2, 390+2)); update();
                    board_matrix[11][12] = 1; board_matrix[11][12+1] = 1; board_matrix[11][12+2] = 1;}

            if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 390 && event->pos().y() < 405))
                if(horizontal) {
                    if(board_matrix[11][14] == 1 || board_matrix[11][14+1] == 1 || board_matrix[11][14+2] == 1) return;
                    horizontal_walls.append(wall(470+2, 390+2)); update();
                    board_matrix[11][14] = 1; board_matrix[11][14+1] = 1; board_matrix[11][14+2] = 1;}

            if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 455 && event->pos().y() < 470))
                if(horizontal) {
                    if(board_matrix[13][0] == 1 || board_matrix[13][0+1] == 1 || board_matrix[13][0+2] == 1) return;
                    horizontal_walls.append(wall(15+2, 455+2)); update();
                    board_matrix[13][0] = 1; board_matrix[13][0+1] = 1; board_matrix[13][0+2] = 1;}

            if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 455 && event->pos().y() < 470))
                if(horizontal) {
                    if(board_matrix[13][2] == 1 || board_matrix[13][2+1] == 1 || board_matrix[13][2+2] == 1) return;
                    horizontal_walls.append(wall(80+2, 455+2)); update();
                    board_matrix[13][2] = 1; board_matrix[13][2+1] = 1; board_matrix[13][2+2] = 1;}

            if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 455 && event->pos().y() < 470))
                if(horizontal) {
                    if(board_matrix[13][4] == 1 || board_matrix[13][4+1] == 1 || board_matrix[13][4+2] == 1) return;
                    horizontal_walls.append(wall(145+2, 455+2)); update();
                    board_matrix[13][4] = 1; board_matrix[13][4+1] = 1; board_matrix[13][4+2] = 1;}

            if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 455 && event->pos().y() < 470))
                if(horizontal) {
                    if(board_matrix[13][6] == 1 || board_matrix[13][6+1] == 1 || board_matrix[13][6+2] == 1) return;
                    horizontal_walls.append(wall(210+2, 455+2)); update();
                    board_matrix[13][6] = 1; board_matrix[13][6+1] = 1; board_matrix[13][6+2] = 1;}

            if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 455 && event->pos().y() < 470))
                if(horizontal) {
                    if(board_matrix[13][8] == 1 || board_matrix[13][8+1] == 1 || board_matrix[13][8+2] == 1) return;
                    horizontal_walls.append(wall(275+2, 455+2)); update();
                    board_matrix[13][8] = 1; board_matrix[13][8+1] = 1; board_matrix[13][8+2] = 1;}

            if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 455 && event->pos().y() < 470))
                if(horizontal) {
                    if(board_matrix[13][10] == 1 || board_matrix[13][10+1] == 1 || board_matrix[13][10+2] == 1) return;
                    horizontal_walls.append(wall(340+2, 455+2)); update();
                    board_matrix[13][10] = 1; board_matrix[13][10+1] = 1; board_matrix[13][10+2] = 1;}

            if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 455 && event->pos().y() < 470))
                if(horizontal) {
                    if(board_matrix[13][12] == 1 || board_matrix[13][12+1] == 1 || board_matrix[13][12+2] == 1) return;
                    horizontal_walls.append(wall(405+2, 455+2)); update();
                    board_matrix[13][12] = 1; board_matrix[13][12+1] = 1; board_matrix[13][12+2] = 1;}

            if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 455 && event->pos().y() < 470))
                if(horizontal) {
                    if(board_matrix[13][14] == 1 || board_matrix[13][14+1] == 1 || board_matrix[13][14+2] == 1) return;
                    horizontal_walls.append(wall(470+2, 455+2)); update();
                    board_matrix[13][14] = 1; board_matrix[13][14+1] = 1; board_matrix[13][14+2] = 1;}

            if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 520 && event->pos().y() < 535))
                if(horizontal) {
                    if(board_matrix[15][0] == 1 || board_matrix[15][0+1] == 1 || board_matrix[15][0+2] == 1) return;
                    horizontal_walls.append(wall(15+2, 520+2)); update();
                    board_matrix[15][0] = 1; board_matrix[15][0+1] = 1; board_matrix[15][0+2] = 1;}

            if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 520 && event->pos().y() < 535))
                if(horizontal) {
                    if(board_matrix[15][2] == 1 || board_matrix[15][2+1] == 1 || board_matrix[15][2+2] == 1) return;
                    horizontal_walls.append(wall(80+2, 520+2)); update();
                    board_matrix[15][2] = 1; board_matrix[15][2+1] = 1; board_matrix[15][2+2] = 1;}

            if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 520 && event->pos().y() < 535))
                if(horizontal) {
                    if(board_matrix[15][4] == 1 || board_matrix[15][4+1] == 1 || board_matrix[15][4+2] == 1) return;
                    horizontal_walls.append(wall(145+2, 520+2)); update();
                    board_matrix[15][4] = 1; board_matrix[15][4+1] = 1; board_matrix[15][4+2] = 1;}

            if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 520 && event->pos().y() < 535))
                if(horizontal) {
                    if(board_matrix[15][6] == 1 || board_matrix[15][6+1] == 1 || board_matrix[15][6+2] == 1) return;
                    horizontal_walls.append(wall(210+2, 520+2)); update();
                    board_matrix[15][6] = 1; board_matrix[15][6+1] = 1; board_matrix[15][6+2] = 1;}

            if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 520 && event->pos().y() < 535))
                if(horizontal) {
                    if(board_matrix[15][8] == 1 || board_matrix[15][8+1] == 1 || board_matrix[15][8+2] == 1) return;
                    horizontal_walls.append(wall(275+2, 520+2)); update();
                    board_matrix[15][8] = 1; board_matrix[15][8+1] = 1; board_matrix[15][8+2] = 1;}

            if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 520 && event->pos().y() < 535))
                if(horizontal) {
                    if(board_matrix[15][10] == 1 || board_matrix[15][10+1] == 1 || board_matrix[15][10+2] == 1) return;
                    horizontal_walls.append(wall(340+2, 520+2)); update();
                    board_matrix[15][10] = 1; board_matrix[15][10+1] = 1; board_matrix[15][10+2] = 1;}

            if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 520 && event->pos().y() < 535))
                if(horizontal) {
                    if(board_matrix[15][12] == 1 || board_matrix[15][12+1] == 1 || board_matrix[15][12+2] == 1) return;
                    horizontal_walls.append(wall(405+2, 520+2)); update();
                    board_matrix[15][12] = 1; board_matrix[15][12+1] = 1; board_matrix[15][12+2] = 1;}

            if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 520 && event->pos().y() < 535))
                if(horizontal) {
                    if(board_matrix[15][14] == 1 || board_matrix[15][14+1] == 1 || board_matrix[15][14+2] == 1) return;
                    horizontal_walls.append(wall(470+2, 520+2)); update();
                    board_matrix[15][14] = 1; board_matrix[15][14+1] = 1; board_matrix[15][14+2] = 1;}


            if(p1){
                p1 = false;
                p2 = true;
                game_manager();
                return;
            }

            if(p2){
                p1 = true;
                p2 = false;
                game_manager();
                return;
            }
        }
    }
}
