#include <iostream>

int main() {
  // my dog's present age according to human years
  int dog_age = 5;
  int early_years = 21; //first two years of the dog age
  int later_years; // after the first two years of the dog's age
  int human_years; //age of the dog according to human's

  later_years = (dog_age - 2) * 4; // calculating the age of the dog after it has turned 21 in dog years
  human_years = early_years + later_years; // actual age of the dog in dog years

  std::cout << "My name is Arrow! " << "Ruff ruff, I am " << human_years << " years old in human years. \n";

  return 0;
  
}
