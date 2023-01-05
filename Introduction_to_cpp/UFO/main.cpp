//
//  main.cpp
//  UFO_Game
//
//  Created by Tanvir Sethi on 5/31/22.
//


// UFOGame
// UFO Game in cpp in Codeacademy


// main.cpp
#include <iostream>
#include "ufo_functions.hpp"
using std::cout;
using std::cin;

void greet(){
  cout << "=============" <<"\n";
  cout << "UFO: The Game" <<"\n";
  cout << "=============" <<"\n";
  cout << "Instructions: save your friend from alien abduction by guessing the letters in the codeword.\n";
  
}

int main() {
greet();
std::string codeword = "codeacademy";
std::string answer = "___________";
int misses = 0;
std::vector<char> incorrect;
bool guess = false;
char letter;

while (answer != codeword && misses < 7){
  display_misses(misses);
  cout << "\nIncorrect Guesses:\n";

  for(int i = 0; i < incorrect.size(); i++) {
    cout << incorrect[i] << ' ';
  }

  cout << "Codeword: \n";
  for (int i = 0; i < answer.length(); i++){
    cout << answer[i] << ' ';
  }
  display_status(incorrect, answer);
  cout << "Please enter your guess: \n";
  cin >> letter;
  for( int i = 0; i < codeword.length(); i++){
    if(letter == codeword[i]) {
      answer[i] = letter;
      guess = true;
    }
  }
  if (guess){
    cout << "\nCorrect!\n";
  } else {
    cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
    incorrect.push_back(letter);
    misses++;
  }
}
end_game(answer, codeword);

}
