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
char gewonnen = 'n';

/*
 * TO DO: Wenn falsches Spielfeld makiert, muss die Spiellogik angepasst werden
 * BUG: Wenn falsche Eingabe dann läuft der Code in einer Dauerschleife
 */


void spielfeld()
{
    cout << "Spieler 1 (X)  gegen Spieler 2 (O)" << endl;
    cout << "     |     |     "  << endl;
    cout << "  " << obenLinks<< "  |  " << obenMitte << "  |  " << obenRechts<< endl;
    cout <<  "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << mitteLinks<< "  |  " <<mitteMitte << "  |  " << mitteRechts << endl;
    cout << "_____|_____|_____" <<  endl;
    cout << "     |     |     " <<  endl;
    cout << "  " << untenLinks << "  |  " << untenMitte << "  |  " << untenRechts << endl;
    cout << "     |     |     " <<endl;
}


void checkwin(){
    if (obenLinks == obenMitte && obenMitte == obenRechts){
        gewonnen = 'j';
    }

    else if (mitteLinks==mitteMitte && mitteMitte==mitteRechts){
        gewonnen = 'j';
    }

    else if (untenLinks == untenMitte && untenMitte==untenRechts){
        gewonnen = 'j';
    }

    else if(obenLinks == mitteLinks && mitteLinks == untenLinks){
        gewonnen = 'j';
    }
    else if(obenMitte == mitteMitte && mitteMitte == untenMitte){
        gewonnen='j';
    }
    else if (obenLinks == mitteLinks && mitteLinks == untenLinks){
        gewonnen='j';
    }
    else if (obenRechts == mitteRechts && mitteRechts == untenRechts){
        gewonnen = 'j';
    }
    else if (obenLinks == mitteMitte && mitteMitte == untenRechts){
        gewonnen = 'j';
    }
    else if (obenRechts == mitteMitte && mitteMitte == untenLinks){
        gewonnen = 'j';
    }
}


  void makiereFeld(char mark){
    cin >> wahl;
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
        cout<<"ungueltige Eingabe, bitte erneut eingeben"<<endl;
        spieler = spieler -1;
        cin.ignore() >> wahl;
        cin.get() >> wahl;
    }
}

int main() {

    char mark ='N';
    while (gewonnen == 'n'){
        spielfeld();

        if (spieler%2){
            spieler = 1;
            mark = 'X';
        }
        else{
            spieler = 2;
            mark = 'O';
        }
        cout<<"Spieler: "<<spieler << "ist an der Reihe. " <<endl;
        makiereFeld(mark);
        checkwin();
        if(gewonnen=='j'){
            cout<<"+++++ Sieger ist Spieler : "<<spieler<<"++++"<<endl;
        }
        spieler=spieler+1;
    }
    return 0;
}

