#include <iostream>
using namespace std;

int main() {
  double pesos,reais,soles;
  double dollars;

  cout << "Enter number of Colombian Pesos: \n";
  cin >> pesos;
  cout << "Enter number of Brazilian Reais: \n";
  cin >> reais;
  cout << "Enter number of Peruvian Soles: \n";
  cin >> soles;
  
  double conversion_rate1= 0.00027;
  double conversion_rate2= 0.21;
  double conversion_rate3= 0.27;

  dollars = (conversion_rate1 * pesos) + (conversion_rate2 * reais) + (conversion_rate3 * soles);

  cout << "US Dollars = $" << dollars << "\n";

  return 0;
}
