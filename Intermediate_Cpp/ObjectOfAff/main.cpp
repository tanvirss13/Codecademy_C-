#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "profile.hpp"
using namespace std;

int main(){
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  // sam.name("Sam Drakkila");
 

  sam.add_hobby("listening to audiobooks and podcasts");
  sam.add_hobby("playing rec sports like bowling and kickball");
  sam.add_hobby("writing a speculative fiction novel");
  sam.add_hobby("reading advice columns");

  cout << sam.view_profile() << "\n";

}
