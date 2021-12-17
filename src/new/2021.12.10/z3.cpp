#include <iostream>
#include <string>


int main() {
  std::string s1, s2;

  std::cout << "Wprowadz swoje pierwsze imie: ";
  std::cin >> s1;
  std::cout << std::endl;

  std::cout << "Wprowadz swoje drugie imie: ";
  std::cin >> s2;
  std::cout << std::endl;

  size_t sz1 = s1.length(), sz2 = s2.length();
  if (sz1 > sz2)
    std::cout << "Komunikat ten winien konczyc sie znakiem wykrzyknika." << std::endl;
  else if (sz1 < sz2)
    std::cout << "ale konczacy sie trzema kropkami." << std::endl;
  else
    std::cout << "ale zakonczony kropka." << std::endl;

  return 0;
}