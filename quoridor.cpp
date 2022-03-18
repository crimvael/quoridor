#include "quoridor.h"
#include "ui_quoridor.h"
#include <QMouseEvent>
#include <QPoint>
#include <QPainter>
#include <QHoverEvent>

extern bool start;
bool start = false;


Quoridor::Quoridor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Quoridor)
{
    ui->setupUi(this);
    ui->frame_2->setVisible(false);
    ui->pushButton_6->setFocusPolicy(Qt::ClickFocus);

}

void Quoridor::mouseMoveEvent(QMouseEvent *event){
    if(start){
        int n = event->position().x();
        ui->label_2->setText(QString::number(n));
        if(n > 500){
            ui->pushButton_6->setEnabled(false);
        }
        else
            ui->pushButton_6->setEnabled(true);
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

