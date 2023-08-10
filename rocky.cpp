#include <iostream>
#include <random>
using namespace std;

int main()
{
    int option;
    char playAgain;
        
cout <<"ROCK, PAPER SCISSORS GAME \n";

 do{ 
cout <<"Enter 1 for ROCK \n"
     <<      "2 for PAPER \n"
     <<      "3 for SCISSORS \n"
     <<"Input option: "; 
     cin >>option;

//random for computer to choose
random_device rd;
mt19937 gen(rd());

//random number range
int lowerBound = 1;
int upperBound = 3;

uniform_int_distribution<int> distribution(lowerBound, upperBound);
int randomNumber = distribution(gen);

switch (option){
    case 1:
   if (randomNumber == 1) {
            cout <<"User Input: ROCK \n";
            cout <<"Computer Input: ROCK \n";
            cout <<"DRAW!! \n";
        } else if (randomNumber == 2) {
            cout <<"User Input: ROCK \n";
            cout <<"Computer Input: PAPER \n";
            cout <<"Computer Win!! \n";
        } else if (randomNumber == 3) {
            cout <<"User Input: ROCK \n";
            cout <<"Computer Input: SCISSORS \n";
            cout <<"You Win!! \n";
        }
    break;
    
    case 2:
 if (randomNumber == 1) {
            cout <<"User Input: PAPER \n";
            cout <<"Computer Input: ROCK \n";
            cout <<"You Win!! \n";
        } else if (randomNumber == 2) {
            cout <<"User Input: PAPER \n";
            cout <<"Computer Input: PAPER \n";
            cout <<"DRAW\n";
        } else if (randomNumber == 3) {
            cout <<"User Input: PAPER \n";
            cout <<"Computer Input: SCISSORS \n";
            cout <<"You Win!! \n";
        }
    break;
    
    case 3:
    if (randomNumber == 1) {
            cout <<"User Input: SCISSOR \n";
            cout <<"Computer Input: ROCK \n";
            cout <<"Computer Win!! \n";
        } else if (randomNumber == 2) {
            cout <<"User Input: SCISSOR \n";
            cout <<"Computer Input: PAPER \n";
            cout <<"You Win \n";
        } else if (randomNumber == 3) {
            cout <<"User Input: SCISSOR \n";
            cout <<"Computer Input: SCISSORS \n";
            cout <<"DRAW!! \n";
        }
        break;
    
        default:
        cout <<"Input Incorrect ";
        break;
    
        }
        
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } 
    while (playAgain == 'y' || playAgain == 'Y');
    
        cout << "Thank you for playing!" ;
        
return 0;
}
