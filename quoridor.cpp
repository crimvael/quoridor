#include "quoridor.h"
#include "ui_quoridor.h"

Quoridor::Quoridor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Quoridor)
{
    ui->setupUi(this);
}

Quoridor::~Quoridor()
{
    delete ui;
}

