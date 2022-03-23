#include "quoridor.h"
#include "ui_quoridor.h"


void Quoridor::set_pawns(int x, int y, int p){

    QPixmap pixmap1(":/images/P1.png");
    QPixmap pixmap2(":/images/P2.png");
    QIcon ButtonIcon1(pixmap1);
    QIcon ButtonIcon2(pixmap2);

    if(x == 0 && y == 0){
        if(p == 1){
            ui->pushButton_0000->setIcon(ButtonIcon1);
            ui->pushButton_0000->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0000->setIcon(ButtonIcon2);
            ui->pushButton_0000->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 0 && y == 2){
        if(p == 1){
            ui->pushButton_0002->setIcon(ButtonIcon1);
            ui->pushButton_0002->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0002->setIcon(ButtonIcon2);
            ui->pushButton_0002->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 0 && y == 4){
        if(p == 1){
            ui->pushButton_0004->setIcon(ButtonIcon1);
            ui->pushButton_0004->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0004->setIcon(ButtonIcon2);
            ui->pushButton_0004->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 0 && y == 6){
        if(p == 1){
            ui->pushButton_0006->setIcon(ButtonIcon1);
            ui->pushButton_0006->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0006->setIcon(ButtonIcon2);
            ui->pushButton_0006->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 0 && y == 8){
        if(p == 1){
            ui->pushButton_0008->setIcon(ButtonIcon1);
            ui->pushButton_0008->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0008->setIcon(ButtonIcon2);
            ui->pushButton_0008->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 0 && y == 10){
        if(p == 1){
            ui->pushButton_0010->setIcon(ButtonIcon1);
            ui->pushButton_0010->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0010->setIcon(ButtonIcon2);
            ui->pushButton_0010->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 0 && y == 12){
        if(p == 1){
            ui->pushButton_0012->setIcon(ButtonIcon1);
            ui->pushButton_0012->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0012->setIcon(ButtonIcon2);
            ui->pushButton_0012->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 0 && y == 14){
        if(p == 1){
            ui->pushButton_0014->setIcon(ButtonIcon1);
            ui->pushButton_0014->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0014->setIcon(ButtonIcon2);
            ui->pushButton_0014->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 0 && y == 16){
        if(p == 1){
            ui->pushButton_0016->setIcon(ButtonIcon1);
            ui->pushButton_0016->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0016->setIcon(ButtonIcon2);
            ui->pushButton_0016->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 0){
        if(p == 1){
            ui->pushButton_0200->setIcon(ButtonIcon1);
            ui->pushButton_0200->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0200->setIcon(ButtonIcon2);
            ui->pushButton_0200->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 2){
        if(p == 1){
            ui->pushButton_0202->setIcon(ButtonIcon1);
            ui->pushButton_0202->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0202->setIcon(ButtonIcon2);
            ui->pushButton_0202->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 4){
        if(p == 1){
            ui->pushButton_0204->setIcon(ButtonIcon1);
            ui->pushButton_0204->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0204->setIcon(ButtonIcon2);
            ui->pushButton_0204->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 6){
        if(p == 1){
            ui->pushButton_0206->setIcon(ButtonIcon1);
            ui->pushButton_0206->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0206->setIcon(ButtonIcon2);
            ui->pushButton_0206->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 8){
        if(p == 1){
            ui->pushButton_0208->setIcon(ButtonIcon1);
            ui->pushButton_0208->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0208->setIcon(ButtonIcon2);
            ui->pushButton_0208->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 10){
        if(p == 1){
            ui->pushButton_0210->setIcon(ButtonIcon1);
            ui->pushButton_0210->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0210->setIcon(ButtonIcon2);
            ui->pushButton_0210->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 12){
        if(p == 1){
            ui->pushButton_0212->setIcon(ButtonIcon1);
            ui->pushButton_0212->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0212->setIcon(ButtonIcon2);
            ui->pushButton_0212->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 14){
        if(p == 1){
            ui->pushButton_0214->setIcon(ButtonIcon1);
            ui->pushButton_0214->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0214->setIcon(ButtonIcon2);
            ui->pushButton_0214->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 2 && y == 16){
        if(p == 1){
            ui->pushButton_0216->setIcon(ButtonIcon1);
            ui->pushButton_0216->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0216->setIcon(ButtonIcon2);
            ui->pushButton_0216->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 0){
        if(p == 1){
            ui->pushButton_0400->setIcon(ButtonIcon1);
            ui->pushButton_0400->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0400->setIcon(ButtonIcon2);
            ui->pushButton_0400->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 2){
        if(p == 1){
            ui->pushButton_0402->setIcon(ButtonIcon1);
            ui->pushButton_0402->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0402->setIcon(ButtonIcon2);
            ui->pushButton_0402->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 4){
        if(p == 1){
            ui->pushButton_0404->setIcon(ButtonIcon1);
            ui->pushButton_0404->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0404->setIcon(ButtonIcon2);
            ui->pushButton_0404->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 6){
        if(p == 1){
            ui->pushButton_0406->setIcon(ButtonIcon1);
            ui->pushButton_0406->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0406->setIcon(ButtonIcon2);
            ui->pushButton_0406->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 8){
        if(p == 1){
            ui->pushButton_0408->setIcon(ButtonIcon1);
            ui->pushButton_0408->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0408->setIcon(ButtonIcon2);
            ui->pushButton_0408->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 10){
        if(p == 1){
            ui->pushButton_0410->setIcon(ButtonIcon1);
            ui->pushButton_0410->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0410->setIcon(ButtonIcon2);
            ui->pushButton_0410->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 12){
        if(p == 1){
            ui->pushButton_0412->setIcon(ButtonIcon1);
            ui->pushButton_0412->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0412->setIcon(ButtonIcon2);
            ui->pushButton_0412->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 14){
        if(p == 1){
            ui->pushButton_0414->setIcon(ButtonIcon1);
            ui->pushButton_0414->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0414->setIcon(ButtonIcon2);
            ui->pushButton_0414->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 4 && y == 16){
        if(p == 1){
            ui->pushButton_0416->setIcon(ButtonIcon1);
            ui->pushButton_0416->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0416->setIcon(ButtonIcon2);
            ui->pushButton_0416->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 0){
        if(p == 1){
            ui->pushButton_0600->setIcon(ButtonIcon1);
            ui->pushButton_0600->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0600->setIcon(ButtonIcon2);
            ui->pushButton_0600->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 2){
        if(p == 1){
            ui->pushButton_0602->setIcon(ButtonIcon1);
            ui->pushButton_0602->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0602->setIcon(ButtonIcon2);
            ui->pushButton_0602->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 4){
        if(p == 1){
            ui->pushButton_0604->setIcon(ButtonIcon1);
            ui->pushButton_0604->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0604->setIcon(ButtonIcon2);
            ui->pushButton_0604->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 6){
        if(p == 1){
            ui->pushButton_0606->setIcon(ButtonIcon1);
            ui->pushButton_0606->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0606->setIcon(ButtonIcon2);
            ui->pushButton_0606->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 8){
        if(p == 1){
            ui->pushButton_0608->setIcon(ButtonIcon1);
            ui->pushButton_0608->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0608->setIcon(ButtonIcon2);
            ui->pushButton_0608->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 10){
        if(p == 1){
            ui->pushButton_0610->setIcon(ButtonIcon1);
            ui->pushButton_0610->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0610->setIcon(ButtonIcon2);
            ui->pushButton_0610->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 12){
        if(p == 1){
            ui->pushButton_0612->setIcon(ButtonIcon1);
            ui->pushButton_0612->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0612->setIcon(ButtonIcon2);
            ui->pushButton_0612->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 14){
        if(p == 1){
            ui->pushButton_0614->setIcon(ButtonIcon1);
            ui->pushButton_0614->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0614->setIcon(ButtonIcon2);
            ui->pushButton_0614->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 6 && y == 16){
        if(p == 1){
            ui->pushButton_0616->setIcon(ButtonIcon1);
            ui->pushButton_0616->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0616->setIcon(ButtonIcon2);
            ui->pushButton_0616->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 0){
        if(p == 1){
            ui->pushButton_0800->setIcon(ButtonIcon1);
            ui->pushButton_0800->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0800->setIcon(ButtonIcon2);
            ui->pushButton_0800->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 2){
        if(p == 1){
            ui->pushButton_0802->setIcon(ButtonIcon1);
            ui->pushButton_0802->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0802->setIcon(ButtonIcon2);
            ui->pushButton_0802->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 4){
        if(p == 1){
            ui->pushButton_0804->setIcon(ButtonIcon1);
            ui->pushButton_0804->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0804->setIcon(ButtonIcon2);
            ui->pushButton_0804->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 6){
        if(p == 1){
            ui->pushButton_0806->setIcon(ButtonIcon1);
            ui->pushButton_0806->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0806->setIcon(ButtonIcon2);
            ui->pushButton_0806->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 8){
        if(p == 1){
            ui->pushButton_0808->setIcon(ButtonIcon1);
            ui->pushButton_0808->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0808->setIcon(ButtonIcon2);
            ui->pushButton_0808->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 10){
        if(p == 1){
            ui->pushButton_0810->setIcon(ButtonIcon1);
            ui->pushButton_0810->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0810->setIcon(ButtonIcon2);
            ui->pushButton_0810->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 12){
        if(p == 1){
            ui->pushButton_0812->setIcon(ButtonIcon1);
            ui->pushButton_0812->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0812->setIcon(ButtonIcon2);
            ui->pushButton_0812->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 14){
        if(p == 1){
            ui->pushButton_0814->setIcon(ButtonIcon1);
            ui->pushButton_0814->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0814->setIcon(ButtonIcon2);
            ui->pushButton_0814->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 8 && y == 16){
        if(p == 1){
            ui->pushButton_0816->setIcon(ButtonIcon1);
            ui->pushButton_0816->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_0816->setIcon(ButtonIcon2);
            ui->pushButton_0816->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 0){
        if(p == 1){
            ui->pushButton_1000->setIcon(ButtonIcon1);
            ui->pushButton_1000->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1000->setIcon(ButtonIcon2);
            ui->pushButton_1000->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 2){
        if(p == 1){
            ui->pushButton_1002->setIcon(ButtonIcon1);
            ui->pushButton_1002->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1002->setIcon(ButtonIcon2);
            ui->pushButton_1002->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 4){
        if(p == 1){
            ui->pushButton_1004->setIcon(ButtonIcon1);
            ui->pushButton_1004->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1004->setIcon(ButtonIcon2);
            ui->pushButton_1004->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 6){
        if(p == 1){
            ui->pushButton_1006->setIcon(ButtonIcon1);
            ui->pushButton_1006->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1006->setIcon(ButtonIcon2);
            ui->pushButton_1006->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 8){
        if(p == 1){
            ui->pushButton_1008->setIcon(ButtonIcon1);
            ui->pushButton_1008->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1008->setIcon(ButtonIcon2);
            ui->pushButton_1008->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 10){
        if(p == 1){
            ui->pushButton_1010->setIcon(ButtonIcon1);
            ui->pushButton_1010->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1010->setIcon(ButtonIcon2);
            ui->pushButton_1010->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 12){
        if(p == 1){
            ui->pushButton_1012->setIcon(ButtonIcon1);
            ui->pushButton_1012->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1012->setIcon(ButtonIcon2);
            ui->pushButton_1012->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 14){
        if(p == 1){
            ui->pushButton_1014->setIcon(ButtonIcon1);
            ui->pushButton_1014->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1014->setIcon(ButtonIcon2);
            ui->pushButton_1014->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 10 && y == 16){
        if(p == 1){
            ui->pushButton_1016->setIcon(ButtonIcon1);
            ui->pushButton_1016->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1016->setIcon(ButtonIcon2);
            ui->pushButton_1016->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 0){
        if(p == 1){
            ui->pushButton_1200->setIcon(ButtonIcon1);
            ui->pushButton_1200->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1200->setIcon(ButtonIcon2);
            ui->pushButton_1200->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 2){
        if(p == 1){
            ui->pushButton_1202->setIcon(ButtonIcon1);
            ui->pushButton_1202->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1202->setIcon(ButtonIcon2);
            ui->pushButton_1202->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 4){
        if(p == 1){
            ui->pushButton_1204->setIcon(ButtonIcon1);
            ui->pushButton_1204->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1204->setIcon(ButtonIcon2);
            ui->pushButton_1204->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 6){
        if(p == 1){
            ui->pushButton_1206->setIcon(ButtonIcon1);
            ui->pushButton_1206->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1206->setIcon(ButtonIcon2);
            ui->pushButton_1206->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 8){
        if(p == 1){
            ui->pushButton_1208->setIcon(ButtonIcon1);
            ui->pushButton_1208->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1208->setIcon(ButtonIcon2);
            ui->pushButton_1208->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 10){
        if(p == 1){
            ui->pushButton_1210->setIcon(ButtonIcon1);
            ui->pushButton_1210->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1210->setIcon(ButtonIcon2);
            ui->pushButton_1210->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 12){
        if(p == 1){
            ui->pushButton_1212->setIcon(ButtonIcon1);
            ui->pushButton_1212->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1212->setIcon(ButtonIcon2);
            ui->pushButton_1212->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 14){
        if(p == 1){
            ui->pushButton_1214->setIcon(ButtonIcon1);
            ui->pushButton_1214->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1214->setIcon(ButtonIcon2);
            ui->pushButton_1214->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 12 && y == 16){
        if(p == 1){
            ui->pushButton_1216->setIcon(ButtonIcon1);
            ui->pushButton_1216->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1216->setIcon(ButtonIcon2);
            ui->pushButton_1216->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 0){
        if(p == 1){
            ui->pushButton_1400->setIcon(ButtonIcon1);
            ui->pushButton_1400->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1400->setIcon(ButtonIcon2);
            ui->pushButton_1400->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 2){
        if(p == 1){
            ui->pushButton_1402->setIcon(ButtonIcon1);
            ui->pushButton_1402->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1402->setIcon(ButtonIcon2);
            ui->pushButton_1402->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 4){
        if(p == 1){
            ui->pushButton_1404->setIcon(ButtonIcon1);
            ui->pushButton_1404->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1404->setIcon(ButtonIcon2);
            ui->pushButton_1404->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 6){
        if(p == 1){
            ui->pushButton_1406->setIcon(ButtonIcon1);
            ui->pushButton_1406->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1406->setIcon(ButtonIcon2);
            ui->pushButton_1406->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 8){
        if(p == 1){
            ui->pushButton_1408->setIcon(ButtonIcon1);
            ui->pushButton_1408->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1408->setIcon(ButtonIcon2);
            ui->pushButton_1408->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 10){
        if(p == 1){
            ui->pushButton_1410->setIcon(ButtonIcon1);
            ui->pushButton_1410->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1410->setIcon(ButtonIcon2);
            ui->pushButton_1410->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 12){
        if(p == 1){
            ui->pushButton_1412->setIcon(ButtonIcon1);
            ui->pushButton_1412->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1412->setIcon(ButtonIcon2);
            ui->pushButton_1412->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 14){
        if(p == 1){
            ui->pushButton_1414->setIcon(ButtonIcon1);
            ui->pushButton_1414->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1414->setIcon(ButtonIcon2);
            ui->pushButton_1414->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 14 && y == 16){
        if(p == 1){
            ui->pushButton_1416->setIcon(ButtonIcon1);
            ui->pushButton_1416->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1416->setIcon(ButtonIcon2);
            ui->pushButton_1416->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 0){
        if(p == 1){
            ui->pushButton_1600->setIcon(ButtonIcon1);
            ui->pushButton_1600->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1600->setIcon(ButtonIcon2);
            ui->pushButton_1600->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 2){
        if(p == 1){
            ui->pushButton_1602->setIcon(ButtonIcon1);
            ui->pushButton_1602->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1602->setIcon(ButtonIcon2);
            ui->pushButton_1602->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 4){
        if(p == 1){
            ui->pushButton_1604->setIcon(ButtonIcon1);
            ui->pushButton_1604->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1604->setIcon(ButtonIcon2);
            ui->pushButton_1604->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 6){
        if(p == 1){
            ui->pushButton_1606->setIcon(ButtonIcon1);
            ui->pushButton_1606->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1606->setIcon(ButtonIcon2);
            ui->pushButton_1606->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 8){
        if(p == 1){
            ui->pushButton_1608->setIcon(ButtonIcon1);
            ui->pushButton_1608->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1608->setIcon(ButtonIcon2);
            ui->pushButton_1608->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 10){
        if(p == 1){
            ui->pushButton_1610->setIcon(ButtonIcon1);
            ui->pushButton_1610->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1610->setIcon(ButtonIcon2);
            ui->pushButton_1610->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 12){
        if(p == 1){
            ui->pushButton_1612->setIcon(ButtonIcon1);
            ui->pushButton_1612->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1612->setIcon(ButtonIcon2);
            ui->pushButton_1612->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 14){
        if(p == 1){
            ui->pushButton_1614->setIcon(ButtonIcon1);
            ui->pushButton_1614->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1614->setIcon(ButtonIcon2);
            ui->pushButton_1614->setIconSize(pixmap2.rect().size());
        }
    }

    if(x == 16 && y == 16){
        if(p == 1){
            ui->pushButton_1616->setIcon(ButtonIcon1);
            ui->pushButton_1616->setIconSize(pixmap1.rect().size());
        }
        if(p == 2){
            ui->pushButton_1616->setIcon(ButtonIcon2);
            ui->pushButton_1616->setIconSize(pixmap2.rect().size());
        }
    }
}
