#include <iostream>
#include <stdlib.h>


// Lets play rock, paper, scissors, lizard, spock
// Scissors cuts Paper
// Paper covers Rock
// Rock crushes Lizard
// Lizard poisons Spock
// Spock smashes Scissors
// Scissors decapitate Lizard
// Lizard eats Paper
// Paper disproves Spock
// Spock vaporizes Rock
// (and as it always has) Rock crushes Scissors

using std::cout;
using std::cin;

int main() {
  srand(time(NULL));

  int computer = rand() % 5 + 1;

  int user = 0; 

  cout << "==================\n";
  cout << "rock paper scissors!\n";
  cout << "===================\n";

  cout << "1) ✊🏻  \n";
  cout << "2) ✋🏻  \n";
  cout << "3) ✌🏻  \n";
  cout << "4) 🤏🏻  \n";
  cout << "5) 🖖🏻  \n";

  cout << "shoot! ";
  cin >> user;

  if (user == 1){
    cout << "you choose: ✊🏻 \n";
  }
  else if (user == 2){
    cout << "you choose: ✋🏻 \n";
  }
  else if (user == 3){
    cout << "you choose: ✌🏻 \n";
  }
  else if (user == 4){
    cout << "you choose: 🤏🏻 \n";
  }
 else if (user == 5){
    cout << "you choose: 🖖🏻 \n";
  }


  //computer input
  if (computer == 1){
    cout << "cpu chooses: ✊🏻 \n";
  }
   else if (computer == 2){
    cout << "cpu chooses: ✋🏻 \n";
  }
  else if (computer == 3){
    cout << "cpu chooses: ✌🏻 \n";
  }
 else if (user == 4){
    cout << "cpu chooses: 🤏🏻 \n";
  }
 else if (user == 5){
    cout << "cpu chooses: 🖖🏻 \n";
  }


//for user choosing rock
  if (user == 1 && computer == 1){
    cout << "its a tie \n";
  }
  else if (user == 1 && computer == 2){
    cout << "you lose \n";
  }
  else if (user == 1 && computer == 3){
    cout << "you win \n";
  }
  else if (user == 1 && computer == 4){
    cout << "you win \n";
  }
  else if (user == 1 && computer == 5){
    cout << "you lose \n";
  }


  //for user choosing paper
  if (user == 2 && computer == 1){
    cout << "you win \n";
  }
  else if (user == 2 && computer == 2){
    cout << "its a tie \n";
  }
  else if (user == 2 && computer == 3){
    cout << "you lose \n";
  }
  else if (user == 2 && computer == 4){
    cout << "you lose \n";
  }
  else if (user == 2 && computer == 5){
    cout << "you win \n";
  }

  //for user choosing scissors
  if (user == 3 && computer == 1){
    cout << "you lose \n";
  }
  else if (user == 3 && computer == 2){
    cout << "you win \n";
  }
  else if (user == 3 && computer == 3){
    cout << "its a tie \n";
  }
  else if (user == 3 && computer == 4){
    cout << "you win \n";
  }
  else if (user == 3 && computer == 5){
    cout << "you lose \n";
  }

  //for user choosing lizard
  if (user == 4 && computer == 1){
    cout << "you lose \n";
  }
  else if (user == 4 && computer == 2){
    cout << "you win \n";
  }
  else if (user == 4 && computer == 3){
    cout << "its a lose \n";
  }
  else if (user == 4 && computer == 4){
    cout << "its a tie \n";
  }
  else if (user == 4 && computer == 5){
    cout << "you win \n";
  }


  //for user choosing scissors
  if (user == 5 && computer == 1){
    cout << "you win \n";
  }
  else if (user == 5 && computer == 2){
    cout << "you lose \n";
  }
  else if (user == 5 && computer == 3){
    cout << "you win \n";
  }
  else if (user == 5 && computer == 4){
    cout << "you lose \n";
  }
  else if (user == 5 && computer == 5){
    cout << "its a tie \n";
  }

  return 0;
}
