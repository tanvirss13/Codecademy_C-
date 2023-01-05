//
//  main.cpp
//  codeacademy_theObjectOfAffection
//
//  Created by Tanvir Sethi on 5/31/22.
//

#include <iostream>
#include "obj_of_affection.hpp"

int main() {

  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  
  sam.add_hobby("listening to audiobooks and podcasts");
  sam.add_hobby("playing rec sports like bowling and kickball");
  sam.add_hobby("writing a speculative fiction novel");
  sam.add_hobby("reading advice columns");

  std::cout << sam.view_profile() << "\n";

  Profile tan("Tanvir Sethi", 24, "Seattle", "USA", "he/him");

  tan.add_hobby("listening to music");
  tan.add_hobby("playing soccer, golf, pool and going to the gym");
  tan.add_hobby("watching youtube videos about new programming language");

  std::cout << tan.view_profile();
}
