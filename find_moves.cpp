#include "quoridor.h"
#include "ui_quoridor.h"


void Quoridor::find_moves()
{
    move_select = true;

    int y = curr_position[0];
    int x = curr_position[1];
    int opp_y = 99;
    int opp_x = 99;

    int up[] = {-1,-1};
    int down[] = {-1,-1};
    int left[] = {-1,-1};
    int right[] = {-1,-1};

    int jump_left[] = {-1,-1};
    int jump_right[] = {-1,-1};


    if(BLUE){
        opp_y = player_red.last().y;
        opp_x = player_red.last().x;
    }

    if(RED){
        opp_y = player_blue.last().y;
        opp_x = player_blue.last().x;
    }

    if(x > 0 && board_matrix[y][x-1] != 1){
        left[0] = y; left[1] = x -2;}

    if(y > 0  && board_matrix[y-1][x] != 1){
        up[0] = y -2; up[1] = x;}

    if(x < 16 && board_matrix[y][x+1] != 1){
        right[0] = y; right[1] = x +2;}

    if(y < 16 && board_matrix[y+1][x] != 1){
        down[0] = y +2; down[1] = x;}



    if(y == opp_y && x-2 == opp_x && board_matrix[y][x-1] != 1){
        left[0] = -1; left[1] = -1;
        if(board_matrix[y][x-3] != 1 && x > 2){
            left[0] = y; left[1] = x-4;}
        if(board_matrix[y][x-3] == 1 && y > 0 && y < 16){
            if(board_matrix[y-1][x-2] != 1){
                jump_right[0] = y-2; jump_right[1] = x-2;}
            if(board_matrix[y+1][x-2] != 1){
                jump_left[0] = y+2; jump_left[1] = x-2;}}}


    if(y-2 == opp_y && x == opp_x && board_matrix[y-1][x] != 1){
        up[0] = -1; up[1] = -1;
        if(board_matrix[y-3][x] != 1 && y > 2 && board_matrix[y-1][x] != 1){
            up[0] = y-4; up[1] = x;}
        if(board_matrix[y-3][x] == 1 && x > 0 && x < 16){
            if(board_matrix[y-2][x+1] != 1){
                jump_right[0] = y-2; jump_right[1] = x+2;}
            if(board_matrix[y-2][x-1] != 1){
                jump_left[0] = y-2; jump_left[1] = x-2;}}}


    if(y == opp_y && x+2 == opp_x && board_matrix[y][x+1] != 1){
        right[0] = -1; right[1] = -1;
        if(board_matrix[y][x+3] != 1 && x < 14){
            right[0] = y; right[1] = x+4;}
        if(board_matrix[y][x+3] == 1 && y > 0 && y < 16){
            if(board_matrix[y+1][x+2] != 1){
                jump_right[0] = y+2; jump_right[1] = x+2;}
            if(board_matrix[y-1][x+2] != 1){
                jump_left[0] = y-2; jump_left[1] = x+2;}}}


    if(y+2 == opp_y && x == opp_x && board_matrix[y+1][x] != 1){
        down[0] = -1; down[1] = -1;
        if(board_matrix[y+3][x] != 1 && y < 14){
            down[0] = y+4; down[1] = x;}
        if(board_matrix[y+3][x] == 1 && x > 0 && x < 16){
            if(board_matrix[y+2][x-1] != 1){
                jump_right[0] = y+2; jump_right[1] = x-2;}
            if(board_matrix[y+2][x+1] != 1){
                jump_left[0] = y+2; jump_left[1] = x+2;}}}



    if ((y == 0 && x == 0) || (left[0] == 0 && left[1] == 0) || (up[0] == 0 && up[1] == 0) || (right[0] == 0 && right[1] == 0) || (down[0] == 0 && down[1] == 0) || (jump_left[0] == 0 && jump_left[1] == 0) || (jump_right[0] == 0 && jump_right[1] == 0))
        ui->pushButton_0000->setEnabled(true); else ui->pushButton_0000->setEnabled(false);

    if ((y == 0 && x == 2) || (left[0] == 0 && left[1] == 2) || (up[0] == 0 && up[1] == 2) || (right[0] == 0 && right[1] == 2) || (down[0] == 0 && down[1] == 2) || (jump_left[0] == 0 && jump_left[1] == 2) || (jump_right[0] == 0 && jump_right[1] == 2))
        ui->pushButton_0002->setEnabled(true); else ui->pushButton_0002->setEnabled(false);

    if ((y == 0 && x == 4) || (left[0] == 0 && left[1] == 4) || (up[0] == 0 && up[1] == 4) || (right[0] == 0 && right[1] == 4) || (down[0] == 0 && down[1] == 4) || (jump_left[0] == 0 && jump_left[1] == 4) || (jump_right[0] == 0 && jump_right[1] == 4))
        ui->pushButton_0004->setEnabled(true); else ui->pushButton_0004->setEnabled(false);

    if ((y == 0 && x == 6) || (left[0] == 0 && left[1] == 6) || (up[0] == 0 && up[1] == 6) || (right[0] == 0 && right[1] == 6) || (down[0] == 0 && down[1] == 6) || (jump_left[0] == 0 && jump_left[1] == 6) || (jump_right[0] == 0 && jump_right[1] == 6))
        ui->pushButton_0006->setEnabled(true); else ui->pushButton_0006->setEnabled(false);

    if ((y == 0 && x == 8) || (left[0] == 0 && left[1] == 8) || (up[0] == 0 && up[1] == 8) || (right[0] == 0 && right[1] == 8) || (down[0] == 0 && down[1] == 8) || (jump_left[0] == 0 && jump_left[1] == 8) || (jump_right[0] == 0 && jump_right[1] == 8))
        ui->pushButton_0008->setEnabled(true); else ui->pushButton_0008->setEnabled(false);

    if ((y == 0 && x == 10) || (left[0] == 0 && left[1] == 10) || (up[0] == 0 && up[1] == 10) || (right[0] == 0 && right[1] == 10) || (down[0] == 0 && down[1] == 10) || (jump_left[0] == 0 && jump_left[1] == 10) || (jump_right[0] == 0 && jump_right[1] == 10))
        ui->pushButton_0010->setEnabled(true); else ui->pushButton_0010->setEnabled(false);

    if ((y == 0 && x == 12) || (left[0] == 0 && left[1] == 12) || (up[0] == 0 && up[1] == 12) || (right[0] == 0 && right[1] == 12) || (down[0] == 0 && down[1] == 12) || (jump_left[0] == 0 && jump_left[1] == 12) || (jump_right[0] == 0 && jump_right[1] == 12))
        ui->pushButton_0012->setEnabled(true); else ui->pushButton_0012->setEnabled(false);

    if ((y == 0 && x == 14) || (left[0] == 0 && left[1] == 14) || (up[0] == 0 && up[1] == 14) || (right[0] == 0 && right[1] == 14) || (down[0] == 0 && down[1] == 14) || (jump_left[0] == 0 && jump_left[1] == 14) || (jump_right[0] == 0 && jump_right[1] == 14))
        ui->pushButton_0014->setEnabled(true); else ui->pushButton_0014->setEnabled(false);

    if ((y == 0 && x == 16) || (left[0] == 0 && left[1] == 16) || (up[0] == 0 && up[1] == 16) || (right[0] == 0 && right[1] == 16) || (down[0] == 0 && down[1] == 16) || (jump_left[0] == 0 && jump_left[1] == 16) || (jump_right[0] == 0 && jump_right[1] == 16))
        ui->pushButton_0016->setEnabled(true); else ui->pushButton_0016->setEnabled(false);

    if ((y == 2 && x == 0) || (left[0] == 2 && left[1] == 0) || (up[0] == 2 && up[1] == 0) || (right[0] == 2 && right[1] == 0) || (down[0] == 2 && down[1] == 0) || (jump_left[0] == 2 && jump_left[1] == 0) || (jump_right[0] == 2 && jump_right[1] == 0))
        ui->pushButton_0200->setEnabled(true); else ui->pushButton_0200->setEnabled(false);

    if ((y == 2 && x == 2) || (left[0] == 2 && left[1] == 2) || (up[0] == 2 && up[1] == 2) || (right[0] == 2 && right[1] == 2) || (down[0] == 2 && down[1] == 2) || (jump_left[0] == 2 && jump_left[1] == 2) || (jump_right[0] == 2 && jump_right[1] == 2))
        ui->pushButton_0202->setEnabled(true); else ui->pushButton_0202->setEnabled(false);

    if ((y == 2 && x == 4) || (left[0] == 2 && left[1] == 4) || (up[0] == 2 && up[1] == 4) || (right[0] == 2 && right[1] == 4) || (down[0] == 2 && down[1] == 4) || (jump_left[0] == 2 && jump_left[1] == 4) || (jump_right[0] == 2 && jump_right[1] == 4))
        ui->pushButton_0204->setEnabled(true); else ui->pushButton_0204->setEnabled(false);

    if ((y == 2 && x == 6) || (left[0] == 2 && left[1] == 6) || (up[0] == 2 && up[1] == 6) || (right[0] == 2 && right[1] == 6) || (down[0] == 2 && down[1] == 6) || (jump_left[0] == 2 && jump_left[1] == 6) || (jump_right[0] == 2 && jump_right[1] == 6))
        ui->pushButton_0206->setEnabled(true); else ui->pushButton_0206->setEnabled(false);

    if ((y == 2 && x == 8) || (left[0] == 2 && left[1] == 8) || (up[0] == 2 && up[1] == 8) || (right[0] == 2 && right[1] == 8) || (down[0] == 2 && down[1] == 8) || (jump_left[0] == 2 && jump_left[1] == 8) || (jump_right[0] == 2 && jump_right[1] == 8))
        ui->pushButton_0208->setEnabled(true); else ui->pushButton_0208->setEnabled(false);

    if ((y == 2 && x == 10) || (left[0] == 2 && left[1] == 10) || (up[0] == 2 && up[1] == 10) || (right[0] == 2 && right[1] == 10) || (down[0] == 2 && down[1] == 10) || (jump_left[0] == 2 && jump_left[1] == 10) || (jump_right[0] == 2 && jump_right[1] == 10))
        ui->pushButton_0210->setEnabled(true); else ui->pushButton_0210->setEnabled(false);

    if ((y == 2 && x == 12) || (left[0] == 2 && left[1] == 12) || (up[0] == 2 && up[1] == 12) || (right[0] == 2 && right[1] == 12) || (down[0] == 2 && down[1] == 12) || (jump_left[0] == 2 && jump_left[1] == 12) || (jump_right[0] == 2 && jump_right[1] == 12))
        ui->pushButton_0212->setEnabled(true); else ui->pushButton_0212->setEnabled(false);

    if ((y == 2 && x == 14) || (left[0] == 2 && left[1] == 14) || (up[0] == 2 && up[1] == 14) || (right[0] == 2 && right[1] == 14) || (down[0] == 2 && down[1] == 14) || (jump_left[0] == 2 && jump_left[1] == 14) || (jump_right[0] == 2 && jump_right[1] == 14))
        ui->pushButton_0214->setEnabled(true); else ui->pushButton_0214->setEnabled(false);

    if ((y == 2 && x == 16) || (left[0] == 2 && left[1] == 16) || (up[0] == 2 && up[1] == 16) || (right[0] == 2 && right[1] == 16) || (down[0] == 2 && down[1] == 16) || (jump_left[0] == 2 && jump_left[1] == 16) || (jump_right[0] == 2 && jump_right[1] == 16))
        ui->pushButton_0216->setEnabled(true); else ui->pushButton_0216->setEnabled(false);

    if ((y == 4 && x == 0) || (left[0] == 4 && left[1] == 0) || (up[0] == 4 && up[1] == 0) || (right[0] == 4 && right[1] == 0) || (down[0] == 4 && down[1] == 0) || (jump_left[0] == 4 && jump_left[1] == 0) || (jump_right[0] == 4 && jump_right[1] == 0))
        ui->pushButton_0400->setEnabled(true); else ui->pushButton_0400->setEnabled(false);

    if ((y == 4 && x == 2) || (left[0] == 4 && left[1] == 2) || (up[0] == 4 && up[1] == 2) || (right[0] == 4 && right[1] == 2) || (down[0] == 4 && down[1] == 2) || (jump_left[0] == 4 && jump_left[1] == 2) || (jump_right[0] == 4 && jump_right[1] == 2))
        ui->pushButton_0402->setEnabled(true); else ui->pushButton_0402->setEnabled(false);

    if ((y == 4 && x == 4) || (left[0] == 4 && left[1] == 4) || (up[0] == 4 && up[1] == 4) || (right[0] == 4 && right[1] == 4) || (down[0] == 4 && down[1] == 4) || (jump_left[0] == 4 && jump_left[1] == 4) || (jump_right[0] == 4 && jump_right[1] == 4))
        ui->pushButton_0404->setEnabled(true); else ui->pushButton_0404->setEnabled(false);

    if ((y == 4 && x == 6) || (left[0] == 4 && left[1] == 6) || (up[0] == 4 && up[1] == 6) || (right[0] == 4 && right[1] == 6) || (down[0] == 4 && down[1] == 6) || (jump_left[0] == 4 && jump_left[1] == 6) || (jump_right[0] == 4 && jump_right[1] == 6))
        ui->pushButton_0406->setEnabled(true); else ui->pushButton_0406->setEnabled(false);

    if ((y == 4 && x == 8) || (left[0] == 4 && left[1] == 8) || (up[0] == 4 && up[1] == 8) || (right[0] == 4 && right[1] == 8) || (down[0] == 4 && down[1] == 8) || (jump_left[0] == 4 && jump_left[1] == 8) || (jump_right[0] == 4 && jump_right[1] == 8))
        ui->pushButton_0408->setEnabled(true); else ui->pushButton_0408->setEnabled(false);

    if ((y == 4 && x == 10) || (left[0] == 4 && left[1] == 10) || (up[0] == 4 && up[1] == 10) || (right[0] == 4 && right[1] == 10) || (down[0] == 4 && down[1] == 10) || (jump_left[0] == 4 && jump_left[1] == 10) || (jump_right[0] == 4 && jump_right[1] == 10))
        ui->pushButton_0410->setEnabled(true); else ui->pushButton_0410->setEnabled(false);

    if ((y == 4 && x == 12) || (left[0] == 4 && left[1] == 12) || (up[0] == 4 && up[1] == 12) || (right[0] == 4 && right[1] == 12) || (down[0] == 4 && down[1] == 12) || (jump_left[0] == 4 && jump_left[1] == 12) || (jump_right[0] == 4 && jump_right[1] == 12))
        ui->pushButton_0412->setEnabled(true); else ui->pushButton_0412->setEnabled(false);

    if ((y == 4 && x == 14) || (left[0] == 4 && left[1] == 14) || (up[0] == 4 && up[1] == 14) || (right[0] == 4 && right[1] == 14) || (down[0] == 4 && down[1] == 14) || (jump_left[0] == 4 && jump_left[1] == 14) || (jump_right[0] == 4 && jump_right[1] == 14))
        ui->pushButton_0414->setEnabled(true); else ui->pushButton_0414->setEnabled(false);

    if ((y == 4 && x == 16) || (left[0] == 4 && left[1] == 16) || (up[0] == 4 && up[1] == 16) || (right[0] == 4 && right[1] == 16) || (down[0] == 4 && down[1] == 16) || (jump_left[0] == 4 && jump_left[1] == 16) || (jump_right[0] == 4 && jump_right[1] == 16))
        ui->pushButton_0416->setEnabled(true); else ui->pushButton_0416->setEnabled(false);

    if ((y == 6 && x == 0) || (left[0] == 6 && left[1] == 0) || (up[0] == 6 && up[1] == 0) || (right[0] == 6 && right[1] == 0) || (down[0] == 6 && down[1] == 0) || (jump_left[0] == 6 && jump_left[1] == 0) || (jump_right[0] == 6 && jump_right[1] == 0))
        ui->pushButton_0600->setEnabled(true); else ui->pushButton_0600->setEnabled(false);

    if ((y == 6 && x == 2) || (left[0] == 6 && left[1] == 2) || (up[0] == 6 && up[1] == 2) || (right[0] == 6 && right[1] == 2) || (down[0] == 6 && down[1] == 2) || (jump_left[0] == 6 && jump_left[1] == 2) || (jump_right[0] == 6 && jump_right[1] == 2))
        ui->pushButton_0602->setEnabled(true); else ui->pushButton_0602->setEnabled(false);

    if ((y == 6 && x == 4) || (left[0] == 6 && left[1] == 4) || (up[0] == 6 && up[1] == 4) || (right[0] == 6 && right[1] == 4) || (down[0] == 6 && down[1] == 4) || (jump_left[0] == 6 && jump_left[1] == 4) || (jump_right[0] == 6 && jump_right[1] == 4))
        ui->pushButton_0604->setEnabled(true); else ui->pushButton_0604->setEnabled(false);

    if ((y == 6 && x == 6) || (left[0] == 6 && left[1] == 6) || (up[0] == 6 && up[1] == 6) || (right[0] == 6 && right[1] == 6) || (down[0] == 6 && down[1] == 6) || (jump_left[0] == 6 && jump_left[1] == 6) || (jump_right[0] == 6 && jump_right[1] == 6))
        ui->pushButton_0606->setEnabled(true); else ui->pushButton_0606->setEnabled(false);

    if ((y == 6 && x == 8) || (left[0] == 6 && left[1] == 8) || (up[0] == 6 && up[1] == 8) || (right[0] == 6 && right[1] == 8) || (down[0] == 6 && down[1] == 8) || (jump_left[0] == 6 && jump_left[1] == 8) || (jump_right[0] == 6 && jump_right[1] == 8))
        ui->pushButton_0608->setEnabled(true); else ui->pushButton_0608->setEnabled(false);

    if ((y == 6 && x == 10) || (left[0] == 6 && left[1] == 10) || (up[0] == 6 && up[1] == 10) || (right[0] == 6 && right[1] == 10) || (down[0] == 6 && down[1] == 10) || (jump_left[0] == 6 && jump_left[1] == 10) || (jump_right[0] == 6 && jump_right[1] == 10))
        ui->pushButton_0610->setEnabled(true); else ui->pushButton_0610->setEnabled(false);

    if ((y == 6 && x == 12) || (left[0] == 6 && left[1] == 12) || (up[0] == 6 && up[1] == 12) || (right[0] == 6 && right[1] == 12) || (down[0] == 6 && down[1] == 12) || (jump_left[0] == 6 && jump_left[1] == 12) || (jump_right[0] == 6 && jump_right[1] == 12))
        ui->pushButton_0612->setEnabled(true); else ui->pushButton_0612->setEnabled(false);

    if ((y == 6 && x == 14) || (left[0] == 6 && left[1] == 14) || (up[0] == 6 && up[1] == 14) || (right[0] == 6 && right[1] == 14) || (down[0] == 6 && down[1] == 14) || (jump_left[0] == 6 && jump_left[1] == 14) || (jump_right[0] == 6 && jump_right[1] == 14))
        ui->pushButton_0614->setEnabled(true); else ui->pushButton_0614->setEnabled(false);

    if ((y == 6 && x == 16) || (left[0] == 6 && left[1] == 16) || (up[0] == 6 && up[1] == 16) || (right[0] == 6 && right[1] == 16) || (down[0] == 6 && down[1] == 16) || (jump_left[0] == 6 && jump_left[1] == 16) || (jump_right[0] == 6 && jump_right[1] == 16))
        ui->pushButton_0616->setEnabled(true); else ui->pushButton_0616->setEnabled(false);

    if ((y == 8 && x == 0) || (left[0] == 8 && left[1] == 0) || (up[0] == 8 && up[1] == 0) || (right[0] == 8 && right[1] == 0) || (down[0] == 8 && down[1] == 0) || (jump_left[0] == 8 && jump_left[1] == 0) || (jump_right[0] == 8 && jump_right[1] == 0))
        ui->pushButton_0800->setEnabled(true); else ui->pushButton_0800->setEnabled(false);

    if ((y == 8 && x == 2) || (left[0] == 8 && left[1] == 2) || (up[0] == 8 && up[1] == 2) || (right[0] == 8 && right[1] == 2) || (down[0] == 8 && down[1] == 2) || (jump_left[0] == 8 && jump_left[1] == 2) || (jump_right[0] == 8 && jump_right[1] == 2))
        ui->pushButton_0802->setEnabled(true); else ui->pushButton_0802->setEnabled(false);

    if ((y == 8 && x == 4) || (left[0] == 8 && left[1] == 4) || (up[0] == 8 && up[1] == 4) || (right[0] == 8 && right[1] == 4) || (down[0] == 8 && down[1] == 4) || (jump_left[0] == 8 && jump_left[1] == 4) || (jump_right[0] == 8 && jump_right[1] == 4))
        ui->pushButton_0804->setEnabled(true); else ui->pushButton_0804->setEnabled(false);

    if ((y == 8 && x == 6) || (left[0] == 8 && left[1] == 6) || (up[0] == 8 && up[1] == 6) || (right[0] == 8 && right[1] == 6) || (down[0] == 8 && down[1] == 6) || (jump_left[0] == 8 && jump_left[1] == 6) || (jump_right[0] == 8 && jump_right[1] == 6))
        ui->pushButton_0806->setEnabled(true); else ui->pushButton_0806->setEnabled(false);

    if ((y == 8 && x == 8) || (left[0] == 8 && left[1] == 8) || (up[0] == 8 && up[1] == 8) || (right[0] == 8 && right[1] == 8) || (down[0] == 8 && down[1] == 8) || (jump_left[0] == 8 && jump_left[1] == 8) || (jump_right[0] == 8 && jump_right[1] == 8))
        ui->pushButton_0808->setEnabled(true); else ui->pushButton_0808->setEnabled(false);

    if ((y == 8 && x == 10) || (left[0] == 8 && left[1] == 10) || (up[0] == 8 && up[1] == 10) || (right[0] == 8 && right[1] == 10) || (down[0] == 8 && down[1] == 10) || (jump_left[0] == 8 && jump_left[1] == 10) || (jump_right[0] == 8 && jump_right[1] == 10))
        ui->pushButton_0810->setEnabled(true); else ui->pushButton_0810->setEnabled(false);

    if ((y == 8 && x == 12) || (left[0] == 8 && left[1] == 12) || (up[0] == 8 && up[1] == 12) || (right[0] == 8 && right[1] == 12) || (down[0] == 8 && down[1] == 12) || (jump_left[0] == 8 && jump_left[1] == 12) || (jump_right[0] == 8 && jump_right[1] == 12))
        ui->pushButton_0812->setEnabled(true); else ui->pushButton_0812->setEnabled(false);

    if ((y == 8 && x == 14) || (left[0] == 8 && left[1] == 14) || (up[0] == 8 && up[1] == 14) || (right[0] == 8 && right[1] == 14) || (down[0] == 8 && down[1] == 14) || (jump_left[0] == 8 && jump_left[1] == 14) || (jump_right[0] == 8 && jump_right[1] == 14))
        ui->pushButton_0814->setEnabled(true); else ui->pushButton_0814->setEnabled(false);

    if ((y == 8 && x == 16) || (left[0] == 8 && left[1] == 16) || (up[0] == 8 && up[1] == 16) || (right[0] == 8 && right[1] == 16) || (down[0] == 8 && down[1] == 16) || (jump_left[0] == 8 && jump_left[1] == 16) || (jump_right[0] == 8 && jump_right[1] == 16))
        ui->pushButton_0816->setEnabled(true); else ui->pushButton_0816->setEnabled(false);

    if ((y == 10 && x == 0) || (left[0] == 10 && left[1] == 0) || (up[0] == 10 && up[1] == 0) || (right[0] == 10 && right[1] == 0) || (down[0] == 10 && down[1] == 0) || (jump_left[0] == 10 && jump_left[1] == 0) || (jump_right[0] == 10 && jump_right[1] == 0))
        ui->pushButton_1000->setEnabled(true); else ui->pushButton_1000->setEnabled(false);

    if ((y == 10 && x == 2) || (left[0] == 10 && left[1] == 2) || (up[0] == 10 && up[1] == 2) || (right[0] == 10 && right[1] == 2) || (down[0] == 10 && down[1] == 2) || (jump_left[0] == 10 && jump_left[1] == 2) || (jump_right[0] == 10 && jump_right[1] == 2))
        ui->pushButton_1002->setEnabled(true); else ui->pushButton_1002->setEnabled(false);

    if ((y == 10 && x == 4) || (left[0] == 10 && left[1] == 4) || (up[0] == 10 && up[1] == 4) || (right[0] == 10 && right[1] == 4) || (down[0] == 10 && down[1] == 4) || (jump_left[0] == 10 && jump_left[1] == 4) || (jump_right[0] == 10 && jump_right[1] == 4))
        ui->pushButton_1004->setEnabled(true); else ui->pushButton_1004->setEnabled(false);

    if ((y == 10 && x == 6) || (left[0] == 10 && left[1] == 6) || (up[0] == 10 && up[1] == 6) || (right[0] == 10 && right[1] == 6) || (down[0] == 10 && down[1] == 6) || (jump_left[0] == 10 && jump_left[1] == 6) || (jump_right[0] == 10 && jump_right[1] == 6))
        ui->pushButton_1006->setEnabled(true); else ui->pushButton_1006->setEnabled(false);

    if ((y == 10 && x == 8) || (left[0] == 10 && left[1] == 8) || (up[0] == 10 && up[1] == 8) || (right[0] == 10 && right[1] == 8) || (down[0] == 10 && down[1] == 8) || (jump_left[0] == 10 && jump_left[1] == 8) || (jump_right[0] == 10 && jump_right[1] == 8))
        ui->pushButton_1008->setEnabled(true); else ui->pushButton_1008->setEnabled(false);

    if ((y == 10 && x == 10) || (left[0] == 10 && left[1] == 10) || (up[0] == 10 && up[1] == 10) || (right[0] == 10 && right[1] == 10) || (down[0] == 10 && down[1] == 10) || (jump_left[0] == 10 && jump_left[1] == 10) || (jump_right[0] == 10 && jump_right[1] == 10))
        ui->pushButton_1010->setEnabled(true); else ui->pushButton_1010->setEnabled(false);

    if ((y == 10 && x == 12) || (left[0] == 10 && left[1] == 12) || (up[0] == 10 && up[1] == 12) || (right[0] == 10 && right[1] == 12) || (down[0] == 10 && down[1] == 12) || (jump_left[0] == 10 && jump_left[1] == 12) || (jump_right[0] == 10 && jump_right[1] == 12))
        ui->pushButton_1012->setEnabled(true); else ui->pushButton_1012->setEnabled(false);

    if ((y == 10 && x == 14) || (left[0] == 10 && left[1] == 14) || (up[0] == 10 && up[1] == 14) || (right[0] == 10 && right[1] == 14) || (down[0] == 10 && down[1] == 14) || (jump_left[0] == 10 && jump_left[1] == 14) || (jump_right[0] == 10 && jump_right[1] == 14))
        ui->pushButton_1014->setEnabled(true); else ui->pushButton_1014->setEnabled(false);

    if ((y == 10 && x == 16) || (left[0] == 10 && left[1] == 16) || (up[0] == 10 && up[1] == 16) || (right[0] == 10 && right[1] == 16) || (down[0] == 10 && down[1] == 16) || (jump_left[0] == 10 && jump_left[1] == 16) || (jump_right[0] == 10 && jump_right[1] == 16))
        ui->pushButton_1016->setEnabled(true); else ui->pushButton_1016->setEnabled(false);

    if ((y == 12 && x == 0) || (left[0] == 12 && left[1] == 0) || (up[0] == 12 && up[1] == 0) || (right[0] == 12 && right[1] == 0) || (down[0] == 12 && down[1] == 0) || (jump_left[0] == 12 && jump_left[1] == 0) || (jump_right[0] == 12 && jump_right[1] == 0))
        ui->pushButton_1200->setEnabled(true); else ui->pushButton_1200->setEnabled(false);

    if ((y == 12 && x == 2) || (left[0] == 12 && left[1] == 2) || (up[0] == 12 && up[1] == 2) || (right[0] == 12 && right[1] == 2) || (down[0] == 12 && down[1] == 2) || (jump_left[0] == 12 && jump_left[1] == 2) || (jump_right[0] == 12 && jump_right[1] == 2))
        ui->pushButton_1202->setEnabled(true); else ui->pushButton_1202->setEnabled(false);

    if ((y == 12 && x == 4) || (left[0] == 12 && left[1] == 4) || (up[0] == 12 && up[1] == 4) || (right[0] == 12 && right[1] == 4) || (down[0] == 12 && down[1] == 4) || (jump_left[0] == 12 && jump_left[1] == 4) || (jump_right[0] == 12 && jump_right[1] == 4))
        ui->pushButton_1204->setEnabled(true); else ui->pushButton_1204->setEnabled(false);

    if ((y == 12 && x == 6) || (left[0] == 12 && left[1] == 6) || (up[0] == 12 && up[1] == 6) || (right[0] == 12 && right[1] == 6) || (down[0] == 12 && down[1] == 6) || (jump_left[0] == 12 && jump_left[1] == 6) || (jump_right[0] == 12 && jump_right[1] == 6))
        ui->pushButton_1206->setEnabled(true); else ui->pushButton_1206->setEnabled(false);

    if ((y == 12 && x == 8) || (left[0] == 12 && left[1] == 8) || (up[0] == 12 && up[1] == 8) || (right[0] == 12 && right[1] == 8) || (down[0] == 12 && down[1] == 8) || (jump_left[0] == 12 && jump_left[1] == 8) || (jump_right[0] == 12 && jump_right[1] == 8))
        ui->pushButton_1208->setEnabled(true); else ui->pushButton_1208->setEnabled(false);

    if ((y == 12 && x == 10) || (left[0] == 12 && left[1] == 10) || (up[0] == 12 && up[1] == 10) || (right[0] == 12 && right[1] == 10) || (down[0] == 12 && down[1] == 10) || (jump_left[0] == 12 && jump_left[1] == 10) || (jump_right[0] == 12 && jump_right[1] == 10))
        ui->pushButton_1210->setEnabled(true); else ui->pushButton_1210->setEnabled(false);

    if ((y == 12 && x == 12) || (left[0] == 12 && left[1] == 12) || (up[0] == 12 && up[1] == 12) || (right[0] == 12 && right[1] == 12) || (down[0] == 12 && down[1] == 12) || (jump_left[0] == 12 && jump_left[1] == 12) || (jump_right[0] == 12 && jump_right[1] == 12))
        ui->pushButton_1212->setEnabled(true); else ui->pushButton_1212->setEnabled(false);

    if ((y == 12 && x == 14) || (left[0] == 12 && left[1] == 14) || (up[0] == 12 && up[1] == 14) || (right[0] == 12 && right[1] == 14) || (down[0] == 12 && down[1] == 14) || (jump_left[0] == 12 && jump_left[1] == 14) || (jump_right[0] == 12 && jump_right[1] == 14))
        ui->pushButton_1214->setEnabled(true); else ui->pushButton_1214->setEnabled(false);

    if ((y == 12 && x == 16) || (left[0] == 12 && left[1] == 16) || (up[0] == 12 && up[1] == 16) || (right[0] == 12 && right[1] == 16) || (down[0] == 12 && down[1] == 16) || (jump_left[0] == 12 && jump_left[1] == 16) || (jump_right[0] == 12 && jump_right[1] == 16))
        ui->pushButton_1216->setEnabled(true); else ui->pushButton_1216->setEnabled(false);

    if ((y == 14 && x == 0) || (left[0] == 14 && left[1] == 0) || (up[0] == 14 && up[1] == 0) || (right[0] == 14 && right[1] == 0) || (down[0] == 14 && down[1] == 0) || (jump_left[0] == 14 && jump_left[1] == 0) || (jump_right[0] == 14 && jump_right[1] == 0))
        ui->pushButton_1400->setEnabled(true); else ui->pushButton_1400->setEnabled(false);

    if ((y == 14 && x == 2) || (left[0] == 14 && left[1] == 2) || (up[0] == 14 && up[1] == 2) || (right[0] == 14 && right[1] == 2) || (down[0] == 14 && down[1] == 2) || (jump_left[0] == 14 && jump_left[1] == 2) || (jump_right[0] == 14 && jump_right[1] == 2))
        ui->pushButton_1402->setEnabled(true); else ui->pushButton_1402->setEnabled(false);

    if ((y == 14 && x == 4) || (left[0] == 14 && left[1] == 4) || (up[0] == 14 && up[1] == 4) || (right[0] == 14 && right[1] == 4) || (down[0] == 14 && down[1] == 4) || (jump_left[0] == 14 && jump_left[1] == 4) || (jump_right[0] == 14 && jump_right[1] == 4))
        ui->pushButton_1404->setEnabled(true); else ui->pushButton_1404->setEnabled(false);

    if ((y == 14 && x == 6) || (left[0] == 14 && left[1] == 6) || (up[0] == 14 && up[1] == 6) || (right[0] == 14 && right[1] == 6) || (down[0] == 14 && down[1] == 6) || (jump_left[0] == 14 && jump_left[1] == 6) || (jump_right[0] == 14 && jump_right[1] == 6))
        ui->pushButton_1406->setEnabled(true); else ui->pushButton_1406->setEnabled(false);

    if ((y == 14 && x == 8) || (left[0] == 14 && left[1] == 8) || (up[0] == 14 && up[1] == 8) || (right[0] == 14 && right[1] == 8) || (down[0] == 14 && down[1] == 8) || (jump_left[0] == 14 && jump_left[1] == 8) || (jump_right[0] == 14 && jump_right[1] == 8))
        ui->pushButton_1408->setEnabled(true); else ui->pushButton_1408->setEnabled(false);

    if ((y == 14 && x == 10) || (left[0] == 14 && left[1] == 10) || (up[0] == 14 && up[1] == 10) || (right[0] == 14 && right[1] == 10) || (down[0] == 14 && down[1] == 10) || (jump_left[0] == 14 && jump_left[1] == 10) || (jump_right[0] == 14 && jump_right[1] == 10))
        ui->pushButton_1410->setEnabled(true); else ui->pushButton_1410->setEnabled(false);

    if ((y == 14 && x == 12) || (left[0] == 14 && left[1] == 12) || (up[0] == 14 && up[1] == 12) || (right[0] == 14 && right[1] == 12) || (down[0] == 14 && down[1] == 12) || (jump_left[0] == 14 && jump_left[1] == 12) || (jump_right[0] == 14 && jump_right[1] == 12))
        ui->pushButton_1412->setEnabled(true); else ui->pushButton_1412->setEnabled(false);

    if ((y == 14 && x == 14) || (left[0] == 14 && left[1] == 14) || (up[0] == 14 && up[1] == 14) || (right[0] == 14 && right[1] == 14) || (down[0] == 14 && down[1] == 14) || (jump_left[0] == 14 && jump_left[1] == 14) || (jump_right[0] == 14 && jump_right[1] == 14))
        ui->pushButton_1414->setEnabled(true); else ui->pushButton_1414->setEnabled(false);

    if ((y == 14 && x == 16) || (left[0] == 14 && left[1] == 16) || (up[0] == 14 && up[1] == 16) || (right[0] == 14 && right[1] == 16) || (down[0] == 14 && down[1] == 16) || (jump_left[0] == 14 && jump_left[1] == 16) || (jump_right[0] == 14 && jump_right[1] == 16))
        ui->pushButton_1416->setEnabled(true); else ui->pushButton_1416->setEnabled(false);

    if ((y == 16 && x == 0) || (left[0] == 16 && left[1] == 0) || (up[0] == 16 && up[1] == 0) || (right[0] == 16 && right[1] == 0) || (down[0] == 16 && down[1] == 0) || (jump_left[0] == 16 && jump_left[1] == 0) || (jump_right[0] == 16 && jump_right[1] == 0))
        ui->pushButton_1600->setEnabled(true); else ui->pushButton_1600->setEnabled(false);

    if ((y == 16 && x == 2) || (left[0] == 16 && left[1] == 2) || (up[0] == 16 && up[1] == 2) || (right[0] == 16 && right[1] == 2) || (down[0] == 16 && down[1] == 2) || (jump_left[0] == 16 && jump_left[1] == 2) || (jump_right[0] == 16 && jump_right[1] == 2))
        ui->pushButton_1602->setEnabled(true); else ui->pushButton_1602->setEnabled(false);

    if ((y == 16 && x == 4) || (left[0] == 16 && left[1] == 4) || (up[0] == 16 && up[1] == 4) || (right[0] == 16 && right[1] == 4) || (down[0] == 16 && down[1] == 4) || (jump_left[0] == 16 && jump_left[1] == 4) || (jump_right[0] == 16 && jump_right[1] == 4))
        ui->pushButton_1604->setEnabled(true); else ui->pushButton_1604->setEnabled(false);

    if ((y == 16 && x == 6) || (left[0] == 16 && left[1] == 6) || (up[0] == 16 && up[1] == 6) || (right[0] == 16 && right[1] == 6) || (down[0] == 16 && down[1] == 6) || (jump_left[0] == 16 && jump_left[1] == 6) || (jump_right[0] == 16 && jump_right[1] == 6))
        ui->pushButton_1606->setEnabled(true); else ui->pushButton_1606->setEnabled(false);

    if ((y == 16 && x == 8) || (left[0] == 16 && left[1] == 8) || (up[0] == 16 && up[1] == 8) || (right[0] == 16 && right[1] == 8) || (down[0] == 16 && down[1] == 8) || (jump_left[0] == 16 && jump_left[1] == 8) || (jump_right[0] == 16 && jump_right[1] == 8))
        ui->pushButton_1608->setEnabled(true); else ui->pushButton_1608->setEnabled(false);

    if ((y == 16 && x == 10) || (left[0] == 16 && left[1] == 10) || (up[0] == 16 && up[1] == 10) || (right[0] == 16 && right[1] == 10) || (down[0] == 16 && down[1] == 10) || (jump_left[0] == 16 && jump_left[1] == 10) || (jump_right[0] == 16 && jump_right[1] == 10))
        ui->pushButton_1610->setEnabled(true); else ui->pushButton_1610->setEnabled(false);

    if ((y == 16 && x == 12) || (left[0] == 16 && left[1] == 12) || (up[0] == 16 && up[1] == 12) || (right[0] == 16 && right[1] == 12) || (down[0] == 16 && down[1] == 12) || (jump_left[0] == 16 && jump_left[1] == 12) || (jump_right[0] == 16 && jump_right[1] == 12))
        ui->pushButton_1612->setEnabled(true); else ui->pushButton_1612->setEnabled(false);

    if ((y == 16 && x == 14) || (left[0] == 16 && left[1] == 14) || (up[0] == 16 && up[1] == 14) || (right[0] == 16 && right[1] == 14) || (down[0] == 16 && down[1] == 14) || (jump_left[0] == 16 && jump_left[1] == 14) || (jump_right[0] == 16 && jump_right[1] == 14))
        ui->pushButton_1614->setEnabled(true); else ui->pushButton_1614->setEnabled(false);

    if ((y == 16 && x == 16) || (left[0] == 16 && left[1] == 16) || (up[0] == 16 && up[1] == 16) || (right[0] == 16 && right[1] == 16) || (down[0] == 16 && down[1] == 16) || (jump_left[0] == 16 && jump_left[1] == 16) || (jump_right[0] == 16 && jump_right[1] == 16))
        ui->pushButton_1616->setEnabled(true); else ui->pushButton_1616->setEnabled(false);}
