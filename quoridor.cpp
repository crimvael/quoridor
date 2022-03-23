#include "quoridor.h"
#include "ui_quoridor.h"
#include <QMouseEvent>
#include <QPainter>

extern bool start;
extern int curr_position[];
extern int wall_position[];
extern int player_1[];
extern int player_2[];
extern bool p1;
extern bool p2;
extern bool move_select;
extern bool draw_flag;
bool start = false;
int curr_position[] = {-1, -1};
bool move_select = false;
int player_1[] = {16, 8};
int player_2[] = {0, 8};
bool p1 = false;
bool p2 = false;
bool draw_flag = false;
int wall_position[] = {-1, -1};


Quoridor::Quoridor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Quoridor)
{
    ui->setupUi(this);
    ui->frame_2->setVisible(false);
}

void Quoridor::mouseMoveEvent(QMouseEvent *event){

    if(start){
        update();
        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 15 && event->pos().y() < 65)){
            wall_position[0] = 67; wall_position[1] = 17;
            draw_flag = true; update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 15 && event->pos().y() < 65)){
            wall_position[0] = 132; wall_position[1] = 17;
            draw_flag = true; update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 15 && event->pos().y() < 65)){
            wall_position[0] = 197; wall_position[1] = 17;
            draw_flag = true; update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 15 && event->pos().y() < 65)){
            wall_position[0] = 262; wall_position[1] = 17;
            draw_flag = true; update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 15 && event->pos().y() < 65)){
            wall_position[0] = 327; wall_position[1] = 17;
            draw_flag = true; update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 15 && event->pos().y() < 65)){
            wall_position[0] = 392; wall_position[1] = 17;
            draw_flag = true; update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 15 && event->pos().y() < 65)){
            wall_position[0] = 457; wall_position[1] = 17;
            draw_flag = true; update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 80 && event->pos().y() < 130)){
            wall_position[0] = 67; wall_position[1] = 82;
            draw_flag = true; update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 80 && event->pos().y() < 130)){
            wall_position[0] = 132; wall_position[1] = 82;
            draw_flag = true; update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 80 && event->pos().y() < 130)){
            wall_position[0] = 197; wall_position[1] = 82;
            draw_flag = true; update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 80 && event->pos().y() < 130)){
            wall_position[0] = 262; wall_position[1] = 82;
            draw_flag = true; update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 80 && event->pos().y() < 130)){
            wall_position[0] = 327; wall_position[1] = 82;
            draw_flag = true; update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 80 && event->pos().y() < 130)){
            wall_position[0] = 392; wall_position[1] = 82;
            draw_flag = true; update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 80 && event->pos().y() < 130)){
            wall_position[0] = 457; wall_position[1] = 82;
            draw_flag = true; update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 145 && event->pos().y() < 195)){
            wall_position[0] = 67; wall_position[1] = 147;
            draw_flag = true; update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 145 && event->pos().y() < 195)){
            wall_position[0] = 132; wall_position[1] = 147;
            draw_flag = true; update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 145 && event->pos().y() < 195)){
            wall_position[0] = 197; wall_position[1] = 147;
            draw_flag = true; update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 145 && event->pos().y() < 195)){
            wall_position[0] = 262; wall_position[1] = 147;
            draw_flag = true; update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 145 && event->pos().y() < 195)){
            wall_position[0] = 327; wall_position[1] = 147;
            draw_flag = true; update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 145 && event->pos().y() < 195)){
            wall_position[0] = 392; wall_position[1] = 147;
            draw_flag = true; update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 145 && event->pos().y() < 195)){
            wall_position[0] = 457; wall_position[1] = 147;
            draw_flag = true; update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 210 && event->pos().y() < 260)){
            wall_position[0] = 67; wall_position[1] = 212;
            draw_flag = true; update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 210 && event->pos().y() < 260)){
            wall_position[0] = 132; wall_position[1] = 212;
            draw_flag = true; update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 210 && event->pos().y() < 260)){
            wall_position[0] = 197; wall_position[1] = 212;
            draw_flag = true; update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 210 && event->pos().y() < 260)){
            wall_position[0] = 262; wall_position[1] = 212;
            draw_flag = true; update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 210 && event->pos().y() < 260)){
            wall_position[0] = 327; wall_position[1] = 212;
            draw_flag = true; update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 210 && event->pos().y() < 260)){
            wall_position[0] = 392; wall_position[1] = 212;
            draw_flag = true; update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 210 && event->pos().y() < 260)){
            wall_position[0] = 457; wall_position[1] = 212;
            draw_flag = true; update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 275 && event->pos().y() < 325)){
            wall_position[0] = 67; wall_position[1] = 277;
            draw_flag = true; update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 275 && event->pos().y() < 325)){
            wall_position[0] = 132; wall_position[1] = 277;
            draw_flag = true; update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 275 && event->pos().y() < 325)){
            wall_position[0] = 197; wall_position[1] = 277;
            draw_flag = true; update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 275 && event->pos().y() < 325)){
            wall_position[0] = 262; wall_position[1] = 277;
            draw_flag = true; update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 275 && event->pos().y() < 325)){
            wall_position[0] = 327; wall_position[1] = 277;
            draw_flag = true; update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 275 && event->pos().y() < 325)){
            wall_position[0] = 392; wall_position[1] = 277;
            draw_flag = true; update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 275 && event->pos().y() < 325)){
            wall_position[0] = 457; wall_position[1] = 277;
            draw_flag = true; update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 340 && event->pos().y() < 390)){
            wall_position[0] = 67; wall_position[1] = 342;
            draw_flag = true; update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 340 && event->pos().y() < 390)){
            wall_position[0] = 132; wall_position[1] = 342;
            draw_flag = true; update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 340 && event->pos().y() < 390)){
            wall_position[0] = 197; wall_position[1] = 342;
            draw_flag = true; update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 340 && event->pos().y() < 390)){
            wall_position[0] = 262; wall_position[1] = 342;
            draw_flag = true; update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 340 && event->pos().y() < 390)){
            wall_position[0] = 327; wall_position[1] = 342;
            draw_flag = true; update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 340 && event->pos().y() < 390)){
            wall_position[0] = 392; wall_position[1] = 342;
            draw_flag = true; update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 340 && event->pos().y() < 390)){
            wall_position[0] = 457; wall_position[1] = 342;
            draw_flag = true; update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 405 && event->pos().y() < 455)){
            wall_position[0] = 67; wall_position[1] = 407;
            draw_flag = true; update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 405 && event->pos().y() < 455)){
            wall_position[0] = 132; wall_position[1] = 407;
            draw_flag = true; update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 405 && event->pos().y() < 455)){
            wall_position[0] = 197; wall_position[1] = 407;
            draw_flag = true; update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 405 && event->pos().y() < 455)){
            wall_position[0] = 262; wall_position[1] = 407;
            draw_flag = true; update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 405 && event->pos().y() < 455)){
            wall_position[0] = 327; wall_position[1] = 407;
            draw_flag = true; update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 405 && event->pos().y() < 455)){
            wall_position[0] = 392; wall_position[1] = 407;
            draw_flag = true; update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 405 && event->pos().y() < 455)){
            wall_position[0] = 457; wall_position[1] = 407;
            draw_flag = true; update();}

        if((event->pos().x() > 65 && event->pos().x() < 80) && (event->pos().y() > 470 && event->pos().y() < 520)){
            wall_position[0] = 67; wall_position[1] = 472;
            draw_flag = true; update();}

        if((event->pos().x() > 130 && event->pos().x() < 145) && (event->pos().y() > 470 && event->pos().y() < 520)){
            wall_position[0] = 132; wall_position[1] = 472;
            draw_flag = true; update();}

        if((event->pos().x() > 195 && event->pos().x() < 210) && (event->pos().y() > 470 && event->pos().y() < 520)){
            wall_position[0] = 197; wall_position[1] = 472;
            draw_flag = true; update();}

        if((event->pos().x() > 260 && event->pos().x() < 275) && (event->pos().y() > 470 && event->pos().y() < 520)){
            wall_position[0] = 262; wall_position[1] = 472;
            draw_flag = true; update();}

        if((event->pos().x() > 325 && event->pos().x() < 340) && (event->pos().y() > 470 && event->pos().y() < 520)){
            wall_position[0] = 327; wall_position[1] = 472;
            draw_flag = true; update();}

        if((event->pos().x() > 390 && event->pos().x() < 405) && (event->pos().y() > 470 && event->pos().y() < 520)){
            wall_position[0] = 392; wall_position[1] = 472;
            draw_flag = true; update();}

        if((event->pos().x() > 455 && event->pos().x() < 470) && (event->pos().y() > 470 && event->pos().y() < 520)){
            wall_position[0] = 457; wall_position[1] = 472;
            draw_flag = true; update();}


    }
}

void Quoridor::paintEvent(QPaintEvent *){

    QPainter paint(this);
    paint.eraseRect(0,0,1920,1080);
    if(draw_flag==true){
        paint.drawRect(wall_position[0],wall_position[1],11,111);
    }
}


Quoridor::~Quoridor()
{
    delete ui;
}


void Quoridor::on_pushButton_clicked()
{
    ui->frame->setVisible(false);
    ui->frame_2->setVisible(true);
}


void Quoridor::on_pushButton_5_clicked()
{
    ui->frame->setVisible(true);
    ui->frame_2->setVisible(false);
    start = false;
}


void Quoridor::on_pushButton_3_clicked()
{
    start = true;
    ui->centralwidget->setMouseTracking(true);
}

void Quoridor::on_pushButton_4_clicked()
{
    start = true;
    p1 = true;
    set_pawns(player_1[0], player_1[1], 1);
    set_pawns(player_2[0], player_2[1], 2);
    game_manager();
}

void Quoridor::game_manager()
{

    if(player_1[0] == 0){
        ui->label->setText("Player 1 wins");
        return;
    }

    if(player_2[0] == 16){
        ui->label->setText("Player 2 wins");
        return;
    }

    if(p1){
        curr_position[0] = player_1[0];
        curr_position[1] = player_1[1];
        return;
    }

    if(p2){
        curr_position[0] = player_2[0];
        curr_position[1] = player_2[1];
        return;
    }
}

void Quoridor::set_pawns(int x, int y, int p){

    QPixmap pixmap1(":/images/P1.png");
    QPixmap pixmap2(":/images/P2.png");
    QIcon ButtonIcon1(pixmap1);
    QIcon ButtonIcon2(pixmap2);

    if(x == 0 && y == 0){
        if(p == 1){
            ui->pushButton_0000->setIcon(ButtonIcon1);
            ui->pushButton_0000->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0000->setIcon(ButtonIcon2);
            ui->pushButton_0000->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 0 && y == 2){
        if(p == 1){
            ui->pushButton_0002->setIcon(ButtonIcon1);
            ui->pushButton_0002->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0002->setIcon(ButtonIcon2);
            ui->pushButton_0002->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 0 && y == 4){
        if(p == 1){
            ui->pushButton_0004->setIcon(ButtonIcon1);
            ui->pushButton_0004->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0004->setIcon(ButtonIcon2);
            ui->pushButton_0004->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 0 && y == 6){
        if(p == 1){
            ui->pushButton_0006->setIcon(ButtonIcon1);
            ui->pushButton_0006->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0006->setIcon(ButtonIcon2);
            ui->pushButton_0006->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 0 && y == 8){
        if(p == 1){
            ui->pushButton_0008->setIcon(ButtonIcon1);
            ui->pushButton_0008->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0008->setIcon(ButtonIcon2);
            ui->pushButton_0008->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 0 && y == 10){
        if(p == 1){
            ui->pushButton_0010->setIcon(ButtonIcon1);
            ui->pushButton_0010->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0010->setIcon(ButtonIcon2);
            ui->pushButton_0010->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 0 && y == 12){
        if(p == 1){
            ui->pushButton_0012->setIcon(ButtonIcon1);
            ui->pushButton_0012->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0012->setIcon(ButtonIcon2);
            ui->pushButton_0012->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 0 && y == 14){
        if(p == 1){
            ui->pushButton_0014->setIcon(ButtonIcon1);
            ui->pushButton_0014->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0014->setIcon(ButtonIcon2);
            ui->pushButton_0014->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 0 && y == 16){
        if(p == 1){
            ui->pushButton_0016->setIcon(ButtonIcon1);
            ui->pushButton_0016->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0016->setIcon(ButtonIcon2);
            ui->pushButton_0016->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 0){
        if(p == 1){
            ui->pushButton_0200->setIcon(ButtonIcon1);
            ui->pushButton_0200->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0200->setIcon(ButtonIcon2);
            ui->pushButton_0200->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 2){
        if(p == 1){
            ui->pushButton_0202->setIcon(ButtonIcon1);
            ui->pushButton_0202->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0202->setIcon(ButtonIcon2);
            ui->pushButton_0202->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 4){
        if(p == 1){
            ui->pushButton_0204->setIcon(ButtonIcon1);
            ui->pushButton_0204->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0204->setIcon(ButtonIcon2);
            ui->pushButton_0204->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 6){
        if(p == 1){
            ui->pushButton_0206->setIcon(ButtonIcon1);
            ui->pushButton_0206->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0206->setIcon(ButtonIcon2);
            ui->pushButton_0206->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 8){
        if(p == 1){
            ui->pushButton_0208->setIcon(ButtonIcon1);
            ui->pushButton_0208->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0208->setIcon(ButtonIcon2);
            ui->pushButton_0208->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 10){
        if(p == 1){
            ui->pushButton_0210->setIcon(ButtonIcon1);
            ui->pushButton_0210->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0210->setIcon(ButtonIcon2);
            ui->pushButton_0210->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 12){
        if(p == 1){
            ui->pushButton_0212->setIcon(ButtonIcon1);
            ui->pushButton_0212->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0212->setIcon(ButtonIcon2);
            ui->pushButton_0212->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 14){
        if(p == 1){
            ui->pushButton_0214->setIcon(ButtonIcon1);
            ui->pushButton_0214->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0214->setIcon(ButtonIcon2);
            ui->pushButton_0214->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 16){
        if(p == 1){
            ui->pushButton_0216->setIcon(ButtonIcon1);
            ui->pushButton_0216->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0216->setIcon(ButtonIcon2);
            ui->pushButton_0216->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 0){
        if(p == 1){
            ui->pushButton_0400->setIcon(ButtonIcon1);
            ui->pushButton_0400->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0400->setIcon(ButtonIcon2);
            ui->pushButton_0400->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 2){
        if(p == 1){
            ui->pushButton_0402->setIcon(ButtonIcon1);
            ui->pushButton_0402->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0402->setIcon(ButtonIcon2);
            ui->pushButton_0402->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 4){
        if(p == 1){
            ui->pushButton_0404->setIcon(ButtonIcon1);
            ui->pushButton_0404->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0404->setIcon(ButtonIcon2);
            ui->pushButton_0404->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 6){
        if(p == 1){
            ui->pushButton_0406->setIcon(ButtonIcon1);
            ui->pushButton_0406->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0406->setIcon(ButtonIcon2);
            ui->pushButton_0406->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 8){
        if(p == 1){
            ui->pushButton_0408->setIcon(ButtonIcon1);
            ui->pushButton_0408->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0408->setIcon(ButtonIcon2);
            ui->pushButton_0408->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 10){
        if(p == 1){
            ui->pushButton_0410->setIcon(ButtonIcon1);
            ui->pushButton_0410->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0410->setIcon(ButtonIcon2);
            ui->pushButton_0410->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 12){
        if(p == 1){
            ui->pushButton_0412->setIcon(ButtonIcon1);
            ui->pushButton_0412->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0412->setIcon(ButtonIcon2);
            ui->pushButton_0412->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 14){
        if(p == 1){
            ui->pushButton_0414->setIcon(ButtonIcon1);
            ui->pushButton_0414->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0414->setIcon(ButtonIcon2);
            ui->pushButton_0414->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 16){
        if(p == 1){
            ui->pushButton_0416->setIcon(ButtonIcon1);
            ui->pushButton_0416->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0416->setIcon(ButtonIcon2);
            ui->pushButton_0416->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 0){
        if(p == 1){
            ui->pushButton_0600->setIcon(ButtonIcon1);
            ui->pushButton_0600->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0600->setIcon(ButtonIcon2);
            ui->pushButton_0600->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 2){
        if(p == 1){
            ui->pushButton_0602->setIcon(ButtonIcon1);
            ui->pushButton_0602->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0602->setIcon(ButtonIcon2);
            ui->pushButton_0602->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 4){
        if(p == 1){
            ui->pushButton_0604->setIcon(ButtonIcon1);
            ui->pushButton_0604->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0604->setIcon(ButtonIcon2);
            ui->pushButton_0604->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 6){
        if(p == 1){
            ui->pushButton_0606->setIcon(ButtonIcon1);
            ui->pushButton_0606->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0606->setIcon(ButtonIcon2);
            ui->pushButton_0606->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 8){
        if(p == 1){
            ui->pushButton_0608->setIcon(ButtonIcon1);
            ui->pushButton_0608->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0608->setIcon(ButtonIcon2);
            ui->pushButton_0608->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 10){
        if(p == 1){
            ui->pushButton_0610->setIcon(ButtonIcon1);
            ui->pushButton_0610->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0610->setIcon(ButtonIcon2);
            ui->pushButton_0610->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 12){
        if(p == 1){
            ui->pushButton_0612->setIcon(ButtonIcon1);
            ui->pushButton_0612->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0612->setIcon(ButtonIcon2);
            ui->pushButton_0612->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 14){
        if(p == 1){
            ui->pushButton_0614->setIcon(ButtonIcon1);
            ui->pushButton_0614->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0614->setIcon(ButtonIcon2);
            ui->pushButton_0614->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 16){
        if(p == 1){
            ui->pushButton_0616->setIcon(ButtonIcon1);
            ui->pushButton_0616->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0616->setIcon(ButtonIcon2);
            ui->pushButton_0616->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 0){
        if(p == 1){
            ui->pushButton_0800->setIcon(ButtonIcon1);
            ui->pushButton_0800->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0800->setIcon(ButtonIcon2);
            ui->pushButton_0800->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 2){
        if(p == 1){
            ui->pushButton_0802->setIcon(ButtonIcon1);
            ui->pushButton_0802->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0802->setIcon(ButtonIcon2);
            ui->pushButton_0802->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 4){
        if(p == 1){
            ui->pushButton_0804->setIcon(ButtonIcon1);
            ui->pushButton_0804->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0804->setIcon(ButtonIcon2);
            ui->pushButton_0804->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 6){
        if(p == 1){
            ui->pushButton_0806->setIcon(ButtonIcon1);
            ui->pushButton_0806->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0806->setIcon(ButtonIcon2);
            ui->pushButton_0806->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 8){
        if(p == 1){
            ui->pushButton_0808->setIcon(ButtonIcon1);
            ui->pushButton_0808->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0808->setIcon(ButtonIcon2);
            ui->pushButton_0808->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 10){
        if(p == 1){
            ui->pushButton_0810->setIcon(ButtonIcon1);
            ui->pushButton_0810->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0810->setIcon(ButtonIcon2);
            ui->pushButton_0810->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 12){
        if(p == 1){
            ui->pushButton_0812->setIcon(ButtonIcon1);
            ui->pushButton_0812->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0812->setIcon(ButtonIcon2);
            ui->pushButton_0812->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 14){
        if(p == 1){
            ui->pushButton_0814->setIcon(ButtonIcon1);
            ui->pushButton_0814->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0814->setIcon(ButtonIcon2);
            ui->pushButton_0814->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 16){
        if(p == 1){
            ui->pushButton_0816->setIcon(ButtonIcon1);
            ui->pushButton_0816->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0816->setIcon(ButtonIcon2);
            ui->pushButton_0816->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 0){
        if(p == 1){
            ui->pushButton_1000->setIcon(ButtonIcon1);
            ui->pushButton_1000->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1000->setIcon(ButtonIcon2);
            ui->pushButton_1000->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 2){
        if(p == 1){
            ui->pushButton_1002->setIcon(ButtonIcon1);
            ui->pushButton_1002->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1002->setIcon(ButtonIcon2);
            ui->pushButton_1002->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 4){
        if(p == 1){
            ui->pushButton_1004->setIcon(ButtonIcon1);
            ui->pushButton_1004->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1004->setIcon(ButtonIcon2);
            ui->pushButton_1004->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 6){
        if(p == 1){
            ui->pushButton_1006->setIcon(ButtonIcon1);
            ui->pushButton_1006->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1006->setIcon(ButtonIcon2);
            ui->pushButton_1006->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 8){
        if(p == 1){
            ui->pushButton_1008->setIcon(ButtonIcon1);
            ui->pushButton_1008->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1008->setIcon(ButtonIcon2);
            ui->pushButton_1008->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 10){
        if(p == 1){
            ui->pushButton_1010->setIcon(ButtonIcon1);
            ui->pushButton_1010->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1010->setIcon(ButtonIcon2);
            ui->pushButton_1010->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 12){
        if(p == 1){
            ui->pushButton_1012->setIcon(ButtonIcon1);
            ui->pushButton_1012->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1012->setIcon(ButtonIcon2);
            ui->pushButton_1012->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 14){
        if(p == 1){
            ui->pushButton_1014->setIcon(ButtonIcon1);
            ui->pushButton_1014->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1014->setIcon(ButtonIcon2);
            ui->pushButton_1014->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 16){
        if(p == 1){
            ui->pushButton_1016->setIcon(ButtonIcon1);
            ui->pushButton_1016->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1016->setIcon(ButtonIcon2);
            ui->pushButton_1016->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 0){
        if(p == 1){
            ui->pushButton_1200->setIcon(ButtonIcon1);
            ui->pushButton_1200->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1200->setIcon(ButtonIcon2);
            ui->pushButton_1200->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 2){
        if(p == 1){
            ui->pushButton_1202->setIcon(ButtonIcon1);
            ui->pushButton_1202->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1202->setIcon(ButtonIcon2);
            ui->pushButton_1202->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 4){
        if(p == 1){
            ui->pushButton_1204->setIcon(ButtonIcon1);
            ui->pushButton_1204->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1204->setIcon(ButtonIcon2);
            ui->pushButton_1204->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 6){
        if(p == 1){
            ui->pushButton_1206->setIcon(ButtonIcon1);
            ui->pushButton_1206->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1206->setIcon(ButtonIcon2);
            ui->pushButton_1206->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 8){
        if(p == 1){
            ui->pushButton_1208->setIcon(ButtonIcon1);
            ui->pushButton_1208->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1208->setIcon(ButtonIcon2);
            ui->pushButton_1208->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 10){
        if(p == 1){
            ui->pushButton_1210->setIcon(ButtonIcon1);
            ui->pushButton_1210->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1210->setIcon(ButtonIcon2);
            ui->pushButton_1210->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 12){
        if(p == 1){
            ui->pushButton_1212->setIcon(ButtonIcon1);
            ui->pushButton_1212->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1212->setIcon(ButtonIcon2);
            ui->pushButton_1212->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 14){
        if(p == 1){
            ui->pushButton_1214->setIcon(ButtonIcon1);
            ui->pushButton_1214->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1214->setIcon(ButtonIcon2);
            ui->pushButton_1214->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 16){
        if(p == 1){
            ui->pushButton_1216->setIcon(ButtonIcon1);
            ui->pushButton_1216->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1216->setIcon(ButtonIcon2);
            ui->pushButton_1216->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 0){
        if(p == 1){
            ui->pushButton_1400->setIcon(ButtonIcon1);
            ui->pushButton_1400->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1400->setIcon(ButtonIcon2);
            ui->pushButton_1400->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 2){
        if(p == 1){
            ui->pushButton_1402->setIcon(ButtonIcon1);
            ui->pushButton_1402->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1402->setIcon(ButtonIcon2);
            ui->pushButton_1402->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 4){
        if(p == 1){
            ui->pushButton_1404->setIcon(ButtonIcon1);
            ui->pushButton_1404->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1404->setIcon(ButtonIcon2);
            ui->pushButton_1404->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 6){
        if(p == 1){
            ui->pushButton_1406->setIcon(ButtonIcon1);
            ui->pushButton_1406->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1406->setIcon(ButtonIcon2);
            ui->pushButton_1406->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 8){
        if(p == 1){
            ui->pushButton_1408->setIcon(ButtonIcon1);
            ui->pushButton_1408->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1408->setIcon(ButtonIcon2);
            ui->pushButton_1408->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 10){
        if(p == 1){
            ui->pushButton_1410->setIcon(ButtonIcon1);
            ui->pushButton_1410->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1410->setIcon(ButtonIcon2);
            ui->pushButton_1410->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 12){
        if(p == 1){
            ui->pushButton_1412->setIcon(ButtonIcon1);
            ui->pushButton_1412->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1412->setIcon(ButtonIcon2);
            ui->pushButton_1412->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 14){
        if(p == 1){
            ui->pushButton_1414->setIcon(ButtonIcon1);
            ui->pushButton_1414->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1414->setIcon(ButtonIcon2);
            ui->pushButton_1414->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 16){
        if(p == 1){
            ui->pushButton_1416->setIcon(ButtonIcon1);
            ui->pushButton_1416->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1416->setIcon(ButtonIcon2);
            ui->pushButton_1416->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 0){
        if(p == 1){
            ui->pushButton_1600->setIcon(ButtonIcon1);
            ui->pushButton_1600->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1600->setIcon(ButtonIcon2);
            ui->pushButton_1600->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 2){
        if(p == 1){
            ui->pushButton_1602->setIcon(ButtonIcon1);
            ui->pushButton_1602->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1602->setIcon(ButtonIcon2);
            ui->pushButton_1602->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 4){
        if(p == 1){
            ui->pushButton_1604->setIcon(ButtonIcon1);
            ui->pushButton_1604->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1604->setIcon(ButtonIcon2);
            ui->pushButton_1604->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 6){
        if(p == 1){
            ui->pushButton_1606->setIcon(ButtonIcon1);
            ui->pushButton_1606->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1606->setIcon(ButtonIcon2);
            ui->pushButton_1606->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 8){
        if(p == 1){
            ui->pushButton_1608->setIcon(ButtonIcon1);
            ui->pushButton_1608->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1608->setIcon(ButtonIcon2);
            ui->pushButton_1608->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 10){
        if(p == 1){
            ui->pushButton_1610->setIcon(ButtonIcon1);
            ui->pushButton_1610->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1610->setIcon(ButtonIcon2);
            ui->pushButton_1610->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 12){
        if(p == 1){
            ui->pushButton_1612->setIcon(ButtonIcon1);
            ui->pushButton_1612->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1612->setIcon(ButtonIcon2);
            ui->pushButton_1612->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 14){
        if(p == 1){
            ui->pushButton_1614->setIcon(ButtonIcon1);
            ui->pushButton_1614->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1614->setIcon(ButtonIcon2);
            ui->pushButton_1614->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 16){
        if(p == 1){
            ui->pushButton_1616->setIcon(ButtonIcon1);
            ui->pushButton_1616->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1616->setIcon(ButtonIcon2);
            ui->pushButton_1616->setIconSize(pixmap2.rect().size());
        }
    }
}

void Quoridor::remove_pawn(int x, int y, int p){

    if(x == 0 && y == 0) ui->pushButton_0000->setIcon(QIcon());
    if(x == 0 && y == 2) ui->pushButton_0002->setIcon(QIcon());
    if(x == 0 && y == 4) ui->pushButton_0004->setIcon(QIcon());
    if(x == 0 && y == 6) ui->pushButton_0006->setIcon(QIcon());
    if(x == 0 && y == 8) ui->pushButton_0008->setIcon(QIcon());
    if(x == 0 && y == 10) ui->pushButton_0010->setIcon(QIcon());
    if(x == 0 && y == 12) ui->pushButton_0012->setIcon(QIcon());
    if(x == 0 && y == 14) ui->pushButton_0014->setIcon(QIcon());
    if(x == 0 && y == 16) ui->pushButton_0016->setIcon(QIcon());
    if(x == 2 && y == 0) ui->pushButton_0200->setIcon(QIcon());
    if(x == 2 && y == 2) ui->pushButton_0202->setIcon(QIcon());
    if(x == 2 && y == 4) ui->pushButton_0204->setIcon(QIcon());
    if(x == 2 && y == 6) ui->pushButton_0206->setIcon(QIcon());
    if(x == 2 && y == 8) ui->pushButton_0208->setIcon(QIcon());
    if(x == 2 && y == 10) ui->pushButton_0210->setIcon(QIcon());
    if(x == 2 && y == 12) ui->pushButton_0212->setIcon(QIcon());
    if(x == 2 && y == 14) ui->pushButton_0214->setIcon(QIcon());
    if(x == 2 && y == 16) ui->pushButton_0216->setIcon(QIcon());
    if(x == 4 && y == 0) ui->pushButton_0400->setIcon(QIcon());
    if(x == 4 && y == 2) ui->pushButton_0402->setIcon(QIcon());
    if(x == 4 && y == 4) ui->pushButton_0404->setIcon(QIcon());
    if(x == 4 && y == 6) ui->pushButton_0406->setIcon(QIcon());
    if(x == 4 && y == 8) ui->pushButton_0408->setIcon(QIcon());
    if(x == 4 && y == 10) ui->pushButton_0410->setIcon(QIcon());
    if(x == 4 && y == 12) ui->pushButton_0412->setIcon(QIcon());
    if(x == 4 && y == 14) ui->pushButton_0414->setIcon(QIcon());
    if(x == 4 && y == 16) ui->pushButton_0416->setIcon(QIcon());
    if(x == 6 && y == 0) ui->pushButton_0600->setIcon(QIcon());
    if(x == 6 && y == 2) ui->pushButton_0602->setIcon(QIcon());
    if(x == 6 && y == 4) ui->pushButton_0604->setIcon(QIcon());
    if(x == 6 && y == 6) ui->pushButton_0606->setIcon(QIcon());
    if(x == 6 && y == 8) ui->pushButton_0608->setIcon(QIcon());
    if(x == 6 && y == 10) ui->pushButton_0610->setIcon(QIcon());
    if(x == 6 && y == 12) ui->pushButton_0612->setIcon(QIcon());
    if(x == 6 && y == 14) ui->pushButton_0614->setIcon(QIcon());
    if(x == 6 && y == 16) ui->pushButton_0616->setIcon(QIcon());
    if(x == 8 && y == 0) ui->pushButton_0800->setIcon(QIcon());
    if(x == 8 && y == 2) ui->pushButton_0802->setIcon(QIcon());
    if(x == 8 && y == 4) ui->pushButton_0804->setIcon(QIcon());
    if(x == 8 && y == 6) ui->pushButton_0806->setIcon(QIcon());
    if(x == 8 && y == 8) ui->pushButton_0808->setIcon(QIcon());
    if(x == 8 && y == 10) ui->pushButton_0810->setIcon(QIcon());
    if(x == 8 && y == 12) ui->pushButton_0812->setIcon(QIcon());
    if(x == 8 && y == 14) ui->pushButton_0814->setIcon(QIcon());
    if(x == 8 && y == 16) ui->pushButton_0816->setIcon(QIcon());
    if(x == 10 && y == 0) ui->pushButton_1000->setIcon(QIcon());
    if(x == 10 && y == 2) ui->pushButton_1002->setIcon(QIcon());
    if(x == 10 && y == 4) ui->pushButton_1004->setIcon(QIcon());
    if(x == 10 && y == 6) ui->pushButton_1006->setIcon(QIcon());
    if(x == 10 && y == 8) ui->pushButton_1008->setIcon(QIcon());
    if(x == 10 && y == 10) ui->pushButton_1010->setIcon(QIcon());
    if(x == 10 && y == 12) ui->pushButton_1012->setIcon(QIcon());
    if(x == 10 && y == 14) ui->pushButton_1014->setIcon(QIcon());
    if(x == 10 && y == 16) ui->pushButton_1016->setIcon(QIcon());
    if(x == 12 && y == 0) ui->pushButton_1200->setIcon(QIcon());
    if(x == 12 && y == 2) ui->pushButton_1202->setIcon(QIcon());
    if(x == 12 && y == 4) ui->pushButton_1204->setIcon(QIcon());
    if(x == 12 && y == 6) ui->pushButton_1206->setIcon(QIcon());
    if(x == 12 && y == 8) ui->pushButton_1208->setIcon(QIcon());
    if(x == 12 && y == 10) ui->pushButton_1210->setIcon(QIcon());
    if(x == 12 && y == 12) ui->pushButton_1212->setIcon(QIcon());
    if(x == 12 && y == 14) ui->pushButton_1214->setIcon(QIcon());
    if(x == 12 && y == 16) ui->pushButton_1216->setIcon(QIcon());
    if(x == 14 && y == 0) ui->pushButton_1400->setIcon(QIcon());
    if(x == 14 && y == 2) ui->pushButton_1402->setIcon(QIcon());
    if(x == 14 && y == 4) ui->pushButton_1404->setIcon(QIcon());
    if(x == 14 && y == 6) ui->pushButton_1406->setIcon(QIcon());
    if(x == 14 && y == 8) ui->pushButton_1408->setIcon(QIcon());
    if(x == 14 && y == 10) ui->pushButton_1410->setIcon(QIcon());
    if(x == 14 && y == 12) ui->pushButton_1412->setIcon(QIcon());
    if(x == 14 && y == 14) ui->pushButton_1414->setIcon(QIcon());
    if(x == 14 && y == 16) ui->pushButton_1416->setIcon(QIcon());
    if(x == 16 && y == 0) ui->pushButton_1600->setIcon(QIcon());
    if(x == 16 && y == 2) ui->pushButton_1602->setIcon(QIcon());
    if(x == 16 && y == 4) ui->pushButton_1604->setIcon(QIcon());
    if(x == 16 && y == 6) ui->pushButton_1606->setIcon(QIcon());
    if(x == 16 && y == 8) ui->pushButton_1608->setIcon(QIcon());
    if(x == 16 && y == 10) ui->pushButton_1610->setIcon(QIcon());
    if(x == 16 && y == 12) ui->pushButton_1612->setIcon(QIcon());
    if(x == 16 && y == 14) ui->pushButton_1614->setIcon(QIcon());
    if(x == 16 && y == 16) ui->pushButton_1616->setIcon(QIcon());
}

void Quoridor::find_moves()
{
    move_select = true;

    int up[] = {-1,-1};
    int down[] = {-1,-1};
    int left[] = {-1,-1};
    int right[] = {-1,-1};

    if(curr_position[1] > 0 /*&& curr_position[1] -1 != 1*/){
        left[0] = curr_position[0]; left[1] = curr_position[1] -2;}
    if(curr_position[0] > 0  /*&& curr_position[0] -1 != 1*/){
        up[0] = curr_position[0] -2; up[1] = curr_position[1];}
    if(curr_position[1] < 16 /*&& curr_position[1] -1 != 1*/){
        right[0] = curr_position[0]; right[1] = curr_position[1] +2;}
    if(curr_position[0] < 16 /*&& curr_position[0] -1 != 1*/){
        down[0] = curr_position[0] +2; down[1] = curr_position[1];}


    if ((curr_position[0] == 0 && curr_position[1] == 0) || (left[0] == 0 && left[1] == 0) || (up[0] == 0 && up[1] == 0) || (right[0] == 0 && right[1] == 0) || (down[0] == 0 && down[1] == 0))
        ui->pushButton_0000->setEnabled(true);
    else
        ui->pushButton_0000->setEnabled(false);

    if ((curr_position[0] == 0 && curr_position[1] == 2) || (left[0] == 0 && left[1] == 2) || (up[0] == 0 && up[1] == 2) || (right[0] == 0 && right[1] == 2) || (down[0] == 0 && down[1] == 2))
        ui->pushButton_0002->setEnabled(true);
    else
        ui->pushButton_0002->setEnabled(false);

    if ((curr_position[0] == 0 && curr_position[1] == 4) || (left[0] == 0 && left[1] == 4) || (up[0] == 0 && up[1] == 4) || (right[0] == 0 && right[1] == 4) || (down[0] == 0 && down[1] == 4))
        ui->pushButton_0004->setEnabled(true);
    else
        ui->pushButton_0004->setEnabled(false);

    if ((curr_position[0] == 0 && curr_position[1] == 6) || (left[0] == 0 && left[1] == 6) || (up[0] == 0 && up[1] == 6) || (right[0] == 0 && right[1] == 6) || (down[0] == 0 && down[1] == 6))
        ui->pushButton_0006->setEnabled(true);
    else
        ui->pushButton_0006->setEnabled(false);

    if ((curr_position[0] == 0 && curr_position[1] == 8) || (left[0] == 0 && left[1] == 8) || (up[0] == 0 && up[1] == 8) || (right[0] == 0 && right[1] == 8) || (down[0] == 0 && down[1] == 8))
        ui->pushButton_0008->setEnabled(true);
    else
        ui->pushButton_0008->setEnabled(false);

    if ((curr_position[0] == 0 && curr_position[1] == 10) || (left[0] == 0 && left[1] == 10) || (up[0] == 0 && up[1] == 10) || (right[0] == 0 && right[1] == 10) || (down[0] == 0 && down[1] == 10))
        ui->pushButton_0010->setEnabled(true);
    else
        ui->pushButton_0010->setEnabled(false);

    if ((curr_position[0] == 0 && curr_position[1] == 12) || (left[0] == 0 && left[1] == 12) || (up[0] == 0 && up[1] == 12) || (right[0] == 0 && right[1] == 12) || (down[0] == 0 && down[1] == 12))
        ui->pushButton_0012->setEnabled(true);
    else
        ui->pushButton_0012->setEnabled(false);

    if ((curr_position[0] == 0 && curr_position[1] == 14) || (left[0] == 0 && left[1] == 14) || (up[0] == 0 && up[1] == 14) || (right[0] == 0 && right[1] == 14) || (down[0] == 0 && down[1] == 14))
        ui->pushButton_0014->setEnabled(true);
    else
        ui->pushButton_0014->setEnabled(false);

    if ((curr_position[0] == 0 && curr_position[1] == 16) || (left[0] == 0 && left[1] == 16) || (up[0] == 0 && up[1] == 16) || (right[0] == 0 && right[1] == 16) || (down[0] == 0 && down[1] == 16))
        ui->pushButton_0016->setEnabled(true);
    else
        ui->pushButton_0016->setEnabled(false);

    if ((curr_position[0] == 2 && curr_position[1] == 0) || (left[0] == 2 && left[1] == 0) || (up[0] == 2 && up[1] == 0) || (right[0] == 2 && right[1] == 0) || (down[0] == 2 && down[1] == 0))
        ui->pushButton_0200->setEnabled(true);
    else
        ui->pushButton_0200->setEnabled(false);

    if ((curr_position[0] == 2 && curr_position[1] == 2) || (left[0] == 2 && left[1] == 2) || (up[0] == 2 && up[1] == 2) || (right[0] == 2 && right[1] == 2) || (down[0] == 2 && down[1] == 2))
        ui->pushButton_0202->setEnabled(true);
    else
        ui->pushButton_0202->setEnabled(false);

    if ((curr_position[0] == 2 && curr_position[1] == 4) || (left[0] == 2 && left[1] == 4) || (up[0] == 2 && up[1] == 4) || (right[0] == 2 && right[1] == 4) || (down[0] == 2 && down[1] == 4))
        ui->pushButton_0204->setEnabled(true);
    else
        ui->pushButton_0204->setEnabled(false);

    if ((curr_position[0] == 2 && curr_position[1] == 6) || (left[0] == 2 && left[1] == 6) || (up[0] == 2 && up[1] == 6) || (right[0] == 2 && right[1] == 6) || (down[0] == 2 && down[1] == 6))
        ui->pushButton_0206->setEnabled(true);
    else
        ui->pushButton_0206->setEnabled(false);

    if ((curr_position[0] == 2 && curr_position[1] == 8) || (left[0] == 2 && left[1] == 8) || (up[0] == 2 && up[1] == 8) || (right[0] == 2 && right[1] == 8) || (down[0] == 2 && down[1] == 8))
        ui->pushButton_0208->setEnabled(true);
    else
        ui->pushButton_0208->setEnabled(false);

    if ((curr_position[0] == 2 && curr_position[1] == 10) || (left[0] == 2 && left[1] == 10) || (up[0] == 2 && up[1] == 10) || (right[0] == 2 && right[1] == 10) || (down[0] == 2 && down[1] == 10))
        ui->pushButton_0210->setEnabled(true);
    else
        ui->pushButton_0210->setEnabled(false);

    if ((curr_position[0] == 2 && curr_position[1] == 12) || (left[0] == 2 && left[1] == 12) || (up[0] == 2 && up[1] == 12) || (right[0] == 2 && right[1] == 12) || (down[0] == 2 && down[1] == 12))
        ui->pushButton_0212->setEnabled(true);
    else
        ui->pushButton_0212->setEnabled(false);

    if ((curr_position[0] == 2 && curr_position[1] == 14) || (left[0] == 2 && left[1] == 14) || (up[0] == 2 && up[1] == 14) || (right[0] == 2 && right[1] == 14) || (down[0] == 2 && down[1] == 14))
        ui->pushButton_0214->setEnabled(true);
    else
        ui->pushButton_0214->setEnabled(false);

    if ((curr_position[0] == 2 && curr_position[1] == 16) || (left[0] == 2 && left[1] == 16) || (up[0] == 2 && up[1] == 16) || (right[0] == 2 && right[1] == 16) || (down[0] == 2 && down[1] == 16))
        ui->pushButton_0216->setEnabled(true);
    else
        ui->pushButton_0216->setEnabled(false);

    if ((curr_position[0] == 4 && curr_position[1] == 0) || (left[0] == 4 && left[1] == 0) || (up[0] == 4 && up[1] == 0) || (right[0] == 4 && right[1] == 0) || (down[0] == 4 && down[1] == 0))
        ui->pushButton_0400->setEnabled(true);
    else
        ui->pushButton_0400->setEnabled(false);

    if ((curr_position[0] == 4 && curr_position[1] == 2) || (left[0] == 4 && left[1] == 2) || (up[0] == 4 && up[1] == 2) || (right[0] == 4 && right[1] == 2) || (down[0] == 4 && down[1] == 2))
        ui->pushButton_0402->setEnabled(true);
    else
        ui->pushButton_0402->setEnabled(false);

    if ((curr_position[0] == 4 && curr_position[1] == 4) || (left[0] == 4 && left[1] == 4) || (up[0] == 4 && up[1] == 4) || (right[0] == 4 && right[1] == 4) || (down[0] == 4 && down[1] == 4))
        ui->pushButton_0404->setEnabled(true);
    else
        ui->pushButton_0404->setEnabled(false);

    if ((curr_position[0] == 4 && curr_position[1] == 6) || (left[0] == 4 && left[1] == 6) || (up[0] == 4 && up[1] == 6) || (right[0] == 4 && right[1] == 6) || (down[0] == 4 && down[1] == 6))
        ui->pushButton_0406->setEnabled(true);
    else
        ui->pushButton_0406->setEnabled(false);

    if ((curr_position[0] == 4 && curr_position[1] == 8) || (left[0] == 4 && left[1] == 8) || (up[0] == 4 && up[1] == 8) || (right[0] == 4 && right[1] == 8) || (down[0] == 4 && down[1] == 8))
        ui->pushButton_0408->setEnabled(true);
    else
        ui->pushButton_0408->setEnabled(false);

    if ((curr_position[0] == 4 && curr_position[1] == 10) || (left[0] == 4 && left[1] == 10) || (up[0] == 4 && up[1] == 10) || (right[0] == 4 && right[1] == 10) || (down[0] == 4 && down[1] == 10))
        ui->pushButton_0410->setEnabled(true);
    else
        ui->pushButton_0410->setEnabled(false);

    if ((curr_position[0] == 4 && curr_position[1] == 12) || (left[0] == 4 && left[1] == 12) || (up[0] == 4 && up[1] == 12) || (right[0] == 4 && right[1] == 12) || (down[0] == 4 && down[1] == 12))
        ui->pushButton_0412->setEnabled(true);
    else
        ui->pushButton_0412->setEnabled(false);

    if ((curr_position[0] == 4 && curr_position[1] == 14) || (left[0] == 4 && left[1] == 14) || (up[0] == 4 && up[1] == 14) || (right[0] == 4 && right[1] == 14) || (down[0] == 4 && down[1] == 14))
        ui->pushButton_0414->setEnabled(true);
    else
        ui->pushButton_0414->setEnabled(false);

    if ((curr_position[0] == 4 && curr_position[1] == 16) || (left[0] == 4 && left[1] == 16) || (up[0] == 4 && up[1] == 16) || (right[0] == 4 && right[1] == 16) || (down[0] == 4 && down[1] == 16))
        ui->pushButton_0416->setEnabled(true);
    else
        ui->pushButton_0416->setEnabled(false);

    if ((curr_position[0] == 6 && curr_position[1] == 0) || (left[0] == 6 && left[1] == 0) || (up[0] == 6 && up[1] == 0) || (right[0] == 6 && right[1] == 0) || (down[0] == 6 && down[1] == 0))
        ui->pushButton_0600->setEnabled(true);
    else
        ui->pushButton_0600->setEnabled(false);

    if ((curr_position[0] == 6 && curr_position[1] == 2) || (left[0] == 6 && left[1] == 2) || (up[0] == 6 && up[1] == 2) || (right[0] == 6 && right[1] == 2) || (down[0] == 6 && down[1] == 2))
        ui->pushButton_0602->setEnabled(true);
    else
        ui->pushButton_0602->setEnabled(false);

    if ((curr_position[0] == 6 && curr_position[1] == 4) || (left[0] == 6 && left[1] == 4) || (up[0] == 6 && up[1] == 4) || (right[0] == 6 && right[1] == 4) || (down[0] == 6 && down[1] == 4))
        ui->pushButton_0604->setEnabled(true);
    else
        ui->pushButton_0604->setEnabled(false);

    if ((curr_position[0] == 6 && curr_position[1] == 6) || (left[0] == 6 && left[1] == 6) || (up[0] == 6 && up[1] == 6) || (right[0] == 6 && right[1] == 6) || (down[0] == 6 && down[1] == 6))
        ui->pushButton_0606->setEnabled(true);
    else
        ui->pushButton_0606->setEnabled(false);

    if ((curr_position[0] == 6 && curr_position[1] == 8) || (left[0] == 6 && left[1] == 8) || (up[0] == 6 && up[1] == 8) || (right[0] == 6 && right[1] == 8) || (down[0] == 6 && down[1] == 8))
        ui->pushButton_0608->setEnabled(true);
    else
        ui->pushButton_0608->setEnabled(false);

    if ((curr_position[0] == 6 && curr_position[1] == 10) || (left[0] == 6 && left[1] == 10) || (up[0] == 6 && up[1] == 10) || (right[0] == 6 && right[1] == 10) || (down[0] == 6 && down[1] == 10))
        ui->pushButton_0610->setEnabled(true);
    else
        ui->pushButton_0610->setEnabled(false);

    if ((curr_position[0] == 6 && curr_position[1] == 12) || (left[0] == 6 && left[1] == 12) || (up[0] == 6 && up[1] == 12) || (right[0] == 6 && right[1] == 12) || (down[0] == 6 && down[1] == 12))
        ui->pushButton_0612->setEnabled(true);
    else
        ui->pushButton_0612->setEnabled(false);

    if ((curr_position[0] == 6 && curr_position[1] == 14) || (left[0] == 6 && left[1] == 14) || (up[0] == 6 && up[1] == 14) || (right[0] == 6 && right[1] == 14) || (down[0] == 6 && down[1] == 14))
        ui->pushButton_0614->setEnabled(true);
    else
        ui->pushButton_0614->setEnabled(false);

    if ((curr_position[0] == 6 && curr_position[1] == 16) || (left[0] == 6 && left[1] == 16) || (up[0] == 6 && up[1] == 16) || (right[0] == 6 && right[1] == 16) || (down[0] == 6 && down[1] == 16))
        ui->pushButton_0616->setEnabled(true);
    else
        ui->pushButton_0616->setEnabled(false);

    if ((curr_position[0] == 8 && curr_position[1] == 0) || (left[0] == 8 && left[1] == 0) || (up[0] == 8 && up[1] == 0) || (right[0] == 8 && right[1] == 0) || (down[0] == 8 && down[1] == 0))
        ui->pushButton_0800->setEnabled(true);
    else
        ui->pushButton_0800->setEnabled(false);

    if ((curr_position[0] == 8 && curr_position[1] == 2) || (left[0] == 8 && left[1] == 2) || (up[0] == 8 && up[1] == 2) || (right[0] == 8 && right[1] == 2) || (down[0] == 8 && down[1] == 2))
        ui->pushButton_0802->setEnabled(true);
    else
        ui->pushButton_0802->setEnabled(false);

    if ((curr_position[0] == 8 && curr_position[1] == 4) || (left[0] == 8 && left[1] == 4) || (up[0] == 8 && up[1] == 4) || (right[0] == 8 && right[1] == 4) || (down[0] == 8 && down[1] == 4))
        ui->pushButton_0804->setEnabled(true);
    else
        ui->pushButton_0804->setEnabled(false);

    if ((curr_position[0] == 8 && curr_position[1] == 6) || (left[0] == 8 && left[1] == 6) || (up[0] == 8 && up[1] == 6) || (right[0] == 8 && right[1] == 6) || (down[0] == 8 && down[1] == 6))
        ui->pushButton_0806->setEnabled(true);
    else
        ui->pushButton_0806->setEnabled(false);

    if ((curr_position[0] == 8 && curr_position[1] == 8) || (left[0] == 8 && left[1] == 8) || (up[0] == 8 && up[1] == 8) || (right[0] == 8 && right[1] == 8) || (down[0] == 8 && down[1] == 8))
        ui->pushButton_0808->setEnabled(true);
    else
        ui->pushButton_0808->setEnabled(false);

    if ((curr_position[0] == 8 && curr_position[1] == 10) || (left[0] == 8 && left[1] == 10) || (up[0] == 8 && up[1] == 10) || (right[0] == 8 && right[1] == 10) || (down[0] == 8 && down[1] == 10))
        ui->pushButton_0810->setEnabled(true);
    else
        ui->pushButton_0810->setEnabled(false);

    if ((curr_position[0] == 8 && curr_position[1] == 12) || (left[0] == 8 && left[1] == 12) || (up[0] == 8 && up[1] == 12) || (right[0] == 8 && right[1] == 12) || (down[0] == 8 && down[1] == 12))
        ui->pushButton_0812->setEnabled(true);
    else
        ui->pushButton_0812->setEnabled(false);

    if ((curr_position[0] == 8 && curr_position[1] == 14) || (left[0] == 8 && left[1] == 14) || (up[0] == 8 && up[1] == 14) || (right[0] == 8 && right[1] == 14) || (down[0] == 8 && down[1] == 14))
        ui->pushButton_0814->setEnabled(true);
    else
        ui->pushButton_0814->setEnabled(false);

    if ((curr_position[0] == 8 && curr_position[1] == 16) || (left[0] == 8 && left[1] == 16) || (up[0] == 8 && up[1] == 16) || (right[0] == 8 && right[1] == 16) || (down[0] == 8 && down[1] == 16))
        ui->pushButton_0816->setEnabled(true);
    else
        ui->pushButton_0816->setEnabled(false);

    if ((curr_position[0] == 10 && curr_position[1] == 0) || (left[0] == 10 && left[1] == 0) || (up[0] == 10 && up[1] == 0) || (right[0] == 10 && right[1] == 0) || (down[0] == 10 && down[1] == 0))
        ui->pushButton_1000->setEnabled(true);
    else
        ui->pushButton_1000->setEnabled(false);

    if ((curr_position[0] == 10 && curr_position[1] == 2) || (left[0] == 10 && left[1] == 2) || (up[0] == 10 && up[1] == 2) || (right[0] == 10 && right[1] == 2) || (down[0] == 10 && down[1] == 2))
        ui->pushButton_1002->setEnabled(true);
    else
        ui->pushButton_1002->setEnabled(false);

    if ((curr_position[0] == 10 && curr_position[1] == 4) || (left[0] == 10 && left[1] == 4) || (up[0] == 10 && up[1] == 4) || (right[0] == 10 && right[1] == 4) || (down[0] == 10 && down[1] == 4))
        ui->pushButton_1004->setEnabled(true);
    else
        ui->pushButton_1004->setEnabled(false);

    if ((curr_position[0] == 10 && curr_position[1] == 6) || (left[0] == 10 && left[1] == 6) || (up[0] == 10 && up[1] == 6) || (right[0] == 10 && right[1] == 6) || (down[0] == 10 && down[1] == 6))
        ui->pushButton_1006->setEnabled(true);
    else
        ui->pushButton_1006->setEnabled(false);

    if ((curr_position[0] == 10 && curr_position[1] == 8) || (left[0] == 10 && left[1] == 8) || (up[0] == 10 && up[1] == 8) || (right[0] == 10 && right[1] == 8) || (down[0] == 10 && down[1] == 8))
        ui->pushButton_1008->setEnabled(true);
    else
        ui->pushButton_1008->setEnabled(false);

    if ((curr_position[0] == 10 && curr_position[1] == 10) || (left[0] == 10 && left[1] == 10) || (up[0] == 10 && up[1] == 10) || (right[0] == 10 && right[1] == 10) || (down[0] == 10 && down[1] == 10))
        ui->pushButton_1010->setEnabled(true);
    else
        ui->pushButton_1010->setEnabled(false);

    if ((curr_position[0] == 10 && curr_position[1] == 12) || (left[0] == 10 && left[1] == 12) || (up[0] == 10 && up[1] == 12) || (right[0] == 10 && right[1] == 12) || (down[0] == 10 && down[1] == 12))
        ui->pushButton_1012->setEnabled(true);
    else
        ui->pushButton_1012->setEnabled(false);

    if ((curr_position[0] == 10 && curr_position[1] == 14) || (left[0] == 10 && left[1] == 14) || (up[0] == 10 && up[1] == 14) || (right[0] == 10 && right[1] == 14) || (down[0] == 10 && down[1] == 14))
        ui->pushButton_1014->setEnabled(true);
    else
        ui->pushButton_1014->setEnabled(false);

    if ((curr_position[0] == 10 && curr_position[1] == 16) || (left[0] == 10 && left[1] == 16) || (up[0] == 10 && up[1] == 16) || (right[0] == 10 && right[1] == 16) || (down[0] == 10 && down[1] == 16))
        ui->pushButton_1016->setEnabled(true);
    else
        ui->pushButton_1016->setEnabled(false);

    if ((curr_position[0] == 12 && curr_position[1] == 0) || (left[0] == 12 && left[1] == 0) || (up[0] == 12 && up[1] == 0) || (right[0] == 12 && right[1] == 0) || (down[0] == 12 && down[1] == 0))
        ui->pushButton_1200->setEnabled(true);
    else
        ui->pushButton_1200->setEnabled(false);

    if ((curr_position[0] == 12 && curr_position[1] == 2) || (left[0] == 12 && left[1] == 2) || (up[0] == 12 && up[1] == 2) || (right[0] == 12 && right[1] == 2) || (down[0] == 12 && down[1] == 2))
        ui->pushButton_1202->setEnabled(true);
    else
        ui->pushButton_1202->setEnabled(false);

    if ((curr_position[0] == 12 && curr_position[1] == 4) || (left[0] == 12 && left[1] == 4) || (up[0] == 12 && up[1] == 4) || (right[0] == 12 && right[1] == 4) || (down[0] == 12 && down[1] == 4))
        ui->pushButton_1204->setEnabled(true);
    else
        ui->pushButton_1204->setEnabled(false);

    if ((curr_position[0] == 12 && curr_position[1] == 6) || (left[0] == 12 && left[1] == 6) || (up[0] == 12 && up[1] == 6) || (right[0] == 12 && right[1] == 6) || (down[0] == 12 && down[1] == 6))
        ui->pushButton_1206->setEnabled(true);
    else
        ui->pushButton_1206->setEnabled(false);

    if ((curr_position[0] == 12 && curr_position[1] == 8) || (left[0] == 12 && left[1] == 8) || (up[0] == 12 && up[1] == 8) || (right[0] == 12 && right[1] == 8) || (down[0] == 12 && down[1] == 8))
        ui->pushButton_1208->setEnabled(true);
    else
        ui->pushButton_1208->setEnabled(false);

    if ((curr_position[0] == 12 && curr_position[1] == 10) || (left[0] == 12 && left[1] == 10) || (up[0] == 12 && up[1] == 10) || (right[0] == 12 && right[1] == 10) || (down[0] == 12 && down[1] == 10))
        ui->pushButton_1210->setEnabled(true);
    else
        ui->pushButton_1210->setEnabled(false);

    if ((curr_position[0] == 12 && curr_position[1] == 12) || (left[0] == 12 && left[1] == 12) || (up[0] == 12 && up[1] == 12) || (right[0] == 12 && right[1] == 12) || (down[0] == 12 && down[1] == 12))
        ui->pushButton_1212->setEnabled(true);
    else
        ui->pushButton_1212->setEnabled(false);

    if ((curr_position[0] == 12 && curr_position[1] == 14) || (left[0] == 12 && left[1] == 14) || (up[0] == 12 && up[1] == 14) || (right[0] == 12 && right[1] == 14) || (down[0] == 12 && down[1] == 14))
        ui->pushButton_1214->setEnabled(true);
    else
        ui->pushButton_1214->setEnabled(false);

    if ((curr_position[0] == 12 && curr_position[1] == 16) || (left[0] == 12 && left[1] == 16) || (up[0] == 12 && up[1] == 16) || (right[0] == 12 && right[1] == 16) || (down[0] == 12 && down[1] == 16))
        ui->pushButton_1216->setEnabled(true);
    else
        ui->pushButton_1216->setEnabled(false);

    if ((curr_position[0] == 14 && curr_position[1] == 0) || (left[0] == 14 && left[1] == 0) || (up[0] == 14 && up[1] == 0) || (right[0] == 14 && right[1] == 0) || (down[0] == 14 && down[1] == 0))
        ui->pushButton_1400->setEnabled(true);
    else
        ui->pushButton_1400->setEnabled(false);

    if ((curr_position[0] == 14 && curr_position[1] == 2) || (left[0] == 14 && left[1] == 2) || (up[0] == 14 && up[1] == 2) || (right[0] == 14 && right[1] == 2) || (down[0] == 14 && down[1] == 2))
        ui->pushButton_1402->setEnabled(true);
    else
        ui->pushButton_1402->setEnabled(false);

    if ((curr_position[0] == 14 && curr_position[1] == 4) || (left[0] == 14 && left[1] == 4) || (up[0] == 14 && up[1] == 4) || (right[0] == 14 && right[1] == 4) || (down[0] == 14 && down[1] == 4))
        ui->pushButton_1404->setEnabled(true);
    else
        ui->pushButton_1404->setEnabled(false);

    if ((curr_position[0] == 14 && curr_position[1] == 6) || (left[0] == 14 && left[1] == 6) || (up[0] == 14 && up[1] == 6) || (right[0] == 14 && right[1] == 6) || (down[0] == 14 && down[1] == 6))
        ui->pushButton_1406->setEnabled(true);
    else
        ui->pushButton_1406->setEnabled(false);

    if ((curr_position[0] == 14 && curr_position[1] == 8) || (left[0] == 14 && left[1] == 8) || (up[0] == 14 && up[1] == 8) || (right[0] == 14 && right[1] == 8) || (down[0] == 14 && down[1] == 8))
        ui->pushButton_1408->setEnabled(true);
    else
        ui->pushButton_1408->setEnabled(false);

    if ((curr_position[0] == 14 && curr_position[1] == 10) || (left[0] == 14 && left[1] == 10) || (up[0] == 14 && up[1] == 10) || (right[0] == 14 && right[1] == 10) || (down[0] == 14 && down[1] == 10))
        ui->pushButton_1410->setEnabled(true);
    else
        ui->pushButton_1410->setEnabled(false);

    if ((curr_position[0] == 14 && curr_position[1] == 12) || (left[0] == 14 && left[1] == 12) || (up[0] == 14 && up[1] == 12) || (right[0] == 14 && right[1] == 12) || (down[0] == 14 && down[1] == 12))
        ui->pushButton_1412->setEnabled(true);
    else
        ui->pushButton_1412->setEnabled(false);

    if ((curr_position[0] == 14 && curr_position[1] == 14) || (left[0] == 14 && left[1] == 14) || (up[0] == 14 && up[1] == 14) || (right[0] == 14 && right[1] == 14) || (down[0] == 14 && down[1] == 14))
        ui->pushButton_1414->setEnabled(true);
    else
        ui->pushButton_1414->setEnabled(false);

    if ((curr_position[0] == 14 && curr_position[1] == 16) || (left[0] == 14 && left[1] == 16) || (up[0] == 14 && up[1] == 16) || (right[0] == 14 && right[1] == 16) || (down[0] == 14 && down[1] == 16))
        ui->pushButton_1416->setEnabled(true);
    else
        ui->pushButton_1416->setEnabled(false);

    if ((curr_position[0] == 16 && curr_position[1] == 0) || (left[0] == 16 && left[1] == 0) || (up[0] == 16 && up[1] == 0) || (right[0] == 16 && right[1] == 0) || (down[0] == 16 && down[1] == 0))
        ui->pushButton_1600->setEnabled(true);
    else
        ui->pushButton_1600->setEnabled(false);

    if ((curr_position[0] == 16 && curr_position[1] == 2) || (left[0] == 16 && left[1] == 2) || (up[0] == 16 && up[1] == 2) || (right[0] == 16 && right[1] == 2) || (down[0] == 16 && down[1] == 2))
        ui->pushButton_1602->setEnabled(true);
    else
        ui->pushButton_1602->setEnabled(false);

    if ((curr_position[0] == 16 && curr_position[1] == 4) || (left[0] == 16 && left[1] == 4) || (up[0] == 16 && up[1] == 4) || (right[0] == 16 && right[1] == 4) || (down[0] == 16 && down[1] == 4))
        ui->pushButton_1604->setEnabled(true);
    else
        ui->pushButton_1604->setEnabled(false);

    if ((curr_position[0] == 16 && curr_position[1] == 6) || (left[0] == 16 && left[1] == 6) || (up[0] == 16 && up[1] == 6) || (right[0] == 16 && right[1] == 6) || (down[0] == 16 && down[1] == 6))
        ui->pushButton_1606->setEnabled(true);
    else
        ui->pushButton_1606->setEnabled(false);

    if ((curr_position[0] == 16 && curr_position[1] == 8) || (left[0] == 16 && left[1] == 8) || (up[0] == 16 && up[1] == 8) || (right[0] == 16 && right[1] == 8) || (down[0] == 16 && down[1] == 8))
        ui->pushButton_1608->setEnabled(true);
    else
        ui->pushButton_1608->setEnabled(false);

    if ((curr_position[0] == 16 && curr_position[1] == 10) || (left[0] == 16 && left[1] == 10) || (up[0] == 16 && up[1] == 10) || (right[0] == 16 && right[1] == 10) || (down[0] == 16 && down[1] == 10))
        ui->pushButton_1610->setEnabled(true);
    else
        ui->pushButton_1610->setEnabled(false);

    if ((curr_position[0] == 16 && curr_position[1] == 12) || (left[0] == 16 && left[1] == 12) || (up[0] == 16 && up[1] == 12) || (right[0] == 16 && right[1] == 12) || (down[0] == 16 && down[1] == 12))
        ui->pushButton_1612->setEnabled(true);
    else
        ui->pushButton_1612->setEnabled(false);

    if ((curr_position[0] == 16 && curr_position[1] == 14) || (left[0] == 16 && left[1] == 14) || (up[0] == 16 && up[1] == 14) || (right[0] == 16 && right[1] == 14) || (down[0] == 16 && down[1] == 14))
        ui->pushButton_1614->setEnabled(true);
    else
        ui->pushButton_1614->setEnabled(false);

    if ((curr_position[0] == 16 && curr_position[1] == 16) || (left[0] == 16 && left[1] == 16) || (up[0] == 16 && up[1] == 16) || (right[0] == 16 && right[1] == 16) || (down[0] == 16 && down[1] == 16))
        ui->pushButton_1616->setEnabled(true);
    else
        ui->pushButton_1616->setEnabled(false);
}

void Quoridor::reset_buttons()
{
    move_select = false;

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


