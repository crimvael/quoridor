#ifndef QUORIDOR_H
#define QUORIDOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Quoridor; }
QT_END_NAMESPACE

class Quoridor : public QMainWindow
{
    Q_OBJECT

public:
    Quoridor(QWidget *parent = nullptr);
    ~Quoridor();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Quoridor *ui;
};
#endif // QUORIDOR_H
