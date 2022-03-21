#include "quoridor.h"
#include "ui_quoridor.h"
#include <QMouseEvent>
#include <QPoint>
#include <QPainter>
#include <QHoverEvent>

extern bool start;
extern int curr_x;
extern int curr_y;
extern int legal[];
bool start = false;
int curr_x = 0;
int curr_y = 0;
int legal[] = {1,1,1,1};


Quoridor::Quoridor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Quoridor)
{
    ui->setupUi(this);
    ui->frame_2->setVisible(false);
}

void Quoridor::mouseMoveEvent(QMouseEvent *event){
    if(start){
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


void Quoridor::on_pushButton_0000_clicked()
{
    if(curr_x == 0 && curr_y == 0){}
}


void Quoridor::on_pushButton_0002_clicked()
{
    if(curr_x == 0 && curr_y == 2){}
}


void Quoridor::on_pushButton_0004_clicked()
{
    if(curr_x == 0 && curr_y == 4){}
}


void Quoridor::on_pushButton_0006_clicked()
{
    if(curr_x == 0 && curr_y == 6){}
}


void Quoridor::on_pushButton_0008_clicked()
{
    if(curr_x == 0 && curr_y == 8){}
}


void Quoridor::on_pushButton_0010_clicked()
{
    if(curr_x == 0 && curr_y == 10){}
}


void Quoridor::on_pushButton_0012_clicked()
{
    if(curr_x == 0 && curr_y == 12){}
}


void Quoridor::on_pushButton_0014_clicked()
{
    if(curr_x == 0 && curr_y == 14){}
}


void Quoridor::on_pushButton_0016_clicked()
{
    if(curr_x == 0 && curr_y == 16){}
}


void Quoridor::on_pushButton_0200_clicked()
{
    if(curr_x == 2 && curr_y == 0){}
}


void Quoridor::on_pushButton_0202_clicked()
{
    if(curr_x == 2 && curr_y == 2){}
}


void Quoridor::on_pushButton_0204_clicked()
{
    if(curr_x == 2 && curr_y == 4){}
}


void Quoridor::on_pushButton_0206_clicked()
{
    if(curr_x == 2 && curr_y == 6){}
}


void Quoridor::on_pushButton_0208_clicked()
{
    if(curr_x == 2 && curr_y == 8){}
}


void Quoridor::on_pushButton_0210_clicked()
{
    if(curr_x == 2 && curr_y == 10){}
}


void Quoridor::on_pushButton_0212_clicked()
{
    if(curr_x == 2 && curr_y == 12){}
}


void Quoridor::on_pushButton_0214_clicked()
{
    if(curr_x == 2 && curr_y == 14){}
}


void Quoridor::on_pushButton_0216_clicked()
{
    if(curr_x == 2 && curr_y == 16){}
}


void Quoridor::on_pushButton_0400_clicked()
{
    if(curr_x == 4 && curr_y == 0){}
}


void Quoridor::on_pushButton_0402_clicked()
{
    if(curr_x == 4 && curr_y == 2){}
}


void Quoridor::on_pushButton_0404_clicked()
{
    if(curr_x == 4 && curr_y == 4){}
}


void Quoridor::on_pushButton_0406_clicked()
{
    if(curr_x == 4 && curr_y == 6){}
}


void Quoridor::on_pushButton_0408_clicked()
{
    if(curr_x == 4 && curr_y == 8){}
}


void Quoridor::on_pushButton_0410_clicked()
{
    if(curr_x == 4 && curr_y == 10){}
}


void Quoridor::on_pushButton_0412_clicked()
{
    if(curr_x == 4 && curr_y == 12){}
}


void Quoridor::on_pushButton_0414_clicked()
{
    if(curr_x == 4 && curr_y == 14){}
}


void Quoridor::on_pushButton_0416_clicked()
{
    if(curr_x == 4 && curr_y == 16){}
}


void Quoridor::on_pushButton_0600_clicked()
{
    if(curr_x == 6 && curr_y == 0){}
}


void Quoridor::on_pushButton_0602_clicked()
{
    if(curr_x == 6 && curr_y == 2){}
}


void Quoridor::on_pushButton_0604_clicked()
{
    if(curr_x == 6 && curr_y == 4){}
}


void Quoridor::on_pushButton_0606_clicked()
{
    if(curr_x == 6 && curr_y == 6){}
}


void Quoridor::on_pushButton_0608_clicked()
{
    if(curr_x == 6 && curr_y == 8){}
}


void Quoridor::on_pushButton_0610_clicked()
{
    if(curr_x == 6 && curr_y == 10){}
}


void Quoridor::on_pushButton_0612_clicked()
{
    if(curr_x == 6 && curr_y == 12){}
}


void Quoridor::on_pushButton_0614_clicked()
{
    if(curr_x == 6 && curr_y == 14){}
}


void Quoridor::on_pushButton_0616_clicked()
{
    if(curr_x == 6 && curr_y == 16){}
}


void Quoridor::on_pushButton_0800_clicked()
{
    if(curr_x == 8 && curr_y == 0){}
}


void Quoridor::on_pushButton_0802_clicked()
{
    if(curr_x == 8 && curr_y == 2){}
}


void Quoridor::on_pushButton_0804_clicked()
{
    if(curr_x == 8 && curr_y == 4){}
}


void Quoridor::on_pushButton_0806_clicked()
{
    if(curr_x == 8 && curr_y == 6){}
}


void Quoridor::on_pushButton_0808_clicked()
{
    if(curr_x == 8 && curr_y == 8){}
}


void Quoridor::on_pushButton_0810_clicked()
{
    if(curr_x == 8 && curr_y == 10){}
}


void Quoridor::on_pushButton_0812_clicked()
{
    if(curr_x == 8 && curr_y == 12){}
}


void Quoridor::on_pushButton_0814_clicked()
{
    if(curr_x == 8 && curr_y == 14){}
}


void Quoridor::on_pushButton_0816_clicked()
{
    if(curr_x == 8 && curr_y == 16){}
}


void Quoridor::on_pushButton_1000_clicked()
{
    if(curr_x == 10 && curr_y == 0){}
}


void Quoridor::on_pushButton_1002_clicked()
{
    if(curr_x == 10 && curr_y == 2){}
}


void Quoridor::on_pushButton_1004_clicked()
{
    if(curr_x == 10 && curr_y == 4){}
}


void Quoridor::on_pushButton_1006_clicked()
{
    if(curr_x == 10 && curr_y == 6){}
}


void Quoridor::on_pushButton_1008_clicked()
{
    if(curr_x == 10 && curr_y == 8){}
}


void Quoridor::on_pushButton_1010_clicked()
{
    if(curr_x == 10 && curr_y == 10){}
}


void Quoridor::on_pushButton_1012_clicked()
{
    if(curr_x == 10 && curr_y == 12){}
}


void Quoridor::on_pushButton_1014_clicked()
{
    if(curr_x == 10 && curr_y == 14){}
}


void Quoridor::on_pushButton_1016_clicked()
{
    if(curr_x == 10 && curr_y == 16){}
}


void Quoridor::on_pushButton_1200_clicked()
{
    if(curr_x == 12 && curr_y == 0){}
}


void Quoridor::on_pushButton_1202_clicked()
{
    if(curr_x == 12 && curr_y == 2){}
}


void Quoridor::on_pushButton_1204_clicked()
{
    if(curr_x == 12 && curr_y == 4){}
}


void Quoridor::on_pushButton_1206_clicked()
{
    if(curr_x == 12 && curr_y == 6){}
}


void Quoridor::on_pushButton_1208_clicked()
{
    if(curr_x == 12 && curr_y == 8){}
}


void Quoridor::on_pushButton_1210_clicked()
{
    if(curr_x == 12 && curr_y == 10){}
}


void Quoridor::on_pushButton_1212_clicked()
{
    if(curr_x == 12 && curr_y == 12){}
}


void Quoridor::on_pushButton_1214_clicked()
{
    if(curr_x == 12 && curr_y == 14){}
}


void Quoridor::on_pushButton_1216_clicked()
{
    if(curr_x == 12 && curr_y == 16){}
}


void Quoridor::on_pushButton_1400_clicked()
{
    if(curr_x == 14 && curr_y == 0){}
}


void Quoridor::on_pushButton_1402_clicked()
{
    if(curr_x == 14 && curr_y == 2){}
}


void Quoridor::on_pushButton_1404_clicked()
{
    if(curr_x == 14 && curr_y == 4){}
}


void Quoridor::on_pushButton_1406_clicked()
{
    if(curr_x == 14 && curr_y == 6){}
}


void Quoridor::on_pushButton_1408_clicked()
{
    if(curr_x == 14 && curr_y == 8){}
}


void Quoridor::on_pushButton_1410_clicked()
{
    if(curr_x == 14 && curr_y == 10){}
}


void Quoridor::on_pushButton_1412_clicked()
{
    if(curr_x == 14 && curr_y == 12){}
}


void Quoridor::on_pushButton_1414_clicked()
{
    if(curr_x == 14 && curr_y == 14){}
}


void Quoridor::on_pushButton_1416_clicked()
{
    if(curr_x == 14 && curr_y == 16){}
}


void Quoridor::on_pushButton_1600_clicked()
{
    if(curr_x == 16 && curr_y == 0){}
}


void Quoridor::on_pushButton_1602_clicked()
{
    if(curr_x == 16 && curr_y == 2){}
}


void Quoridor::on_pushButton_1604_clicked()
{
    if(curr_x == 16 && curr_y == 4){}
}


void Quoridor::on_pushButton_1606_clicked()
{
    if(curr_x == 16 && curr_y == 6){}
}


void Quoridor::on_pushButton_1608_clicked()
{
    if(curr_x == 16 && curr_y == 8){}
}


void Quoridor::on_pushButton_1610_clicked()
{
    if(curr_x == 16 && curr_y == 10){}
}


void Quoridor::on_pushButton_1612_clicked()
{
    if(curr_x == 16 && curr_y == 12){}
}


void Quoridor::on_pushButton_1614_clicked()
{
    if(curr_x == 16 && curr_y == 14){}
}


void Quoridor::on_pushButton_1616_clicked()
{
    if(curr_x == 16 && curr_y == 16){}
}


