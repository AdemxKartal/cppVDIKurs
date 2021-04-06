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

void board()
{
    //system("cls");
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Player 1 (X)  vs. Player 2 (O)" << std::endl;
    //cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    std::cout << "     |     |     "  << std::endl;
    std::cout << "  " << obenLinks<< "  |  " << obenMitte << "  |  " << obenRechts<< std::endl;
    std::cout <<  "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << mitteLinks<< "  |  " <<mitteMitte << "  |  " << mitteRechts << std::endl;
    std::cout << "_____|_____|_____" <<  std::endl;
    std::cout << "     |     |     " <<  std::endl;
    std::cout << "  " << untenRechts << "  |  " << untenMitte << "  |  " << untenRechts << std::endl;
    std::cout << "     |     |     " <<std::endl;
}




int main() {
    board();
    return 0;
}
