#include "quoridor.h"
#include "ui_quoridor.h"
#include "quoridor.cpp"

// Set commands for all buttons.
// Each button move the player to the next legal position
void Quoridor::on_pushButton_0000_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 0 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 0){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(0, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 0, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(0, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 0, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0002_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 2 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 2){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(0, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 2, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(0, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 2, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0004_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 4 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 4){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(0, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 4, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(0, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 4, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0006_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 6 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 6){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(0, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 6, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(0, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 6, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0008_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 8 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 8){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(0, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 8, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(0, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 8, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0010_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 10 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 10){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(0, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 10, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(0, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 10, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0012_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 12 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 12){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(0, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 12, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(0, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 12, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0014_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 14 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 14){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(0, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 14, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(0, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 14, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0016_clicked()
{
    if(curr_position[0] == 0 && curr_position[1] == 16 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 0 && curr_position[1] == 16){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(0, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 16, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(0, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(0, 16, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0200_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 0 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 0){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(2, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 0, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(2, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 0, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0202_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 2 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 2){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(2, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 2, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(2, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 2, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0204_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 4 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 4){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(2, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 4, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(2, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 4, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0206_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 6 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 6){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(2, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 6, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(2, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 6, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0208_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 8 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 8){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(2, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 8, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(2, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 8, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0210_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 10 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 10){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(2, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 10, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(2, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 10, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0212_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 12 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 12){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(2, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 12, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(2, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 12, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0214_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 14 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 14){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(2, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 14, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(2, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 14, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0216_clicked()
{
    if(curr_position[0] == 2 && curr_position[1] == 16 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 2 && curr_position[1] == 16){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(2, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 16, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(2, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(2, 16, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0400_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 0 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 0){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(4, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 0, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(4, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 0, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0402_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 2 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 2){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(4, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 2, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(4, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 2, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0404_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 4 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 4){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(4, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 4, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(4, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 4, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0406_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 6 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 6){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(4, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 6, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(4, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 6, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0408_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 8 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 8){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(4, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 8, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(4, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 8, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0410_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 10 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 10){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(4, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 10, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(4, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 10, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0412_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 12 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 12){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(4, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 12, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(4, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 12, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0414_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 14 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 14){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(4, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 14, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(4, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 14, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0416_clicked()
{
    if(curr_position[0] == 4 && curr_position[1] == 16 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 4 && curr_position[1] == 16){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(4, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 16, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(4, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(4, 16, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0600_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 0 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 0){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(6, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 0, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(6, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 0, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0602_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 2 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 2){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(6, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 2, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(6, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 2, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0604_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 4 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 4){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(6, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 4, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(6, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 4, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0606_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 6 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 6){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(6, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 6, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(6, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 6, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0608_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 8 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 8){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(6, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 8, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(6, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 8, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0610_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 10 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 10){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(6, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 10, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(6, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 10, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0612_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 12 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 12){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(6, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 12, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(6, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 12, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0614_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 14 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 14){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(6, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 14, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(6, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 14, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0616_clicked()
{
    if(curr_position[0] == 6 && curr_position[1] == 16 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 6 && curr_position[1] == 16){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(6, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 16, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(6, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(6, 16, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0800_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 0 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 0){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(8, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 0, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(8, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 0, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0802_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 2 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 2){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(8, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 2, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(8, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 2, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0804_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 4 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 4){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(8, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 4, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(8, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 4, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0806_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 6 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 6){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(8, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 6, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(8, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 6, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0808_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 8 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 8){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(8, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 8, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(8, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 8, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0810_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 10 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 10){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(8, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 10, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(8, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 10, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0812_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 12 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 12){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(8, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 12, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(8, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 12, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0814_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 14 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 14){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(8, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 14, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(8, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 14, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_0816_clicked()
{
    if(curr_position[0] == 8 && curr_position[1] == 16 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 8 && curr_position[1] == 16){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(8, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 16, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(8, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(8, 16, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1000_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 0 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 0){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(10, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 0, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(10, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 0, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1002_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 2 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 2){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(10, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 2, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(10, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 2, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1004_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 4 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 4){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(10, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 4, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(10, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 4, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1006_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 6 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 6){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(10, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 6, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(10, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 6, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1008_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 8 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 8){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(10, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 8, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(10, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 8, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1010_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 10 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 10){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(10, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 10, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(10, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 10, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1012_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 12 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 12){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(10, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 12, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(10, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 12, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1014_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 14 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 14){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(10, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 14, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(10, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 14, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1016_clicked()
{
    if(curr_position[0] == 10 && curr_position[1] == 16 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 10 && curr_position[1] == 16){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(10, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 16, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(10, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(10, 16, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1200_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 0 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 0){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(12, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 0, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(12, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 0, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1202_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 2 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 2){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(12, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 2, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(12, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 2, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1204_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 4 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 4){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(12, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 4, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(12, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 4, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1206_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 6 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 6){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(12, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 6, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(12, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 6, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1208_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 8 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 8){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(12, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 8, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(12, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 8, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1210_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 10 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 10){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(12, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 10, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(12, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 10, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1212_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 12 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 12){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(12, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 12, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(12, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 12, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1214_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 14 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 14){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(12, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 14, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(12, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 14, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1216_clicked()
{
    if(curr_position[0] == 12 && curr_position[1] == 16 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 12 && curr_position[1] == 16){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(12, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 16, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(12, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(12, 16, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1400_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 0 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 0){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(14, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 0, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(14, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 0, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1402_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 2 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 2){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(14, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 2, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(14, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 2, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1404_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 4 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 4){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(14, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 4, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(14, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 4, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1406_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 6 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 6){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(14, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 6, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(14, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 6, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1408_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 8 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 8){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(14, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 8, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(14, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 8, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1410_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 10 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 10){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(14, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 10, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(14, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 10, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1412_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 12 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 12){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(14, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 12, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(14, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 12, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1414_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 14 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 14){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(14, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 14, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(14, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 14, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1416_clicked()
{
    if(curr_position[0] == 14 && curr_position[1] == 16 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 14 && curr_position[1] == 16){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(14, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 16, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(14, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(14, 16, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1600_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 0 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 0){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(16, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 0, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(16, 0));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 0, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1602_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 2 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 2){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(16, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 2, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(16, 2));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 2, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1604_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 4 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 4){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(16, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 4, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(16, 4));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 4, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1606_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 6 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 6){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(16, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 6, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(16, 6));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 6, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1608_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 8 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 8){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(16, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 8, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(16, 8));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 8, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1610_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 10 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 10){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(16, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 10, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(16, 10));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 10, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1612_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 12 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 12){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(16, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 12, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(16, 12));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 12, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1614_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 14 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 14){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(16, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 14, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(16, 14));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 14, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

void Quoridor::on_pushButton_1616_clicked()
{
    if(curr_position[0] == 16 && curr_position[1] == 16 && !move_select){
        find_moves(); ui->newGameButton->setEnabled(false); ui->undoButton->setEnabled(false);
        move_select = true; show_wall = false; wall_unlocked = false; update(); return;}
    if(move_select){
        if(curr_position[0] == 16 && curr_position[1] == 16){
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); return;}
        if(BLUE){
            player_blue.append(place(16, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 16, 1);
            moves.append("m 1");
            BLUE = false; RED = true;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}

        if(RED){
            player_red.append(place(16, 16));
            remove_piece(curr_position[0], curr_position[1]);
            set_players(16, 16, 2);
            moves.append("m 2");
            BLUE = true; RED = false;
            reset_buttons(); show_wall = true; wall_unlocked = true; update(); game_manager(); return;}}}

