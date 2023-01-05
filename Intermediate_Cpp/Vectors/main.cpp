#include <iostream>
#include <vector>

int main () {
  std::vector < int >primes = { 2, 3, 5, 7, 11 };

  std::cout << primes[2] << "\n";
  std::cout << primes.front() << "\n";
  std::cout << primes.back() << "\n";

  primes.push_back (13);
  primes.push_back (17);

  primes.pop_back();

  for (int i = 0; i < primes.size(); i++)
    {
      std::cout << primes[i] << " ";
    }
  for(int number:primes){
    std::cout << number << " ";
    }

  return 0;
}

