#include "quoridor.h"
#include "ui_quoridor.h"

QList<snap> final_moves;


// Determine the next move to perform
void Quoridor::next_move(){

    ui->treeWidget->clear();
    ui->tableWidget_5->setRowCount(0);

    snap curr(place(player_red.last().y, player_red.last().x), place(player_blue.last().y, player_blue.last().x));
    curr.root_move = "init";
    curr.red_w = walls_red;
    curr.blue_w = walls_blue;
    curr.goal = 16;

    for (int y=0; y < 17; y++) {
        for (int x=0; x < 17; x++) {
            curr.board[y][x] = board_matrix[y][x];
        }
    }

    if(ui->checkBox->isChecked()){
        next_m = best_move(curr).current_move; return;
    }

    if(ui->checkBox_2->isChecked() && best_wall(curr).current_move != "e"){
        next_m = best_wall(curr).current_move; return;
    }


    QTreeWidgetItem *top = new QTreeWidgetItem(ui->treeWidget);
    top->setText(0,"RED_turn");
    top->setExpanded(true);

    ui->treeWidget->addTopLevelItem(top);

    minimax(curr, 0, top);
    evaluate();

    ui->treeWidget->resizeColumnToContents(0);
    ui->tableWidget_5->resizeColumnsToContents();
    ui->tableWidget_5->resizeRowsToContents();

}

// Find all possible combinations of moves
void Quoridor::minimax(snap s, int n, QTreeWidgetItem* item){

    if(n == ui->comboBox->currentText().toInt()){
        final_moves.append(s);
        return;
    }

    QString move = "";
    QString wall = "";

    snap m = best_move(s);
    snap w = best_wall(s);

    if(n%2 != 0){move = "BLUE_move: " + m.current_move; wall = "BLUE_wall: " + w.current_move;}
    if(n%2 == 0){move = "RED_move: " + m.current_move; wall = "RED_wall: " + w.current_move;}

    if(w.current_move == "e") wall = "No wall";
    if(s.current_move == "e") move = "No move";

    QTreeWidgetItem *item_right = new QTreeWidgetItem(item);
    QTreeWidgetItem *item_left = new QTreeWidgetItem(item);

    if(n == ui->comboBox->currentText().toInt()-1) {

        item_right->setForeground(0, QColor(0, 200, 0));
        item_left->setForeground(0, QColor(0, 200, 0));

        if(s.current_move == "e")
            item_right->setForeground(0, QColor(200, 0, 0));

        if(w.current_move == "e")
            item_left->setForeground(0, QColor(200, 0, 0));

    }

    item_right->setText(0, move);
    item_left->setText(0, wall);
    item_right->setExpanded(true);
    item_left->setExpanded(true);

    minimax(m, n+1, item_right);
    minimax(w, n+1, item_left);

}

// Evaluate each move and find the best one
void Quoridor::evaluate(){

    int diff = 999;
    int red_dist = 0;
    int blue_dist = 0;
    int index = 0;
    int min = 999;

    for(int n=0; n<final_moves.size(); n++){

        for(int n=0; n<final_moves.size(); n++){

            if(final_moves[n].current_move == "e"){
                final_moves.removeAt(n);
                n--;
            }
        }

        for (int y=0; y < 17; y++) {
            for (int x=0; x < 17; x++) {
                board_copy_s[y][x] = final_moves[n].board[y][x];
            }
        }

        if(ui->comboBox->currentText().toInt()%2 == 0){
            shortest_path(final_moves[n].p1, final_moves[n].p2, 16);
        }
        else{
            shortest_path(final_moves[n].p2, final_moves[n].p1, 16);
        }

        red_dist = distance;

        for (int y=0; y < 17; y++) {
            for (int x=0; x < 17; x++) {
                board_copy_s[y][x] = final_moves[n].board[y][x];
            }
        }

        if(ui->comboBox->currentText().toInt()%2 == 0){
            shortest_path(final_moves[n].p2, final_moves[n].p1, 0);
        }
        else{
            shortest_path(final_moves[n].p1, final_moves[n].p2, 0);
        }

        blue_dist = distance;

        diff = red_dist - blue_dist;

        ui->tableWidget_5->insertRow(n);

        QTableWidgetItem* item = new QTableWidgetItem(final_moves[n].current_move);
        item->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_5->setItem(n, 0, item);

        QTableWidgetItem* item2 = new QTableWidgetItem(QString::number(red_dist));
        item2->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_5->setItem(n, 1, item2);

        QTableWidgetItem* item3 = new QTableWidgetItem(QString::number(blue_dist));
        item3->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_5->setItem(n, 2, item3);

        QTableWidgetItem* item4 = new QTableWidgetItem(QString::number(diff));
        item4->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_5->setItem(n, 3, item4);

        QTableWidgetItem* item5 = new QTableWidgetItem(final_moves[n].root_move);
        item5->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_5->setItem(n, 4, item5);

        if(blue_dist == 999 || red_dist == 999)
            continue;

        if(diff < min){
            min = diff;
            index = n;
        }

    }

    ui->label_15->setText(QString::number(min));
    ui->label_16->setText(QString::number(index));


    next_m = final_moves[index].root_move;

    final_moves.clear();

}

// Find the best next move position
snap Quoridor::best_move(snap s){

    if(s.current_move == "e")
        return s;

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



    snap next(s.p2, place(yy, xx));

    if(s.goal == 16)
        next.goal = 0;
    if(s.goal == 0)
        next.goal = 16;

    next.current_move = "m " + QString::number(yy) + " " + QString::number(xx);

    if(s.root_move == "init")
        s.root_move = next.current_move;
    next.root_move = s.root_move;

    for (int y=0; y < 17; y++) {
        for (int x=0; x < 17; x++) {
            next.board[y][x] = s.board[y][x];
        }
    }

    return next;

}

// Find the best next wall to place
snap Quoridor::best_wall(snap s){

    if(s.current_move == "e")
        return s;

    if((s.blue_w == 0 && s.goal == 0) || (s.red_w == 0 && s.goal == 16)){
        snap no_wall(place(0,0), place(0,0));
        no_wall.current_move = "e";
        return no_wall;
    }


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

    for (int y=0; y<15; y++) {
        for (int x=0; x<15; x++) {
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

                            if(distance >= longest){
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

                            if(distance >= longest){
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

        snap next(s.p1, s.p2);

        if(s.goal == 0){
            next.goal = 16; next.p1 = s.p2; next.p2 = s.p1; s.blue_w--;
        }
        if(s.goal == 16){
            next.goal = 0; next.p1 = s.p2; next.p2 = s.p1; s.red_w--;
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

                placeble_1 = false; placeble_2 = false;

                next.board[yy][xx] = 1; next.board[yy+1][xx] = 1; next.board[yy+2][xx] = 1;

                next.current_move = hv + " " + QString::number(yy) + " " + QString::number(xx);

                if(s.root_move == "init")
                    s.root_move = next.current_move;

                next.root_move = s.root_move;

                return next;
            }
        }
    }

    if(hv == "h"){

        snap next(s.p1, s.p2);
        next.root_move = s.root_move;

        if(s.goal == 0){
            next.goal = 16; next.p1 = s.p2; next.p2 = s.p1; s.blue_w--;
        }
        if(s.goal == 16){
            next.goal = 0; next.p1 = s.p2; next.p2 = s.p1; s.red_w--;
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

                placeble_1 = false; placeble_2 = false;

                next.board[yy][xx] = 1; next.board[yy][xx+1] = 1; next.board[yy][xx+2] = 1;
                next.current_move = hv + " " + QString::number(yy) + " " + QString::number(xx);

                if(s.root_move == "init")
                    s.root_move = next.current_move;

                next.root_move = s.root_move;

                return next;
            }
        }
    }

    snap next(s.p1, s.p2);
    next.root_move = s.root_move;
    next.current_move = "e";

    return next;

}
