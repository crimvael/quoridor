#include "quoridor.h"
#include "ui_quoridor.h"
#include <QMouseEvent>
#include <QPoint>
#include <QPainter>
#include <QHoverEvent>

extern bool start;
extern int curr_position[];
bool start = false;
int curr_position[] = {0,0};


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


