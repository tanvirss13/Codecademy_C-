//
//  main.cpp
//  TextAdventureCodeacademy
//
//  Created by Tanvir Sethi on 5/31/22.
//


#include <iostream>
#include <cmath>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;

int main() {
  cout << "Alice's Adventures in Wonderland" << endl;

  cout << "It's been a strange day indeed. You've fallen down a rabbit hole, happened across a strange tea party, and had many other absurd adventures." << endl;
  cout << "But now, you are called to a trial of some sort, ushered in by a Gryphon." << endl;
  cout << "The King and Queen of Hearts are seated on their throne when you arrive, with a great crowd assembled about them — all sorts of little birds and beasts, as well as the whole pack of cards.";
  cout << "The White Rabbit is standing near the King, with a trumpet in one hand, and a scroll of parchment in the other.\n";
  cout << "In the very middle of the court is a table, with a large dish of tarts upon it. They look really good, making you feel quite hungry.\n";
  cout << "You see twelve jurors writing busily on slates. You wonder how they have anything to write down before the trial's begun.\n";
  cout << "*      *      *\n";
  cout << "What do you do?\n";

  int choice1;
  cout << "1) if you ask the Gryphon next to you what the jurors are doing.\n";
  cout << "2) if you sneak a tart.\n";
  cout << "3) if you sit and wait for the trial to begin.\n";

  cout << "Enter your choice: ";
  cin >> choice1;

  if(choice1 == 1){
  cout << "Enter A \n";
  } else if(choice1 == 2){
    cout << "Enter B \n";
  } else if (choice1 == 3){
    cout << "Enter C \n";
  } else{
    cout << "Start from the very beginning.\n\n";
  }
 

}

