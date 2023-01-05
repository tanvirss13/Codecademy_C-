//
//  main.cpp
//  Magic8Ball
//
//  Created by Tanvir Sethi on 5/31/22.
//

#include <iostream>
#include <stdio.h>
#include <cstdlib>

int main() {
  std::cout << "MAGIC 8-BALL\n\n";

  srand(time(NULL));
  int answer = std::rand() % 19;
  std::cout << answer << "\n";
  if (answer == 0) {
    std::cout << "It is certain. \n\n";
  }
  else if (answer == 1) {
    std::cout << "It is decidely so. \n\n";
  }
  else if (answer == 2) {
    std::cout << "Without a doubt. \n\n";
  }
  else if (answer == 3) {
    std::cout << "Yes - definitely. \n\n";
  }
  else if (answer == 4) {
    std::cout << "You may rely on it. \n\n";
  }
  else if (answer == 5) {
    std::cout << "As I see it, yes. \n\n";
  }
  else if (answer == 6) {
    std::cout << "Most likely. \n\n";
  }
  else if (answer == 7) {
    std::cout << "Outlook good. \n\n";
  }
  else if (answer == 8) {
    std::cout << "Yes. \n\n";
  }
  else if (answer == 9) {
    std::cout << "Signs point to yes. \n\n";
  }
  else if (answer == 10) {
    std::cout << "Reply hazy, try again. \n\n";
  }
  else if (answer == 11) {
    std::cout << "Ask again later. \n\n";
  }
  else if (answer == 12) {
    std::cout << "Better not tell you now. \n\n";
  }
  else if (answer == 13) {
    std::cout << "Cannot predict now. \n\n";
  }
  else if (answer == 14) {
    std::cout << "Concentrate and ask again. \n\n";
  }
  else if (answer == 15) {
    std::cout << "Don't count on it. \n\n";
  }
  else if (answer == 16) {
    std::cout << "My reply is no. \n\n";
  }
  else if (answer == 17) {
    std::cout << "My sources say no. \n\n";
  }
  else if (answer == 18) {
    std::cout << "Outlook not so good. \n\n";
  }
  else if (answer == 19) {
    std::cout << "Very doubtful. \n\n";
  }

}
