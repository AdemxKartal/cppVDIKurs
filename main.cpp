// -------------------- Beginn: Einstellungen ------------------------------
#include <iostream>
#include <string>
using namespace std;
// ------------------- Ende: Einstellungen ---------------------------------
void zeichneSpielfeld(){
    cout << "Spieler 1 (X)  gegen Spieler 2 (O)" << endl;
    cout << "     |     |     "  << endl;
    cout << "  " << " "<< "  |  " << " "<< "  |  " << " "<< endl;
    cout <<  "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << " "<< "  |  " <<" " << "  |  " << " " << endl;
    cout << "_____|_____|_____" <<  endl;
    cout << "     |     |     " <<  endl;
    cout << "  " << " " << "  |  " << " " << "  |  " << " " << endl;
    cout << "     |     |     " <<endl;
}


int main() {
    zeichneSpielfeld();
    return 0;
}
