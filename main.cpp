#include <iostream>
char obenLinks = '1';
char obenMitte = '2';
char obenRechts = '3';
char mitteLinks='4';
char mitteMitte = '5';
char mitteRechts = '6';
char untenLinks = '7';
char untenMitte= '8';
char untenRechts ='9';
int wahl=0;

/*
 * TO DO: Wenn falsches Spielfeld makiert, muss die SPiellogik angepasst werden
 */


void board()
{
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Spieler 1 (X)  vs. Spieler 2 (O)" << std::endl;
    std::cout << "     |     |     "  << std::endl;
    std::cout << "  " << obenLinks<< "  |  " << obenMitte << "  |  " << obenRechts<< std::endl;
    std::cout <<  "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << mitteLinks<< "  |  " <<mitteMitte << "  |  " << mitteRechts << std::endl;
    std::cout << "_____|_____|_____" <<  std::endl;
    std::cout << "     |     |     " <<  std::endl;
    std::cout << "  " << untenLinks << "  |  " << untenMitte << "  |  " << untenRechts << std::endl;
    std::cout << "     |     |     " <<std::endl;
}


int checkwin(){
    if (obenLinks == obenMitte && obenMitte == obenRechts){
        return 3;
    }

    else if (mitteLinks==mitteMitte && mitteMitte==mitteRechts){
        return 3;
    }

    else if (untenLinks == untenMitte && untenMitte==untenRechts){
        return 3;
    }

    else if(obenLinks == mitteLinks && mitteLinks == untenLinks){
        return 3;
    }
    else if(obenMitte == mitteMitte && mitteMitte == untenMitte){
        return 3;
    }
    else if (obenLinks == mitteLinks && mitteLinks == untenLinks){
        return 3;
    }
    else if (obenRechts == mitteRechts && mitteRechts == untenRechts){
        return 3;
    }
    else if (obenLinks == mitteMitte && mitteMitte == untenRechts){
        return 3;
    }
    else if (obenRechts == mitteMitte && mitteMitte == untenLinks){
        return 3;
    }
    else{
        return 0;
    }



}

//int makiereFeld(wahl, mark){
  void makiereFeld(char mark){
    std::cin >> wahl;
    if(wahl == 1 && obenLinks == '1'){
        obenLinks = mark;
    }
    else if(wahl == 2 && obenMitte == '2'){
        obenMitte=mark;
    }
    else if (wahl == 3 && obenRechts == '3'){
        obenRechts= mark;
    }

    else if (wahl == 4 && mitteLinks == '4'){
        mitteLinks =mark;
    }
    else if (wahl == 5 && mitteMitte == '5'){
        mitteMitte=mark;
    }
    else if (wahl == 6 && mitteRechts == '6'){
        mitteRechts=mark;

    }
    else if (wahl == 7 && untenLinks == '7'){
        untenLinks = mark;
    }
    else if (wahl == 8 && untenMitte == '8'){
        untenMitte=mark;
    }
    else if (wahl == 9 && untenMitte == '9'){
        untenMitte=mark;
    }

    else
    {
        //std::cout<<"ungueltige Eingabe, bitte erneut eingeben"<<std::endl;
        //spieler--;
        std::cin.ignore() >> wahl;
        std::cin.get() >> wahl;
    }



}

int main() {
    //board();

    int spieler = 1;
    int werGewonnen =0;
    char mark ='N';
    while (werGewonnen==0){
        board();

        if (spieler%2){
            spieler = 1;
            mark = 'X';
        }
        else{
            spieler = 2;
            mark = 'O';
        }
        std::cout<<"Spieler "<<spieler << ", enter a number . " <<std::endl;
        makiereFeld(mark);
        werGewonnen = checkwin();
        spieler++;
    }


    if (werGewonnen==3){
        std::cout<<"+++++++ Sieger ist : "<<--spieler<<" +++++++++++ "<<std::endl;
    }
    else{
        std::cout<<"==> es ist ein unentschieden"<<std::endl;
    }
    std::cin.ignore() >> wahl;
    std::cin.get() >> wahl;
    return 0;
}

