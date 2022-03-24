#include "quoridor.h"
#include "ui_quoridor.h"
#include <QMouseEvent>

struct wall {
    int x;
    int y;

    wall(int xx, int yy) : x(xx), y(yy) {}
};

extern bool vertical; extern bool horizontal;
extern QList<wall> vertical_walls; extern QList<wall> horizontal_walls;


void Quoridor::mousePressEvent(QMouseEvent *event){

    if(event->button() == Qt::LeftButton){
        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 15 && event->pos().y() < 65))
            if(vertical) {vertical_walls.append(wall(65+2, 15+2)); update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 15 && event->pos().y() < 65))
            if(vertical) {vertical_walls.append(wall(130+2, 15+2)); update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 15 && event->pos().y() < 65))
            if(vertical) {vertical_walls.append(wall(195+2, 15+2)); update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 15 && event->pos().y() < 65))
            if(vertical) {vertical_walls.append(wall(260+2, 15+2)); update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 15 && event->pos().y() < 65))
            if(vertical) {vertical_walls.append(wall(325+2, 15+2)); update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 15 && event->pos().y() < 65))
            if(vertical) {vertical_walls.append(wall(390+2, 15+2)); update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 15 && event->pos().y() < 65))
            if(vertical) {vertical_walls.append(wall(455+2, 15+2)); update();}

        if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 15 && event->pos().y() < 65))
            if(vertical) {vertical_walls.append(wall(520+2, 15+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(15+2, 65+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(80+2, 65+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(145+2, 65+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(210+2, 65+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(275+2, 65+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(340+2, 65+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(405+2, 65+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(470+2, 65+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(15+2, 130+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(80+2, 130+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(145+2, 130+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(210+2, 130+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(275+2, 130+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(340+2, 130+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(405+2, 130+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(470+2, 130+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(15+2, 195+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(80+2, 195+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(145+2, 195+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(210+2, 195+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(275+2, 195+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(340+2, 195+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(405+2, 195+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(470+2, 195+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(15+2, 260+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(80+2, 260+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(145+2, 260+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(210+2, 260+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(275+2, 260+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(340+2, 260+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(405+2, 260+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(470+2, 260+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(15+2, 325+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(80+2, 325+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(145+2, 325+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(210+2, 325+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(275+2, 325+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(340+2, 325+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(405+2, 325+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(470+2, 325+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(15+2, 390+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(80+2, 390+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(145+2, 390+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(210+2, 390+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(275+2, 390+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(340+2, 390+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(405+2, 390+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(470+2, 390+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(15+2, 455+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(80+2, 455+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(145+2, 455+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(210+2, 455+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(275+2, 455+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(340+2, 455+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(405+2, 455+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(470+2, 455+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(15+2, 520+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(80+2, 520+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(145+2, 520+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(210+2, 520+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(275+2, 520+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(340+2, 520+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(405+2, 520+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(470+2, 520+2)); update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 80 && event->pos().y() < 130))
            if(vertical) {vertical_walls.append(wall(65+2, 80+2)); update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 80 && event->pos().y() < 130))
            if(vertical) {vertical_walls.append(wall(130+2, 80+2)); update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 80 && event->pos().y() < 130))
            if(vertical) {vertical_walls.append(wall(195+2, 80+2)); update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 80 && event->pos().y() < 130))
            if(vertical) {vertical_walls.append(wall(260+2, 80+2)); update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 80 && event->pos().y() < 130))
            if(vertical) {vertical_walls.append(wall(325+2, 80+2)); update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 80 && event->pos().y() < 130))
            if(vertical) {vertical_walls.append(wall(390+2, 80+2)); update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 80 && event->pos().y() < 130))
            if(vertical) {vertical_walls.append(wall(455+2, 80+2)); update();}

        if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 80 && event->pos().y() < 130))
            if(vertical) {vertical_walls.append(wall(520+2, 80+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(15+2, 65+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(80+2, 65+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(145+2, 65+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(210+2, 65+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(275+2, 65+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(340+2, 65+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(405+2, 65+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(470+2, 65+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(15+2, 130+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(80+2, 130+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(145+2, 130+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(210+2, 130+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(275+2, 130+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(340+2, 130+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(405+2, 130+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(470+2, 130+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(15+2, 195+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(80+2, 195+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(145+2, 195+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(210+2, 195+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(275+2, 195+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(340+2, 195+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(405+2, 195+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(470+2, 195+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(15+2, 260+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(80+2, 260+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(145+2, 260+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(210+2, 260+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(275+2, 260+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(340+2, 260+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(405+2, 260+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(470+2, 260+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(15+2, 325+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(80+2, 325+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(145+2, 325+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(210+2, 325+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(275+2, 325+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(340+2, 325+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(405+2, 325+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(470+2, 325+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(15+2, 390+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(80+2, 390+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(145+2, 390+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(210+2, 390+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(275+2, 390+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(340+2, 390+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(405+2, 390+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(470+2, 390+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(15+2, 455+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(80+2, 455+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(145+2, 455+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(210+2, 455+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(275+2, 455+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(340+2, 455+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(405+2, 455+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(470+2, 455+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(15+2, 520+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(80+2, 520+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(145+2, 520+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(210+2, 520+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(275+2, 520+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(340+2, 520+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(405+2, 520+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(470+2, 520+2)); update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 145 && event->pos().y() < 195))
            if(vertical) {vertical_walls.append(wall(65+2, 145+2)); update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 145 && event->pos().y() < 195))
            if(vertical) {vertical_walls.append(wall(130+2, 145+2)); update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 145 && event->pos().y() < 195))
            if(vertical) {vertical_walls.append(wall(195+2, 145+2)); update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 145 && event->pos().y() < 195))
            if(vertical) {vertical_walls.append(wall(260+2, 145+2)); update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 145 && event->pos().y() < 195))
            if(vertical) {vertical_walls.append(wall(325+2, 145+2)); update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 145 && event->pos().y() < 195))
            if(vertical) {vertical_walls.append(wall(390+2, 145+2)); update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 145 && event->pos().y() < 195))
            if(vertical) {vertical_walls.append(wall(455+2, 145+2)); update();}

        if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 145 && event->pos().y() < 195))
            if(vertical) {vertical_walls.append(wall(520+2, 145+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(15+2, 65+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(80+2, 65+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(145+2, 65+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(210+2, 65+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(275+2, 65+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(340+2, 65+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(405+2, 65+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(470+2, 65+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(15+2, 130+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(80+2, 130+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(145+2, 130+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(210+2, 130+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(275+2, 130+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(340+2, 130+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(405+2, 130+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(470+2, 130+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(15+2, 195+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(80+2, 195+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(145+2, 195+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(210+2, 195+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(275+2, 195+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(340+2, 195+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(405+2, 195+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(470+2, 195+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(15+2, 260+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(80+2, 260+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(145+2, 260+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(210+2, 260+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(275+2, 260+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(340+2, 260+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(405+2, 260+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(470+2, 260+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(15+2, 325+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(80+2, 325+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(145+2, 325+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(210+2, 325+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(275+2, 325+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(340+2, 325+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(405+2, 325+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(470+2, 325+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(15+2, 390+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(80+2, 390+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(145+2, 390+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(210+2, 390+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(275+2, 390+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(340+2, 390+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(405+2, 390+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(470+2, 390+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(15+2, 455+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(80+2, 455+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(145+2, 455+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(210+2, 455+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(275+2, 455+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(340+2, 455+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(405+2, 455+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(470+2, 455+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(15+2, 520+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(80+2, 520+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(145+2, 520+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(210+2, 520+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(275+2, 520+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(340+2, 520+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(405+2, 520+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(470+2, 520+2)); update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 210 && event->pos().y() < 260))
            if(vertical) {vertical_walls.append(wall(65+2, 210+2)); update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 210 && event->pos().y() < 260))
            if(vertical) {vertical_walls.append(wall(130+2, 210+2)); update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 210 && event->pos().y() < 260))
            if(vertical) {vertical_walls.append(wall(195+2, 210+2)); update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 210 && event->pos().y() < 260))
            if(vertical) {vertical_walls.append(wall(260+2, 210+2)); update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 210 && event->pos().y() < 260))
            if(vertical) {vertical_walls.append(wall(325+2, 210+2)); update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 210 && event->pos().y() < 260))
            if(vertical) {vertical_walls.append(wall(390+2, 210+2)); update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 210 && event->pos().y() < 260))
            if(vertical) {vertical_walls.append(wall(455+2, 210+2)); update();}

        if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 210 && event->pos().y() < 260))
            if(vertical) {vertical_walls.append(wall(520+2, 210+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(15+2, 65+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(80+2, 65+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(145+2, 65+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(210+2, 65+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(275+2, 65+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(340+2, 65+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(405+2, 65+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(470+2, 65+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(15+2, 130+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(80+2, 130+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(145+2, 130+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(210+2, 130+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(275+2, 130+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(340+2, 130+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(405+2, 130+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(470+2, 130+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(15+2, 195+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(80+2, 195+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(145+2, 195+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(210+2, 195+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(275+2, 195+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(340+2, 195+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(405+2, 195+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(470+2, 195+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(15+2, 260+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(80+2, 260+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(145+2, 260+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(210+2, 260+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(275+2, 260+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(340+2, 260+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(405+2, 260+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(470+2, 260+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(15+2, 325+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(80+2, 325+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(145+2, 325+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(210+2, 325+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(275+2, 325+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(340+2, 325+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(405+2, 325+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(470+2, 325+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(15+2, 390+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(80+2, 390+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(145+2, 390+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(210+2, 390+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(275+2, 390+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(340+2, 390+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(405+2, 390+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(470+2, 390+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(15+2, 455+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(80+2, 455+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(145+2, 455+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(210+2, 455+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(275+2, 455+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(340+2, 455+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(405+2, 455+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(470+2, 455+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(15+2, 520+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(80+2, 520+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(145+2, 520+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(210+2, 520+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(275+2, 520+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(340+2, 520+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(405+2, 520+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(470+2, 520+2)); update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 275 && event->pos().y() < 325))
            if(vertical) {vertical_walls.append(wall(65+2, 275+2)); update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 275 && event->pos().y() < 325))
            if(vertical) {vertical_walls.append(wall(130+2, 275+2)); update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 275 && event->pos().y() < 325))
            if(vertical) {vertical_walls.append(wall(195+2, 275+2)); update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 275 && event->pos().y() < 325))
            if(vertical) {vertical_walls.append(wall(260+2, 275+2)); update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 275 && event->pos().y() < 325))
            if(vertical) {vertical_walls.append(wall(325+2, 275+2)); update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 275 && event->pos().y() < 325))
            if(vertical) {vertical_walls.append(wall(390+2, 275+2)); update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 275 && event->pos().y() < 325))
            if(vertical) {vertical_walls.append(wall(455+2, 275+2)); update();}

        if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 275 && event->pos().y() < 325))
            if(vertical) {vertical_walls.append(wall(520+2, 275+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(15+2, 65+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(80+2, 65+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(145+2, 65+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(210+2, 65+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(275+2, 65+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(340+2, 65+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(405+2, 65+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(470+2, 65+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(15+2, 130+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(80+2, 130+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(145+2, 130+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(210+2, 130+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(275+2, 130+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(340+2, 130+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(405+2, 130+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(470+2, 130+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(15+2, 195+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(80+2, 195+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(145+2, 195+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(210+2, 195+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(275+2, 195+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(340+2, 195+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(405+2, 195+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(470+2, 195+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(15+2, 260+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(80+2, 260+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(145+2, 260+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(210+2, 260+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(275+2, 260+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(340+2, 260+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(405+2, 260+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(470+2, 260+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(15+2, 325+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(80+2, 325+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(145+2, 325+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(210+2, 325+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(275+2, 325+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(340+2, 325+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(405+2, 325+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(470+2, 325+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(15+2, 390+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(80+2, 390+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(145+2, 390+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(210+2, 390+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(275+2, 390+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(340+2, 390+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(405+2, 390+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(470+2, 390+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(15+2, 455+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(80+2, 455+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(145+2, 455+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(210+2, 455+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(275+2, 455+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(340+2, 455+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(405+2, 455+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(470+2, 455+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(15+2, 520+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(80+2, 520+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(145+2, 520+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(210+2, 520+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(275+2, 520+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(340+2, 520+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(405+2, 520+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(470+2, 520+2)); update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 340 && event->pos().y() < 390))
            if(vertical) {vertical_walls.append(wall(65+2, 340+2)); update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 340 && event->pos().y() < 390))
            if(vertical) {vertical_walls.append(wall(130+2, 340+2)); update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 340 && event->pos().y() < 390))
            if(vertical) {vertical_walls.append(wall(195+2, 340+2)); update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 340 && event->pos().y() < 390))
            if(vertical) {vertical_walls.append(wall(260+2, 340+2)); update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 340 && event->pos().y() < 390))
            if(vertical) {vertical_walls.append(wall(325+2, 340+2)); update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 340 && event->pos().y() < 390))
            if(vertical) {vertical_walls.append(wall(390+2, 340+2)); update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 340 && event->pos().y() < 390))
            if(vertical) {vertical_walls.append(wall(455+2, 340+2)); update();}

        if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 340 && event->pos().y() < 390))
            if(vertical) {vertical_walls.append(wall(520+2, 340+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(15+2, 65+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(80+2, 65+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(145+2, 65+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(210+2, 65+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(275+2, 65+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(340+2, 65+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(405+2, 65+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(470+2, 65+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(15+2, 130+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(80+2, 130+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(145+2, 130+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(210+2, 130+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(275+2, 130+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(340+2, 130+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(405+2, 130+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(470+2, 130+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(15+2, 195+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(80+2, 195+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(145+2, 195+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(210+2, 195+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(275+2, 195+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(340+2, 195+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(405+2, 195+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(470+2, 195+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(15+2, 260+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(80+2, 260+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(145+2, 260+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(210+2, 260+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(275+2, 260+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(340+2, 260+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(405+2, 260+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(470+2, 260+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(15+2, 325+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(80+2, 325+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(145+2, 325+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(210+2, 325+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(275+2, 325+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(340+2, 325+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(405+2, 325+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(470+2, 325+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(15+2, 390+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(80+2, 390+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(145+2, 390+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(210+2, 390+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(275+2, 390+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(340+2, 390+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(405+2, 390+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(470+2, 390+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(15+2, 455+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(80+2, 455+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(145+2, 455+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(210+2, 455+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(275+2, 455+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(340+2, 455+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(405+2, 455+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(470+2, 455+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(15+2, 520+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(80+2, 520+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(145+2, 520+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(210+2, 520+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(275+2, 520+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(340+2, 520+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(405+2, 520+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(470+2, 520+2)); update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 405 && event->pos().y() < 455))
            if(vertical) {vertical_walls.append(wall(65+2, 405+2)); update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 405 && event->pos().y() < 455))
            if(vertical) {vertical_walls.append(wall(130+2, 405+2)); update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 405 && event->pos().y() < 455))
            if(vertical) {vertical_walls.append(wall(195+2, 405+2)); update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 405 && event->pos().y() < 455))
            if(vertical) {vertical_walls.append(wall(260+2, 405+2)); update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 405 && event->pos().y() < 455))
            if(vertical) {vertical_walls.append(wall(325+2, 405+2)); update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 405 && event->pos().y() < 455))
            if(vertical) {vertical_walls.append(wall(390+2, 405+2)); update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 405 && event->pos().y() < 455))
            if(vertical) {vertical_walls.append(wall(455+2, 405+2)); update();}

        if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 405 && event->pos().y() < 455))
            if(vertical) {vertical_walls.append(wall(520+2, 405+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(15+2, 65+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(80+2, 65+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(145+2, 65+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(210+2, 65+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(275+2, 65+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(340+2, 65+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(405+2, 65+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(470+2, 65+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(15+2, 130+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(80+2, 130+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(145+2, 130+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(210+2, 130+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(275+2, 130+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(340+2, 130+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(405+2, 130+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(470+2, 130+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(15+2, 195+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(80+2, 195+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(145+2, 195+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(210+2, 195+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(275+2, 195+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(340+2, 195+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(405+2, 195+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(470+2, 195+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(15+2, 260+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(80+2, 260+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(145+2, 260+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(210+2, 260+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(275+2, 260+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(340+2, 260+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(405+2, 260+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(470+2, 260+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(15+2, 325+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(80+2, 325+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(145+2, 325+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(210+2, 325+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(275+2, 325+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(340+2, 325+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(405+2, 325+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(470+2, 325+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(15+2, 390+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(80+2, 390+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(145+2, 390+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(210+2, 390+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(275+2, 390+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(340+2, 390+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(405+2, 390+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(470+2, 390+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(15+2, 455+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(80+2, 455+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(145+2, 455+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(210+2, 455+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(275+2, 455+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(340+2, 455+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(405+2, 455+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(470+2, 455+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(15+2, 520+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(80+2, 520+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(145+2, 520+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(210+2, 520+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(275+2, 520+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(340+2, 520+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(405+2, 520+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(470+2, 520+2)); update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 470 && event->pos().y() < 520))
            if(vertical) {vertical_walls.append(wall(65+2, 470+2)); update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 470 && event->pos().y() < 520))
            if(vertical) {vertical_walls.append(wall(130+2, 470+2)); update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 470 && event->pos().y() < 520))
            if(vertical) {vertical_walls.append(wall(195+2, 470+2)); update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 470 && event->pos().y() < 520))
            if(vertical) {vertical_walls.append(wall(260+2, 470+2)); update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 470 && event->pos().y() < 520))
            if(vertical) {vertical_walls.append(wall(325+2, 470+2)); update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 470 && event->pos().y() < 520))
            if(vertical) {vertical_walls.append(wall(390+2, 470+2)); update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 470 && event->pos().y() < 520))
            if(vertical) {vertical_walls.append(wall(455+2, 470+2)); update();}

        if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 470 && event->pos().y() < 520))
            if(vertical) {vertical_walls.append(wall(520+2, 470+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(15+2, 65+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(80+2, 65+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(145+2, 65+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(210+2, 65+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(275+2, 65+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(340+2, 65+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(405+2, 65+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 65 && event->pos().y() < 80))
            if(horizontal) {horizontal_walls.append(wall(470+2, 65+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(15+2, 130+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(80+2, 130+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(145+2, 130+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(210+2, 130+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(275+2, 130+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(340+2, 130+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(405+2, 130+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 130 && event->pos().y() < 145))
            if(horizontal) {horizontal_walls.append(wall(470+2, 130+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(15+2, 195+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(80+2, 195+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(145+2, 195+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(210+2, 195+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(275+2, 195+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(340+2, 195+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(405+2, 195+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 195 && event->pos().y() < 210))
            if(horizontal) {horizontal_walls.append(wall(470+2, 195+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(15+2, 260+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(80+2, 260+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(145+2, 260+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(210+2, 260+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(275+2, 260+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(340+2, 260+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(405+2, 260+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 260 && event->pos().y() < 275))
            if(horizontal) {horizontal_walls.append(wall(470+2, 260+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(15+2, 325+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(80+2, 325+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(145+2, 325+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(210+2, 325+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(275+2, 325+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(340+2, 325+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(405+2, 325+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 325 && event->pos().y() < 340))
            if(horizontal) {horizontal_walls.append(wall(470+2, 325+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(15+2, 390+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(80+2, 390+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(145+2, 390+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(210+2, 390+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(275+2, 390+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(340+2, 390+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(405+2, 390+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 390 && event->pos().y() < 405))
            if(horizontal) {horizontal_walls.append(wall(470+2, 390+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(15+2, 455+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(80+2, 455+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(145+2, 455+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(210+2, 455+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(275+2, 455+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(340+2, 455+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(405+2, 455+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 455 && event->pos().y() < 470))
            if(horizontal) {horizontal_walls.append(wall(470+2, 455+2)); update();}

        if((event->pos().x() > 15 && event->pos().x() < 65) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(15+2, 520+2)); update();}

        if((event->pos().x() > 80 && event->pos().x() < 130) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(80+2, 520+2)); update();}

        if((event->pos().x() > 145 && event->pos().x() < 195) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(145+2, 520+2)); update();}

        if((event->pos().x() > 210 && event->pos().x() < 260) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(210+2, 520+2)); update();}

        if((event->pos().x() > 275 && event->pos().x() < 325) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(275+2, 520+2)); update();}

        if((event->pos().x() > 340 && event->pos().x() < 390) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(340+2, 520+2)); update();}

        if((event->pos().x() > 405 && event->pos().x() < 455) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(405+2, 520+2)); update();}

        if((event->pos().x() > 470 && event->pos().x() < 520) && (event->pos().y() > 520 && event->pos().y() < 535))
            if(horizontal) {horizontal_walls.append(wall(470+2, 520+2)); update();}
    }
}
