#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  for (short unsigned int i = 1; i < argc; i++) {
    short int a = std::stoi(argv[i]);
    std::cout << (a > 0 ? a : a + (-2 * a)) << " ";
  }

  std::cout << std::endl;
  return 0;
}