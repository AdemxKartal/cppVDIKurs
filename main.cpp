// -------------------- Beginn: Einstellungen ------------------------------
#include <iostream>
#include <string>
using namespace std;
// ------------------- Ende: Einstellungen ---------------------------------

char obenLinks = '1';
char obenMitte = '2';
char obenRechts = '3';
char mitteLinks='4';
char mitteMitte = '5';
char mitteRechts = '6';
char untenLinks = '7';
char untenMitte= '8';
char untenRechts ='9';
char makierung = 'X';
int wahl = 0;


void zeichneSpielfeld()
{
    cout << "Player 1 (X)  vs. Player 2 (O)" << std::endl;
    cout << "     |     |     "  << endl;
    cout << "  " << obenLinks<< "  |  " << obenMitte << "  |  " << obenRechts<< endl;
    cout <<  "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << mitteLinks<< "  |  " <<mitteMitte << "  |  " << mitteRechts << endl;
    cout << "_____|_____|_____" <<  endl;
    cout << "     |     |     " <<  endl;
    cout << "  " << untenLinks << "  |  " << untenMitte << "  |  " << untenRechts << endl;
    cout << "     |     |     " <<std::endl;
}


void makiereFeld(){
    cout<<" wähle ein Feld zwischen 1 bis 9 aus "<<endl;
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
    else if (wahl == 9 && untenRechts == '9'){
        untenRechts=mark;
    }

    else
    {
        cout<<"ungueltige Eingabe, bitte erneut eingeben"<<endl;
        cin.ignore() >> wahl;
        cin.get() >> wahl;
    }
}

int main(){
    zeichneSpielfeld();
    makiereFeld(makierung);
    zeichneSpielfeld();
    return 0;
}
