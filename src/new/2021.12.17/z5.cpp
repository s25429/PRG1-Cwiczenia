#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(std::string str) {
  bool okay_to_append = false;
  std::string stripped = "";
  std::vector<std::string> vect = {};

  for (size_t i = 0; i < str.length(); i++) {
    if (str[i] == ' ') {
      if (okay_to_append) {
        vect.push_back(stripped);
        stripped = "";
        okay_to_append = false;
      }
      continue;
    }

    stripped += str[i];
    okay_to_append = true;
  }

  if (str.back() != ' ') vect.push_back(stripped);
  return vect;
}

int main() {
  std::string t1 = "ala ma kota";
  std::string t2 = "   ala   ma  kota       ";

  std::cout << "Dla tekstu " << t1 << " mamy: " << std::endl;
  for (const auto v : split(t1)) std::cout << v << ", ";
  std::cout << std::endl;

  std::cout << "Dla tekstu " << t2 << " mamy: " << std::endl;
  for (const auto v : split(t2)) std::cout << v << ", ";
  std::cout << std::endl;

  return 0;
}