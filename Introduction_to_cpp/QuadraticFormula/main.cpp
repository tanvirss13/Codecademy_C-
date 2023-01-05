#include <iostream>
#include <cmath>

int main() {
  double a;
  double b;
  double c;

  std::cout << "Enter a: ";
  std::cin >> a;

  std::cout << "Enter b: ";
  std::cin >> b;

  std::cout << "Enter c: ";
  std::cin >> c;

  double root1;
  double root2;

  root1 = (-b + std::sqrt(pow(b,2) - 4*a*c)) / 2*a;
  root2 = (-b - std::sqrt(pow(b,2) - 4*a*c)) / 2*a;


  std::cout << "The roots of the equation are: " << root1 << " and " << root2 <<". \n";
  
  return 0;

  
}
