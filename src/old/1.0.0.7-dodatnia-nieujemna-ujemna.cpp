#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  for (short unsigned int i = 1; i < argc; i++) {
    short int value = std::stoi(argv[i]);
    if (value > 0)        std::cout << "1\n";
    else if (value == 0)  std::cout << "2\n";
    else                  std::cout << "3\n";
  }
  return 0;
}