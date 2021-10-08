#include <iostream>
#include <string>
auto ask_user_for_integer(std::string const prompt) -> int {
  if (!prompt.empty ()) {
    std::cout << prompt;
  }
  std::string a, b;

  std::cout << "A: ";
  std::getline(std::cin, a);
  std::cout << "B: ";
  std::getline(std::cin, b);

  short int a2 = std::stoi(a);
  short int b2 = std::stoi(b);

  return a2 > b2 ? a2 : b2;
}

int main() {
  int wynik = ask_user_for_integer("Sprawdzanie większej liczby!\n");
  std::cout << "Większa to  " << wynik << std::endl;
}