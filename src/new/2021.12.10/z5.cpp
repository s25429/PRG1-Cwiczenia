#include <iostream>
#include <string>

bool is_even(int n) {
  return !(n & 1);
}

int main() {
  std::cout << "Czy 17 jest parzysta? " << (is_even(17) ? "Tak" : "Nie") << std::endl;
  std::cout << "Czy 126 jest parzysta? " << (is_even(126) ? "Tak" : "Nie") << std::endl;

  return 0;
}