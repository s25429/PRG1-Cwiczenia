#include <iostream>
#include <string>
#include <vector>

#define START 97
#define END 122

int main() {
  while (true) {
    std::string input = "";
    std::getline(std::cin, input);

    if (input.find("stop") != std::string::npos) break;
    if (input.length() > 3) {
      std::cerr << "Bledny zakres! Przyklad: [a b]." << std::endl;
      continue;
    }

    char start = input[0];
    char end = input[2];
    std::vector<std::string> zakres = {};

    if (start < START || start > END || end < START || end > END) {
      std::cerr << "Zly zakres! Maksymalny zakres: [a z]." << std::endl;
      continue;
    }

    if (start <= end) {
      for (char i = start; i <= end; i++) {
        std::string text = "";
        text = i;
        zakres.push_back(text);
      }
    } else {
      for (char i = start; i >= end; i--) {
        std::string text = "";
        text = i;
        zakres.push_back(text);
      }
    }

    for (const auto& v : zakres) std::cout << v;
    std::cout << std::endl;
  }

  return 0;
}