#ifndef QUORIDOR_H
#define QUORIDOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Quoridor; }
QT_END_NAMESPACE

struct place {
    int y;
    int x;

    place(int yy, int xx) : y(yy), x(xx) {}
};

struct snap {
    place p1;
    place p2;
    int goal;
    QString move;
    QString wall;
    int board[17][17];

    snap(place pp1, place pp2, int g) : p1(pp1), p2(pp2), goal(g) {}
};

extern bool ai; extern bool start; extern bool show_wall; extern bool wall_unlocked;
extern bool placeble_1; extern bool placeble_2;
extern int curr_position[]; extern int wall_position[];
extern bool BLUE; extern bool RED;
extern int walls_blue; extern int walls_red; extern bool move_select; extern bool placeble;
extern QList<place> player_blue; extern QList<place> player_red; extern QList<place> vertical_walls; extern QList<place> horizontal_walls; extern QList<QString> moves;
extern int board_matrix[17][17]; extern int board_copy_1[17][17]; extern int board_copy_2[17][17]; extern int board_copy_s[17][17];
extern int distance; extern int final_y; extern int final_x; extern QString next_m;

class Quoridor : public QMainWindow
{
    Q_OBJECT

public:
    Quoridor(QWidget *parent = nullptr);
    void mouseMoveEvent(QMouseEvent *event);
    ~Quoridor();

private slots:

    void ai_wall(QString);

    void next_move();

    snap best_move(snap s);

    snap best_wall(snap s);

    void minimax();

    void evaluate();

    bool check_wall_number();

    void shortest_path(place, place, int);

    void find_nodes(QList<place>, place, int, int);

    QList<place> find_near(place, place);

    void check_placeble_1(int, int);

    void check_placeble_2(int, int);

    void paintEvent(QPaintEvent *);

    void mousePressEvent(QMouseEvent *event);

    void on_newGameButton_clicked();

    void find_moves();

    void reset_buttons();

    void game_manager();

    void set_players(int, int, int);

    void remove_pawn(int, int);

    void on_pushButton_0000_clicked();
    void on_pushButton_0002_clicked();
    void on_pushButton_0004_clicked();
    void on_pushButton_0006_clicked();
    void on_pushButton_0008_clicked();
    void on_pushButton_0010_clicked();
    void on_pushButton_0012_clicked();
    void on_pushButton_0014_clicked();
    void on_pushButton_0016_clicked();
    void on_pushButton_0200_clicked();
    void on_pushButton_0202_clicked();
    void on_pushButton_0204_clicked();
    void on_pushButton_0206_clicked();
    void on_pushButton_0208_clicked();
    void on_pushButton_0210_clicked();
    void on_pushButton_0212_clicked();
    void on_pushButton_0214_clicked();
    void on_pushButton_0216_clicked();
    void on_pushButton_0400_clicked();
    void on_pushButton_0402_clicked();
    void on_pushButton_0404_clicked();
    void on_pushButton_0406_clicked();
    void on_pushButton_0408_clicked();
    void on_pushButton_0410_clicked();
    void on_pushButton_0412_clicked();
    void on_pushButton_0414_clicked();
    void on_pushButton_0416_clicked();
    void on_pushButton_0600_clicked();
    void on_pushButton_0602_clicked();
    void on_pushButton_0604_clicked();
    void on_pushButton_0606_clicked();
    void on_pushButton_0608_clicked();
    void on_pushButton_0610_clicked();
    void on_pushButton_0612_clicked();
    void on_pushButton_0614_clicked();
    void on_pushButton_0616_clicked();
    void on_pushButton_0800_clicked();
    void on_pushButton_0802_clicked();
    void on_pushButton_0804_clicked();
    void on_pushButton_0806_clicked();
    void on_pushButton_0808_clicked();
    void on_pushButton_0810_clicked();
    void on_pushButton_0812_clicked();
    void on_pushButton_0814_clicked();
    void on_pushButton_0816_clicked();
    void on_pushButton_1000_clicked();
    void on_pushButton_1002_clicked();
    void on_pushButton_1004_clicked();
    void on_pushButton_1006_clicked();
    void on_pushButton_1008_clicked();
    void on_pushButton_1010_clicked();
    void on_pushButton_1012_clicked();
    void on_pushButton_1014_clicked();
    void on_pushButton_1016_clicked();
    void on_pushButton_1200_clicked();
    void on_pushButton_1202_clicked();
    void on_pushButton_1204_clicked();
    void on_pushButton_1206_clicked();
    void on_pushButton_1208_clicked();
    void on_pushButton_1210_clicked();
    void on_pushButton_1212_clicked();
    void on_pushButton_1214_clicked();
    void on_pushButton_1216_clicked();
    void on_pushButton_1400_clicked();
    void on_pushButton_1402_clicked();
    void on_pushButton_1404_clicked();
    void on_pushButton_1406_clicked();
    void on_pushButton_1408_clicked();
    void on_pushButton_1410_clicked();
    void on_pushButton_1412_clicked();
    void on_pushButton_1414_clicked();
    void on_pushButton_1416_clicked();
    void on_pushButton_1600_clicked();
    void on_pushButton_1602_clicked();
    void on_pushButton_1604_clicked();
    void on_pushButton_1606_clicked();
    void on_pushButton_1608_clicked();
    void on_pushButton_1610_clicked();
    void on_pushButton_1612_clicked();
    void on_pushButton_1614_clicked();
    void on_pushButton_1616_clicked();

    void on_undoButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

private:
    Ui::Quoridor *ui;
};
#endif // QUORIDOR_H
