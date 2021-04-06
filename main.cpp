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
        return 1;
    }

    else if (mitteLinks==mitteMitte && mitteMitte==mitteRechts){
        return 1;
    }

    else if (untenLinks == untenMitte && untenMitte==untenRechts){
        return 1;
    }

    else if(obenLinks == mitteLinks && mitteLinks == untenLinks){
        return 1;
    }
    else if(obenMitte == mitteMitte && mitteMitte == untenMitte){
        return 1;
    }
    else if (obenLinks == mitteLinks && mitteLinks == untenLinks){
        return 1;
    }
    else if (obenRechts == mitteRechts && mitteRechts == untenRechts){
        return 1;
    }
    else if (obenLinks == mitteMitte && mitteMitte == untenRechts){
        return 1;
    }
    else if (obenRechts == mitteMitte && mitteMitte == untenLinks){
        return 1;
    }
    else{
        return -1;
    }



}

/*
int main(){
    board();
    return -1;
}
*/

int main() {
    board();
    int player = 1;
    int i =0;
    int choice=0;
    char mark=0;
    do{
        board();
    player = (player%2)?1:2;
    std::cout<<"Player"<<player << ", enter a number . " <<std::endl;
    std::cin>>choice;
    mark = (player==1)? 'X' : 'O';
    if(choice ==1 && obenLinks=='1'){
        obenLinks = mark;
    }
    else if(choice == 2 && obenMitte=='2'){
        obenMitte=mark;
    }
    else if (choice == 3 && obenRechts=='3'){
        obenRechts= mark;
    }

    else if (choice ==4 && mitteLinks =='4'){
        mitteLinks =mark;
    }
    else if (choice ==5 && mitteMitte=='5'){
        mitteMitte=mark;
    }
    else if (choice==6 && mitteRechts=='6'){
        mitteRechts=mark;

    }
    else if (choice==7 && untenLinks=='7'){
    untenLinks = mark;
    }
    else if (choice==8 &&untenMitte=='8'){
        untenMitte=mark;
    }
    else if (choice==9 && untenMitte =='9'){
        untenMitte=mark;
    }

    else
    {
        std::cout<<"ungueltige Eingabe, bitte erneut eingeben"<<std::endl;
        player--;
        std::cin.ignore()>>choice;
        std::cin.get()>>choice;
    }

    i = checkwin();
    player++;
    }while(i==-1);
    board();

    if (i==1){
        std::cout<<"==>\aPlayer "<<--player<<" win "<<std::endl;
    }
    else{
        std::cout<<"==> es ist ein unentschieden"<<std::endl;
    }
    std::cin.ignore()>>choice;
    std::cin.get()>>choice;
    return 0;
}


