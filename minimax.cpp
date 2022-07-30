#include "quoridor.h"
#include "ui_quoridor.h"

extern QList<snap> OUT; extern QString mover;

QList<snap> OUT; QString mover;

void Quoridor::next_move(){

    snap curr(place(player_red.last().y, player_red.last().x), place(player_blue.last().y, player_blue.last().x), 16);
    curr.root_move = "init";
    curr.red_w = walls_red;
    curr.blue_w = walls_blue;

    for (int y=0; y < 17; y++) {
        for (int x=0; x < 17; x++) {
            curr.board[y][x] = board_matrix[y][x];
        }
    }

    ui->treeWidget->clear();

    QTreeWidgetItem *top = new QTreeWidgetItem(ui->treeWidget);
    top->setText(0,"red_turn");
    top->setExpanded(true);

    ui->treeWidget->addTopLevelItem(top);

    minimax(curr, 4, top);

    evaluate();

    snap nextm = best_move(curr);
    snap nextw = best_wall(curr);

    if(mover == "move"){
        next_m = "m " + QString::number(nextm.p2.y) + " " + QString::number(nextm.p2.x);
        ui->label_18->setText("move " + QString::number(nextm.p2.y) + " " + QString::number(nextm.p2.x));
    }

    if(mover == "wall" && check_wall_number() && nextw.current_move != "e"){
        next_m = nextw.current_move;
        ui->label_18->setText(next_m);
    }

    OUT.clear();

    ui->tableWidget_5->resizeColumnsToContents();
    ui->tableWidget_5->resizeRowsToContents();


    if(ui->checkBox->isChecked())
        next_m = nextm.current_move;

    if(ui->checkBox_2->isChecked() && nextw.current_move != "e")
        next_m = nextw.current_move;

}

void Quoridor::minimax(snap s, int n, QTreeWidgetItem* item){

    if(n == 0){
        OUT.append(s);
        return;
    }

    QString move = "";
    QString wall = "";

    snap m = best_move(s);
    snap w = best_wall(s);

    if(n%2 != 0){move = "blue_move: " + m.current_move; wall = "blue_wall: " + w.current_move;}
    if(n%2 == 0){move = "red_move: " + m.current_move; wall = "red_wall: " + w.current_move;}

    if(s.current_move == "e" || w.current_move == "e"){move = "No moves"; wall = "No walls";}

    QTreeWidgetItem *item_right = new QTreeWidgetItem(item);
    if(n==1) item_right->setForeground(0, QColor(255, 0, 0));
    item_right->setText(0, move);
    item_right->setExpanded(true);


    QTreeWidgetItem *item_left = new QTreeWidgetItem(item);
    if(n==1) item_left->setForeground(0, QColor(255, 0, 0));
    item_left->setText(0, wall);
    item_left->setExpanded(true);

    minimax(m, n-1, item_right);
    minimax(w, n-1, item_left);

}

void Quoridor::evaluate(){

    ui->tableWidget_5->setRowCount(0);

    QList<int> diffs;
    int red_dist = 0;
    int blue_dist = 0;
    int index = 0;
    int min = 999;

    for(int n=0; n<OUT.size(); n++){

        for(int n=0; n<OUT.size(); n++){

            if(OUT[n].current_move == "e"){
                OUT.removeAt(n); n--;
            }
        }

        ui->tableWidget_5->insertRow(n);

        QTableWidgetItem* item = new QTableWidgetItem(OUT[n].current_move);
        item->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_5->setItem(n, 0, item);

        for (int y=0; y < 17; y++) {
            for (int x=0; x < 17; x++) {
                board_copy_s[y][x] = OUT[n].board[y][x];
            }
        }

        shortest_path(OUT[n].p1, OUT[n].p2, 16);

        red_dist = distance;

        QTableWidgetItem* item2 = new QTableWidgetItem(QString::number(red_dist));
        item2->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_5->setItem(n, 1, item2);

        for (int y=0; y < 17; y++) {
            for (int x=0; x < 17; x++) {
                board_copy_s[y][x] = OUT[n].board[y][x];
            }
        }

        shortest_path(OUT[n].p2, OUT[n].p1, 0);

        blue_dist = distance;

        QTableWidgetItem* item3 = new QTableWidgetItem(QString::number(blue_dist));
        item3->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_5->setItem(n, 2, item3);

        diffs.append(red_dist - blue_dist);

    }

    for(int n=0; n<diffs.size(); n++){

        QTableWidgetItem* item4 = new QTableWidgetItem(QString::number(diffs[n]));
        item4->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_5->setItem(n, 3, item4);

        if(diffs[n] < min){
            min = diffs[n];
            index = n;
        }
    }

    ui->label_15->setText(QString::number(min));
    ui->label_16->setText(QString::number(index));

    if(OUT[index].root_move == "move")
        mover = "move";
    if(OUT[index].root_move == "wall")
        mover = "wall";

}

snap Quoridor::best_move(snap s){

    if(s.current_move == "e")
        return s;

    if(s.root_move == "init")
        s.root_move = "move";

    QList<place> near_nodes;
    int shortest = 999;
    int yy = 0; int xx = 0;

    int up[] = {-1,-1};
    int down[] = {-1,-1};
    int left[] = {-1,-1};
    int right[] = {-1,-1};

    int jump_left[] = {-1,-1};
    int jump_right[] = {-1,-1};


    if(s.p1.x > 0 && s.board[s.p1.y][s.p1.x-1] != 1){
        left[0] = s.p1.y; left[1] = s.p1.x -2;}

    if(s.p1.y > 0  && s.board[s.p1.y-1][s.p1.x] != 1){
        up[0] = s.p1.y -2; up[1] = s.p1.x;}

    if(s.p1.x < 16 && s.board[s.p1.y][s.p1.x+1] != 1){
        right[0] = s.p1.y; right[1] = s.p1.x +2;}

    if(s.p1.y < 16 && s.board[s.p1.y+1][s.p1.x] != 1){
        down[0] = s.p1.y +2; down[1] = s.p1.x;}



    if(s.p1.y == s.p2.y && s.p1.x-2 == s.p2.x && s.board[s.p1.y][s.p1.x-1] != 1){
        left[0] = -1; left[1] = -1;
        if(s.board[s.p1.y][s.p1.x-3] != 1 && s.p1.x > 2){
            left[0] = s.p1.y; left[1] = s.p1.x-4;}
        if(s.board[s.p1.y][s.p1.x-3] == 1 || s.p1.x == 2){
            if(s.board[s.p1.y-1][s.p1.x-2] != 1 && s.p1.y > 0){
                jump_right[0] = s.p1.y-2; jump_right[1] = s.p1.x-2;}
            if(s.board[s.p1.y+1][s.p1.x-2] != 1 && s.p1.y < 16){
                jump_left[0] = s.p1.y+2; jump_left[1] = s.p1.x-2;}}}


    if(s.p1.y-2 == s.p2.y && s.p1.x == s.p2.x && s.board[s.p1.y-1][s.p1.x] != 1){
        up[0] = -1; up[1] = -1;
        if(s.board[s.p1.y-3][s.p1.x] != 1 && s.p1.y > 2){
            up[0] = s.p1.y-4; up[1] = s.p1.x;}
        if(s.board[s.p1.y-3][s.p1.x] == 1 || s.p1.y == 2){
            if(s.board[s.p1.y-2][s.p1.x+1] != 1 && s.p1.x < 16){
                jump_right[0] = s.p1.y-2; jump_right[1] = s.p1.x+2;}
            if(s.board[s.p1.y-2][s.p1.x-1] != 1 && s.p1.x > 0){
                jump_left[0] = s.p1.y-2; jump_left[1] = s.p1.x-2;}}}


    if(s.p1.y == s.p2.y && s.p1.x+2 == s.p2.x && s.board[s.p1.y][s.p1.x+1] != 1){
        right[0] = -1; right[1] = -1;
        if(s.board[s.p1.y][s.p1.x+3] != 1 && s.p1.x < 14){
            right[0] = s.p1.y; right[1] = s.p1.x+4;}
        if(s.board[s.p1.y][s.p1.x+3] == 1 || s.p1.x == 14){
            if(s.board[s.p1.y+1][s.p1.x+2] != 1 && s.p1.y < 16){
                jump_right[0] = s.p1.y+2; jump_right[1] = s.p1.x+2;}
            if(s.board[s.p1.y-1][s.p1.x+2] != 1 && s.p1.y > 0){
                jump_left[0] = s.p1.y-2; jump_left[1] = s.p1.x+2;}}}


    if(s.p1.y+2 == s.p2.y && s.p1.x == s.p2.x && s.board[s.p1.y+1][s.p1.x] != 1){
        down[0] = -1; down[1] = -1;
        if(s.board[s.p1.y+3][s.p1.x] != 1 && s.p1.y < 14){
            down[0] = s.p1.y+4; down[1] = s.p1.x;}
        if(s.board[s.p1.y+3][s.p1.x] == 1 || s.p1.y == 14){
            if(s.board[s.p1.y+2][s.p1.x+1] != 1 && s.p1.x < 16){
                jump_right[0] = s.p1.y+2; jump_right[1] = s.p1.x+2;}
            if(s.board[s.p1.y+2][s.p1.x-1] != 1 && s.p1.x > 0){
                jump_left[0] = s.p1.y+2; jump_left[1] = s.p1.x-2;}}}


    if(up[0] != -1){
        near_nodes.append(place(up[0], up[1]));
    }
    if(down[0] != -1){
        near_nodes.append(place(down[0], down[1]));
    }
    if(left[0] != -1){
        near_nodes.append(place(left[0], left[1]));
    }
    if(right[0] != -1){
        near_nodes.append(place(right[0], right[1]));
    }
    if(jump_left[0] != -1){
        near_nodes.append(place(jump_left[0], jump_left[1]));
    }
    if(jump_right[0] != -1){
        near_nodes.append(place(jump_right[0], jump_right[1]));
    }


    if(!near_nodes.isEmpty()){
        for(int i=0; i < near_nodes.size(); i++){
            for (int y=0; y < 17; y++) {
                for (int x=0; x < 17; x++) {
                    board_copy_s[y][x] = s.board[y][x];
                }
            }

            if(s.goal == 16){
                shortest_path(place(near_nodes[i].y, near_nodes[i].x), s.p2, 16);
            }
            if(s.goal == 0){
                shortest_path(place(near_nodes[i].y, near_nodes[i].x), s.p2, 0);
            }

            if(distance < shortest){
                shortest = distance;
                yy = near_nodes[i].y;
                xx = near_nodes[i].x;
            }
        }
    }



    if(s.goal == 16){

        snap next(s.p2, place(yy, xx), 0);
        next.root_move = s.root_move;
        next.current_move = "m " + QString::number(yy) + " " + QString::number(xx);

        for (int y=0; y < 17; y++) {
            for (int x=0; x < 17; x++) {
                next.board[y][x] = s.board[y][x];
            }
        }

        return next;
    }

    if(s.goal == 0){

        snap next(s.p2, place(yy, xx), 16);
        next.root_move = s.root_move;
        next.current_move = "m " + QString::number(yy) + " " + QString::number(xx);

        for (int y=0; y < 17; y++) {
            for (int x=0; x < 17; x++) {
                next.board[y][x] = s.board[y][x];
            }
        }

        return next;
    }

    s.current_move = "e";

    return s;

}

snap Quoridor::best_wall(snap s){

    if(s.current_move == "e")
        return s;

    if(s.root_move == "init")
        s.root_move = "wall";

    int longest = 0;
    int yy = 99;
    int xx = 99;
    QString hv;

    for (int y=0; y<17; y++) {
        for (int x=0; x<17; x++) {
            board_copy_s[y][x] = s.board[y][x];
        }
    }

    if(s.goal == 0)
        shortest_path(s.p1, s.p2, 16);

    if(s.goal == 16)
        shortest_path(s.p2, s.p1, 0);


    longest = distance;

    for (int y=s.p2.y-6; y<15; y++) {
        for (int x=s.p2.x-6; x<15; x++) {
            if(y >= 0 && x >= 0){
                if(y%2 == 0 && x%2 != 0)
                    if(s.board[y][x] != 1 && s.board[y+1][x] != 1 && s.board[y+2][x] != 1){
                        for (int y=0; y<17; y++) {
                            for (int x=0; x<17; x++) {
                                board_copy_1[y][x] = s.board[y][x];
                                board_copy_2[y][x] = s.board[y][x];
                                board_copy_s[y][x] = s.board[y][x];
                            }
                        }
                        board_copy_1[y][x] = 1; board_copy_1[y+1][x] = 1; board_copy_1[y+2][x] = 1;
                        board_copy_2[y][x] = 1; board_copy_2[y+1][x] = 1; board_copy_2[y+2][x] = 1;

                        if(s.goal == 0){
                            check_placeble_1(s.p1.y, s.p1.x); check_placeble_2(s.p2.y, s.p2.x);
                        }
                        if(s.goal == 16){
                            check_placeble_1(s.p2.y, s.p2.x); check_placeble_2(s.p1.y, s.p1.x);
                        }

                        if(placeble_1 && placeble_2){
                            board_copy_s[y][x] = 1; board_copy_s[y+1][x] = 1; board_copy_s[y+2][x] = 1;

                            if(s.goal == 0){
                                shortest_path(s.p1, s.p2, 16);
                            }
                            if(s.goal == 16){
                                shortest_path(s.p2, s.p1, 0);
                            }

                            if(distance > longest){
                                longest = distance;
                                yy = y;
                                xx = x;
                                hv = "v";
                            }
                            placeble_1 = false; placeble_2 = false;
                        }
                    }

                if(x%2 == 0 && y%2 != 0)
                    if(s.board[y][x] != 1 && s.board[y][x+1] != 1 && s.board[y][x+2] != 1){
                        for (int y=0; y<17; y++) {
                            for (int x=0; x<17; x++) {
                                board_copy_1[y][x] = s.board[y][x];
                                board_copy_2[y][x] = s.board[y][x];
                                board_copy_s[y][x] = s.board[y][x];
                            }
                        }
                        board_copy_1[y][x] = 1; board_copy_1[y][x+1] = 1; board_copy_1[y][x+2] = 1;
                        board_copy_2[y][x] = 1; board_copy_2[y][x+1] = 1; board_copy_2[y][x+2] = 1;

                        if(s.goal == 0){
                            check_placeble_1(s.p1.y, s.p1.x); check_placeble_2(s.p2.y, s.p2.x);
                        }
                        if(s.goal == 16){
                            check_placeble_1(s.p2.y, s.p2.x); check_placeble_2(s.p1.y, s.p1.x);
                        }

                        if(placeble_1 && placeble_2){
                            board_copy_s[y][x] = 1; board_copy_s[y][x+1] = 1; board_copy_s[y][x+2] = 1;

                            if(s.goal == 0){
                                shortest_path(s.p1, s.p2, 16);
                            }
                            if(s.goal == 16){
                                shortest_path(s.p2, s.p1, 0);
                            }

                            if(distance > longest){
                                longest = distance;
                                yy = y;
                                xx = x;
                                hv = "h";
                            }
                            placeble_1 = false; placeble_2 = false;
                        }
                    }
            }
        }
    }


    if(hv == "v"){

        snap next(s.p1, s.p2, 0);

        next.root_move = s.root_move;

        if(s.goal == 0){
            next.goal = 16; next.p1 = s.p2; next.p2 = s.p1;
        }
        if(s.goal == 16){
            next.goal = 0; next.p1 = s.p2; next.p2 = s.p1;
        }

        if(s.board[yy][xx] != 1 && s.board[yy+1][xx] != 1 && s.board[yy+2][xx] != 1){
            for (int y=0; y < 17; y++) {
                for (int x=0; x < 17; x++) {
                    board_copy_1[y][x] = s.board[y][x];
                    board_copy_2[y][x] = s.board[y][x];
                    next.board[y][x] = s.board[y][x];
                }
            }

            board_copy_1[yy][xx] = 1; board_copy_1[yy+1][xx] = 1; board_copy_1[yy+2][xx] = 1;
            board_copy_2[yy][xx] = 1; board_copy_2[yy+1][xx] = 1; board_copy_2[yy+2][xx] = 1;

            if(s.goal == 0){
                check_placeble_1(s.p1.y, s.p1.x); check_placeble_2(s.p2.y, s.p2.x);
            }
            if(s.goal == 16){
                check_placeble_1(s.p2.y, s.p2.x); check_placeble_2(s.p1.y, s.p1.x);
            }

            if(placeble_1 && placeble_2){

                next.board[yy][xx] = 1; next.board[yy+1][xx] = 1; next.board[yy+2][xx] = 1;
                next.current_move = hv + " " + QString::number(yy) + " " + QString::number(xx);
                placeble_1 = false; placeble_2 = false;

                return next;
            }
        }
    }

    if(hv == "h"){

        snap next(s.p1, s.p2, 0);
        next.root_move = s.root_move;

        if(s.goal == 0){
            next.goal = 16; next.p1 = s.p2; next.p2 = s.p1;
        }
        if(s.goal == 16){
            next.goal = 0; next.p1 = s.p2; next.p2 = s.p1;
        }

        if(s.board[yy][xx] != 1 && s.board[yy][xx+1] != 1 && s.board[yy][xx+2] != 1){
            for (int y=0; y < 17; y++) {
                for (int x=0; x < 17; x++) {
                    board_copy_1[y][x] = s.board[y][x];
                    board_copy_2[y][x] = s.board[y][x];
                    next.board[y][x] = s.board[y][x];
                }
            }

            board_copy_1[yy][xx] = 1; board_copy_1[yy][xx+1] = 1; board_copy_1[yy][xx+2] = 1;
            board_copy_2[yy][xx] = 1; board_copy_2[yy][xx+1] = 1; board_copy_2[yy][xx+2] = 1;

            if(s.goal == 0){
                check_placeble_1(s.p1.y, s.p1.x); check_placeble_2(s.p2.y, s.p2.x);
            }
            if(s.goal == 16){
                check_placeble_1(s.p2.y, s.p2.x); check_placeble_2(s.p1.y, s.p1.x);
            }

            if(placeble_1 && placeble_2){

                next.board[yy][xx] = 1; next.board[yy][xx+1] = 1; next.board[yy][xx+2] = 1;
                next.current_move = hv + " " + QString::number(yy) + " " + QString::number(xx);
                placeble_1 = false; placeble_2 = false;

                return next;
            }
        }
    }

    snap next(s.p1, s.p2, 16);
    next.root_move = s.root_move;

    for (int y=0; y < 17; y++) {
        for (int x=0; x < 17; x++) {
            next.board[y][x] = s.board[y][x];
        }
    }

    next.current_move = "e";

    return next;

}
