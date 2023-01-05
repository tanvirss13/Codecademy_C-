//
//  main.cpp
//  FizzBuzz
//
//  Created by Tanvir Sethi on 5/31/22.
//

#include <iostream>

int main() {
  int i;

  for(i = 1; i <= 100; i++){
    if (i % 15 == 0){
    std::cout << "FizzBuzz" << std::endl;
    }
    else if (i % 5 == 0){
      std::cout << "Buzz" << std::endl;
    }
    else if (i % 3 == 0){
      std::cout << "Fizz" << std::endl;
    }
    else{
      std::cout << i << std::endl;
    }

  }
  
}
