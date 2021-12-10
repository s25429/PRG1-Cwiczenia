#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  if (argc == 3) {
    short int a = std::stoi(argv[1]);
    short int b = std::stoi(argv[2]);

    if (a > b)      std::cout << a << " > " << b << std::endl;
    else if (a < b) std::cout << a << " < " << b << std::endl;
    else            std::cout << a << " == " << b << std::endl;

  } else std::cout << "Trzeba podac dwa argumenty!" << std::endl;
  return 0;
}