#include "quoridor.h"
#include "ui_quoridor.h"

Quoridor::Quoridor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Quoridor)
{
    ui->setupUi(this);
    ui->frame_2->setVisible(false);
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
}

