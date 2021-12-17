#include <iostream>
#include <string>
#include <vector>

size_t liczba_zapytan = 5;

int main() {
  std::string bufor = "";
  std::vector<std::string> imiona = {};

  for (size_t i = 0; i < liczba_zapytan; i++) {
    std::cout << "Podaj " << i + 1 << " imie: ";
    std::cin >> bufor;
    imiona.push_back(bufor);
  }

  int zenskie = 0;
  for (size_t i = 0; i < imiona.size(); i++) {
    bufor = imiona[i];
    if (bufor.back() == 'a')
      zenskie++;
  }

  std::cout << "Zenskie: " << zenskie << std::endl;
  std::cout << "Meskie: " << imiona.size() - zenskie << std::endl;

  return 0;
}