#include <iostream>
#include <string>
#include <limits>

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cout << "Trzeba podac 3 argumenty!" << std::endl;
  } else {
    int result = std::numeric_limits<int>::min();

    for (short unsigned int i = 1; i < argc; i++) {
      int value = std::stoi(argv[i]);
      if (value > result) result = value;
    }

    std::cout << "Największa: " << result << std::endl;
  }

  return 0;
}