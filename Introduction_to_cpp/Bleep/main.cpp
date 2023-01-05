#include <iostream>
#include <string>
using namespace std;

int main(){
  string word = "broccoli";
  string text = "I sometimes eat broccoli. There are three interesting things about broccoli. Number One. Nobody knows how to spell it. Number Two. No matter how long you boil it, it's always cold by the time it reaches your plate. Number Three. It's green. #broccoli";

  for(int i=0; i<text.size(); i++){
    std::cout << text[i];
  }
  std::cout << "\n";
}
