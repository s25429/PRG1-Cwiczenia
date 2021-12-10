#include <iostream>
#include <string>

bool is_even(int n) {
  return !(n & 1);
}

bool is_divisible(int n, int d) {
  return !(n % d);
}

int main() {
  std::cout << "Czy 17 jest parzysta?\t\t";
  std::cout << (is_even(17) ? "Tak" : "Nie") << std::endl;
  std::cout << "Czy 17 jest podzielna przed 7?\t";
  std::cout << (is_divisible(17, 7) ? "Tak" : "Nie") << std::endl;

  std::cout << "Czy 126 jest parzysta?\t\t";
  std::cout << (is_even(126) ? "Tak" : "Nie") << std::endl;
  std::cout << "Czy 126 jest podzielna przed 6?\t";
  std::cout << (is_divisible(126, 6) ? "Tak" : "Nie") << std::endl;

  return 0;
}