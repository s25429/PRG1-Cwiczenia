#include <iostream>
#include <string>

size_t count_chars(std::string str, char c) {
  size_t counter = 0;

  for (auto const& s : str)
    if (s == c) 
      counter++;

  return counter;
}

int main() {
  std::string str = "kajakowiczownikol";
  char c = 'k';
  std::cout << "Liczba wystapien znaku '" << c << "' w " << str << ": ";
  std::cout << count_chars(str, c) << std::endl;

  return 0;
}