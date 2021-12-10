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

  return std::stoi(a) * std::stoi(b);
}

int main() {
  int wynik = ask_user_for_integer("Mnożenie!\n");
  std::cout << "= " << wynik << std::endl;
}