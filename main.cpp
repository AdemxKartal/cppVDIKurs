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

int main(){
    zeichneSpielfeld();
    return 0;
}