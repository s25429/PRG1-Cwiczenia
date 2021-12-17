#include <iostream>
#include <string>
#include <vector>

constexpr size_t LICZBA_ZAPYTAN = 5;

size_t get_max_len(std::vector<std::string>& vect) {
  size_t imax = 0;

  for (auto const& str : vect)
    if (str.length() > imax)
      imax = str.length();

  return imax;
}

void box_print(std::vector<std::string>& vect) {
  size_t cols = get_max_len(vect) + 4;
  size_t rows = vect.size() + 2;

  for (size_t x = 0; x < rows; x++) {

    if (x == 0 || x == rows - 1) {
      for (size_t y = 0; y < cols; y++)
        std::cout << "*";
      std::cout << std::endl;

    } else {
      std::cout << "* ";

      std::cout << vect[x - 1];
      for (size_t y = vect[x - 1].length(); y < cols - 4; y++)
        std::cout << " ";

      std::cout << " *" << std::endl;
    }
  }
}

int main() {
  std::string bufor = "";
  std::vector<std::string> wyrazy = {};

  for (size_t i = 1; i <= LICZBA_ZAPYTAN; i++) {
    std::cout << "Podaj tekst nr " << i << ": ";
    std::getline(std::cin, bufor);
    wyrazy.push_back(bufor);
  }

  box_print(wyrazy);

  return 0;
}