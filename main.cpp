#include <iostream>
#include <string>
using namespace std;


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
int spieler = 1;
string gewonnen = "nein";

/*
 * TO DO: Wenn falsches Spielfeld makiert, muss die Spiellogik angepasst werden
 * BUG: Wenn falsche Eingabe dann läuft der Code in einer Dauerschleife
 */


void board()
{
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


string checkwin(){
    if (obenLinks == obenMitte && obenMitte == obenRechts){
        return "ja";
    }

    else if (mitteLinks==mitteMitte && mitteMitte==mitteRechts){
        return "ja";
    }

    else if (untenLinks == untenMitte && untenMitte==untenRechts){
        return "ja";
    }

    else if(obenLinks == mitteLinks && mitteLinks == untenLinks){
        return "ja";
    }
    else if(obenMitte == mitteMitte && mitteMitte == untenMitte){
        return "ja";
    }
    else if (obenLinks == mitteLinks && mitteLinks == untenLinks){
        return "ja";
    }
    else if (obenRechts == mitteRechts && mitteRechts == untenRechts){
        return "ja";
    }
    else if (obenLinks == mitteMitte && mitteMitte == untenRechts){
        return "ja";
    }
    else if (obenRechts == mitteMitte && mitteMitte == untenLinks){
        return "ja";
    }
    else{
        return "nein";
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
        std::cout<<"ungueltige Eingabe, bitte erneut eingeben"<<std::endl;
        spieler = spieler -1;
        //spieler--;
        std::cin.ignore() >> wahl;
        std::cin.get() >> wahl;
    }



}

int main() {

    char mark ='N';
    while (gewonnen == "nein"){
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
        gewonnen = checkwin();
        if(gewonnen=="ja"){
            std::cout<<"+++++ Sieger ist Spieler : "<<spieler<<"++++"<<std::endl;
        }
        spieler++;
    }

    return 0;
}

