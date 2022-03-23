#include "quoridor.h"
#include "ui_quoridor.h"
#include <QMouseEvent>

extern bool start;
extern int wall_position[];
extern bool vertical;
extern bool horizontal;


void Quoridor::mouseMoveEvent(QMouseEvent *event){

    if(start){
        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 15 && event->pos().y() < 65)){
            wall_position[0] = 67; wall_position[1] = 17;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 15 && event->pos().y() < 65)){
            wall_position[0] = 132; wall_position[1] = 17;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 15 && event->pos().y() < 65)){
            wall_position[0] = 197; wall_position[1] = 17;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 15 && event->pos().y() < 65)){
            wall_position[0] = 262; wall_position[1] = 17;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 15 && event->pos().y() < 65)){
            wall_position[0] = 327; wall_position[1] = 17;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 15 && event->pos().y() < 65)){
            wall_position[0] = 392; wall_position[1] = 17;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 15 && event->pos().y() < 65)){
            wall_position[0] = 457; wall_position[1] = 17;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 15 && event->pos().y() < 65)){
            wall_position[0] = 522; wall_position[1] = 17;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 17; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 82; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 147; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 212; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 277; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 342; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 407; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 472; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 17; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 82; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 147; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 212; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 277; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 342; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 407; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 472; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 17; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 82; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 147; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 212; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 277; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 342; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 407; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 472; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 17; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 82; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 147; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 212; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 277; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 342; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 407; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 472; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 17; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 82; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 147; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 212; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 277; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 342; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 407; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 472; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 17; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 82; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 147; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 212; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 277; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 342; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 407; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 472; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 17; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 82; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 147; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 212; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 277; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 342; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 407; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 472; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 17; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 82; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 147; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 212; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 277; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 342; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 407; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 472; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 80 && event->pos().y() < 130)){
            wall_position[0] = 67; wall_position[1] = 82;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 80 && event->pos().y() < 130)){
            wall_position[0] = 132; wall_position[1] = 82;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 80 && event->pos().y() < 130)){
            wall_position[0] = 197; wall_position[1] = 82;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 80 && event->pos().y() < 130)){
            wall_position[0] = 262; wall_position[1] = 82;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 80 && event->pos().y() < 130)){
            wall_position[0] = 327; wall_position[1] = 82;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 80 && event->pos().y() < 130)){
            wall_position[0] = 392; wall_position[1] = 82;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 80 && event->pos().y() < 130)){
            wall_position[0] = 457; wall_position[1] = 82;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 80 && event->pos().y() < 130)){
            wall_position[0] = 522; wall_position[1] = 82;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 17; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 82; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 147; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 212; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 277; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 342; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 407; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 472; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 17; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 82; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 147; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 212; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 277; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 342; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 407; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 472; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 17; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 82; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 147; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 212; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 277; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 342; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 407; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 472; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 17; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 82; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 147; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 212; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 277; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 342; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 407; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 472; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 17; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 82; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 147; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 212; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 277; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 342; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 407; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 472; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 17; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 82; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 147; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 212; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 277; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 342; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 407; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 472; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 17; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 82; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 147; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 212; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 277; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 342; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 407; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 472; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 17; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 82; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 147; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 212; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 277; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 342; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 407; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 472; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 145 && event->pos().y() < 195)){
            wall_position[0] = 67; wall_position[1] = 147;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 145 && event->pos().y() < 195)){
            wall_position[0] = 132; wall_position[1] = 147;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 145 && event->pos().y() < 195)){
            wall_position[0] = 197; wall_position[1] = 147;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 145 && event->pos().y() < 195)){
            wall_position[0] = 262; wall_position[1] = 147;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 145 && event->pos().y() < 195)){
            wall_position[0] = 327; wall_position[1] = 147;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 145 && event->pos().y() < 195)){
            wall_position[0] = 392; wall_position[1] = 147;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 145 && event->pos().y() < 195)){
            wall_position[0] = 457; wall_position[1] = 147;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 145 && event->pos().y() < 195)){
            wall_position[0] = 522; wall_position[1] = 147;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 17; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 82; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 147; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 212; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 277; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 342; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 407; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 472; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 17; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 82; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 147; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 212; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 277; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 342; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 407; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 472; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 17; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 82; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 147; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 212; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 277; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 342; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 407; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 472; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 17; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 82; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 147; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 212; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 277; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 342; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 407; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 472; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 17; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 82; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 147; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 212; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 277; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 342; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 407; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 472; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 17; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 82; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 147; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 212; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 277; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 342; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 407; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 472; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 17; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 82; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 147; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 212; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 277; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 342; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 407; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 472; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 17; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 82; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 147; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 212; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 277; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 342; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 407; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 472; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 210 && event->pos().y() < 260)){
            wall_position[0] = 67; wall_position[1] = 212;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 210 && event->pos().y() < 260)){
            wall_position[0] = 132; wall_position[1] = 212;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 210 && event->pos().y() < 260)){
            wall_position[0] = 197; wall_position[1] = 212;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 210 && event->pos().y() < 260)){
            wall_position[0] = 262; wall_position[1] = 212;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 210 && event->pos().y() < 260)){
            wall_position[0] = 327; wall_position[1] = 212;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 210 && event->pos().y() < 260)){
            wall_position[0] = 392; wall_position[1] = 212;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 210 && event->pos().y() < 260)){
            wall_position[0] = 457; wall_position[1] = 212;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 210 && event->pos().y() < 260)){
            wall_position[0] = 522; wall_position[1] = 212;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 17; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 82; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 147; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 212; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 277; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 342; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 407; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 472; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 17; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 82; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 147; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 212; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 277; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 342; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 407; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 472; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 17; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 82; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 147; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 212; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 277; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 342; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 407; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 472; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 17; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 82; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 147; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 212; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 277; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 342; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 407; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 472; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 17; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 82; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 147; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 212; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 277; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 342; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 407; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 472; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 17; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 82; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 147; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 212; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 277; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 342; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 407; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 472; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 17; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 82; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 147; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 212; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 277; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 342; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 407; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 472; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 17; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 82; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 147; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 212; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 277; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 342; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 407; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 472; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 275 && event->pos().y() < 325)){
            wall_position[0] = 67; wall_position[1] = 277;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 275 && event->pos().y() < 325)){
            wall_position[0] = 132; wall_position[1] = 277;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 275 && event->pos().y() < 325)){
            wall_position[0] = 197; wall_position[1] = 277;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 275 && event->pos().y() < 325)){
            wall_position[0] = 262; wall_position[1] = 277;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 275 && event->pos().y() < 325)){
            wall_position[0] = 327; wall_position[1] = 277;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 275 && event->pos().y() < 325)){
            wall_position[0] = 392; wall_position[1] = 277;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 275 && event->pos().y() < 325)){
            wall_position[0] = 457; wall_position[1] = 277;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 275 && event->pos().y() < 325)){
            wall_position[0] = 522; wall_position[1] = 277;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 17; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 82; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 147; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 212; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 277; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 342; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 407; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 472; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 17; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 82; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 147; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 212; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 277; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 342; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 407; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 472; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 17; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 82; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 147; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 212; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 277; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 342; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 407; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 472; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 17; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 82; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 147; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 212; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 277; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 342; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 407; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 472; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 17; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 82; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 147; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 212; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 277; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 342; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 407; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 472; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 17; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 82; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 147; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 212; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 277; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 342; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 407; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 472; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 17; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 82; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 147; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 212; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 277; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 342; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 407; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 472; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 17; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 82; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 147; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 212; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 277; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 342; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 407; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 472; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 340 && event->pos().y() < 390)){
            wall_position[0] = 67; wall_position[1] = 342;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 340 && event->pos().y() < 390)){
            wall_position[0] = 132; wall_position[1] = 342;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 340 && event->pos().y() < 390)){
            wall_position[0] = 197; wall_position[1] = 342;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 340 && event->pos().y() < 390)){
            wall_position[0] = 262; wall_position[1] = 342;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 340 && event->pos().y() < 390)){
            wall_position[0] = 327; wall_position[1] = 342;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 340 && event->pos().y() < 390)){
            wall_position[0] = 392; wall_position[1] = 342;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 340 && event->pos().y() < 390)){
            wall_position[0] = 457; wall_position[1] = 342;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 340 && event->pos().y() < 390)){
            wall_position[0] = 522; wall_position[1] = 342;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 17; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 82; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 147; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 212; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 277; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 342; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 407; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 472; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 17; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 82; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 147; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 212; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 277; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 342; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 407; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 472; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 17; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 82; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 147; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 212; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 277; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 342; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 407; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 472; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 17; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 82; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 147; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 212; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 277; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 342; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 407; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 472; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 17; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 82; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 147; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 212; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 277; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 342; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 407; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 472; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 17; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 82; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 147; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 212; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 277; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 342; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 407; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 472; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 17; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 82; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 147; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 212; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 277; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 342; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 407; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 472; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 17; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 82; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 147; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 212; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 277; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 342; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 407; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 472; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 405 && event->pos().y() < 455)){
            wall_position[0] = 67; wall_position[1] = 407;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 405 && event->pos().y() < 455)){
            wall_position[0] = 132; wall_position[1] = 407;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 405 && event->pos().y() < 455)){
            wall_position[0] = 197; wall_position[1] = 407;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 405 && event->pos().y() < 455)){
            wall_position[0] = 262; wall_position[1] = 407;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 405 && event->pos().y() < 455)){
            wall_position[0] = 327; wall_position[1] = 407;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 405 && event->pos().y() < 455)){
            wall_position[0] = 392; wall_position[1] = 407;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 405 && event->pos().y() < 455)){
            wall_position[0] = 457; wall_position[1] = 407;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 405 && event->pos().y() < 455)){
            wall_position[0] = 522; wall_position[1] = 407;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 17; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 82; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 147; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 212; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 277; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 342; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 407; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 472; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 17; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 82; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 147; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 212; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 277; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 342; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 407; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 472; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 17; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 82; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 147; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 212; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 277; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 342; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 407; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 472; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 17; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 82; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 147; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 212; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 277; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 342; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 407; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 472; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 17; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 82; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 147; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 212; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 277; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 342; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 407; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 472; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 17; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 82; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 147; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 212; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 277; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 342; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 407; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 472; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 17; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 82; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 147; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 212; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 277; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 342; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 407; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 472; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 17; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 82; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 147; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 212; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 277; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 342; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 407; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 472; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 470 && event->pos().y() < 520)){
            wall_position[0] = 67; wall_position[1] = 472;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 470 && event->pos().y() < 520)){
            wall_position[0] = 132; wall_position[1] = 472;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 470 && event->pos().y() < 520)){
            wall_position[0] = 197; wall_position[1] = 472;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 470 && event->pos().y() < 520)){
            wall_position[0] = 262; wall_position[1] = 472;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 470 && event->pos().y() < 520)){
            wall_position[0] = 327; wall_position[1] = 472;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 470 && event->pos().y() < 520)){
            wall_position[0] = 392; wall_position[1] = 472;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 470 && event->pos().y() < 520)){
            wall_position[0] = 457; wall_position[1] = 472;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 520 && event->pos().x() < 535) && (event->pos().y() > 470 && event->pos().y() < 520)){
            wall_position[0] = 522; wall_position[1] = 472;
            horizontal = false; vertical = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 17; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 82; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 147; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 212; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 277; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 342; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 407; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 65 && event->pos().y() < 115)){
            wall_position[0] = 472; wall_position[1] = 67;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 17; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 82; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 147; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 212; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 277; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 342; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 407; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 130 && event->pos().y() < 180)){
            wall_position[0] = 472; wall_position[1] = 132;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 17; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 82; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 147; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 212; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 277; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 342; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 407; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 195 && event->pos().y() < 245)){
            wall_position[0] = 472; wall_position[1] = 197;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 17; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 82; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 147; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 212; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 277; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 342; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 407; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 260 && event->pos().y() < 310)){
            wall_position[0] = 472; wall_position[1] = 262;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 17; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 82; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 147; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 212; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 277; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 342; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 407; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 325 && event->pos().y() < 375)){
            wall_position[0] = 472; wall_position[1] = 327;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 17; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 82; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 147; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 212; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 277; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 342; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 407; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 390 && event->pos().y() < 440)){
            wall_position[0] = 472; wall_position[1] = 392;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 17; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 82; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 147; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 212; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 277; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 342; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 407; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 455 && event->pos().y() < 505)){
            wall_position[0] = 472; wall_position[1] = 457;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 15 && event->pos().x() < 30) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 17; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 80 && event->pos().x() < 95) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 82; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 145 && event->pos().x() < 160) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 147; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 210 && event->pos().x() < 225) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 212; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 275 && event->pos().x() < 290) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 277; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 340 && event->pos().x() < 355) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 342; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 405 && event->pos().x() < 420) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 407; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}

        if((event->pos().x() > 470 && event->pos().x() < 485) && (event->pos().y() > 520 && event->pos().y() < 570)){
            wall_position[0] = 472; wall_position[1] = 522;
            vertical = false; horizontal = true; update();}
    }
}
