#include "quoridor.h"
#include "ui_quoridor.h"
#include "quoridor.cpp"



void Quoridor::on_pushButton_0000_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 0 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 0){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 0; player_1[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 0, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 0; player_2[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 0, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0002_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 2 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 2){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 0; player_1[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 2, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 0; player_2[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 2, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0004_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 4 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 4){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 0; player_1[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 4, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 0; player_2[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 4, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0006_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 6 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 6){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 0; player_1[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 6, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 0; player_2[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 6, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0008_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 8 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 8){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 0; player_1[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 8, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 0; player_2[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 8, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0010_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 10 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 10){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 0; player_1[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 10, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 0; player_2[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 10, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0012_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 12 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 12){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 0; player_1[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 12, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 0; player_2[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 12, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0014_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 14 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 14){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 0; player_1[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 14, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 0; player_2[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 14, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0016_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 16 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 16){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 0; player_1[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 16, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 0; player_2[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(0, 16, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0200_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 0 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 0){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 2; player_1[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 0, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 2; player_2[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 0, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0202_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 2 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 2){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 2; player_1[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 2, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 2; player_2[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 2, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0204_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 4 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 4){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 2; player_1[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 4, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 2; player_2[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 4, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0206_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 6 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 6){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 2; player_1[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 6, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 2; player_2[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 6, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0208_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 8 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 8){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 2; player_1[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 8, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 2; player_2[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 8, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0210_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 10 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 10){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 2; player_1[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 10, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 2; player_2[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 10, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0212_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 12 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 12){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 2; player_1[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 12, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 2; player_2[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 12, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0214_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 14 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 14){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 2; player_1[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 14, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 2; player_2[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 14, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0216_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 16 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 16){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 2; player_1[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 16, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 2; player_2[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(2, 16, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0400_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 0 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 0){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 4; player_1[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 0, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 4; player_2[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 0, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0402_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 2 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 2){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 4; player_1[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 2, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 4; player_2[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 2, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0404_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 4 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 4){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 4; player_1[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 4, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 4; player_2[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 4, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0406_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 6 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 6){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 4; player_1[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 6, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 4; player_2[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 6, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0408_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 8 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 8){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 4; player_1[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 8, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 4; player_2[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 8, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0410_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 10 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 10){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 4; player_1[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 10, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 4; player_2[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 10, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0412_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 12 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 12){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 4; player_1[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 12, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 4; player_2[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 12, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0414_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 14 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 14){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 4; player_1[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 14, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 4; player_2[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 14, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0416_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 16 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 16){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 4; player_1[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 16, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 4; player_2[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(4, 16, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0600_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 0 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 0){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 6; player_1[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 0, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 6; player_2[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 0, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0602_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 2 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 2){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 6; player_1[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 2, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 6; player_2[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 2, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0604_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 4 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 4){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 6; player_1[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 4, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 6; player_2[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 4, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0606_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 6 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 6){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 6; player_1[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 6, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 6; player_2[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 6, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0608_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 8 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 8){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 6; player_1[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 8, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 6; player_2[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 8, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0610_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 10 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 10){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 6; player_1[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 10, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 6; player_2[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 10, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0612_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 12 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 12){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 6; player_1[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 12, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 6; player_2[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 12, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0614_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 14 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 14){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 6; player_1[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 14, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 6; player_2[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 14, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0616_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 16 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 16){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 6; player_1[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 16, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 6; player_2[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(6, 16, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0800_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 0 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 0){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 8; player_1[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 0, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 8; player_2[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 0, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0802_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 2 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 2){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 8; player_1[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 2, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 8; player_2[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 2, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0804_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 4 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 4){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 8; player_1[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 4, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 8; player_2[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 4, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0806_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 6 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 6){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 8; player_1[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 6, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 8; player_2[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 6, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0808_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 8 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 8){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 8; player_1[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 8, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 8; player_2[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 8, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0810_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 10 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 10){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 8; player_1[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 10, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 8; player_2[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 10, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0812_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 12 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 12){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 8; player_1[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 12, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 8; player_2[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 12, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0814_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 14 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 14){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 8; player_1[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 14, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 8; player_2[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 14, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_0816_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 16 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 16){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 8; player_1[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 16, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 8; player_2[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(8, 16, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1000_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 0 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 0){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 10; player_1[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 0, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 10; player_2[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 0, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1002_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 2 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 2){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 10; player_1[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 2, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 10; player_2[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 2, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1004_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 4 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 4){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 10; player_1[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 4, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 10; player_2[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 4, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1006_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 6 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 6){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 10; player_1[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 6, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 10; player_2[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 6, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1008_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 8 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 8){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 10; player_1[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 8, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 10; player_2[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 8, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1010_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 10 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 10){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 10; player_1[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 10, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 10; player_2[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 10, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1012_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 12 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 12){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 10; player_1[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 12, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 10; player_2[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 12, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1014_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 14 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 14){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 10; player_1[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 14, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 10; player_2[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 14, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1016_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 16 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 16){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 10; player_1[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 16, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 10; player_2[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(10, 16, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1200_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 0 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 0){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 12; player_1[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 0, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 12; player_2[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 0, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1202_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 2 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 2){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 12; player_1[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 2, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 12; player_2[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 2, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1204_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 4 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 4){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 12; player_1[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 4, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 12; player_2[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 4, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1206_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 6 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 6){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 12; player_1[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 6, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 12; player_2[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 6, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1208_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 8 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 8){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 12; player_1[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 8, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 12; player_2[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 8, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1210_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 10 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 10){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 12; player_1[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 10, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 12; player_2[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 10, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1212_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 12 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 12){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 12; player_1[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 12, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 12; player_2[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 12, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1214_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 14 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 14){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 12; player_1[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 14, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 12; player_2[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 14, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1216_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 16 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 16){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 12; player_1[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 16, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 12; player_2[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(12, 16, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1400_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 0 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 0){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 14; player_1[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 0, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 14; player_2[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 0, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1402_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 2 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 2){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 14; player_1[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 2, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 14; player_2[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 2, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1404_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 4 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 4){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 14; player_1[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 4, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 14; player_2[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 4, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1406_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 6 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 6){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 14; player_1[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 6, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 14; player_2[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 6, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1408_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 8 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 8){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 14; player_1[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 8, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 14; player_2[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 8, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1410_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 10 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 10){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 14; player_1[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 10, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 14; player_2[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 10, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1412_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 12 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 12){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 14; player_1[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 12, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 14; player_2[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 12, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1414_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 14 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 14){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 14; player_1[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 14, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 14; player_2[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 14, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1416_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 16 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 16){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 14; player_1[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 16, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 14; player_2[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(14, 16, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1600_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 0 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 0){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 16; player_1[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 0, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 16; player_2[1] = 0;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 0, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1602_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 2 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 2){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 16; player_1[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 2, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 16; player_2[1] = 2;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 2, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1604_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 4 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 4){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 16; player_1[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 4, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 16; player_2[1] = 4;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 4, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1606_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 6 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 6){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 16; player_1[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 6, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 16; player_2[1] = 6;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 6, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1608_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 8 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 8){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 16; player_1[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 8, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 16; player_2[1] = 8;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 8, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1610_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 10 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 10){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 16; player_1[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 10, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 16; player_2[1] = 10;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 10, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1612_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 12 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 12){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 16; player_1[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 12, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 16; player_2[1] = 12;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 12, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1614_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 14 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 14){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 16; player_1[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 14, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 16; player_2[1] = 14;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 14, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}


void Quoridor::on_pushButton_1616_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 16 && !move_select){
        find_moves();
        move_select = true; show_wall = false; update();
        return;
    }
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 16){
            reset_buttons();
            return;
        }
        if(p1){
            player_1[0] = 16; player_1[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 16, 1);
            p1 = false; p2 = true;
            reset_buttons();
            game_manager();
            return;
        }
        if(p2){
            player_2[0] = 16; player_2[1] = 16;
            remove_pawn(curr_position[0], curr_position[1]);
            set_pawns(16, 16, 2);
            p1 = true; p2 = false;
            reset_buttons();
            game_manager();
            return;
        }
    }
}
