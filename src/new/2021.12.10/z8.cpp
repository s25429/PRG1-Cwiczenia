#include <iostream>
#include <string>

void nty(std::string str, int n) {
  for (size_t i = 0; i < str.length(); i += n)
    std::cout << str[i];
}

int main() {
  nty("Puszka z tunczykiem", 2);
  std::cout << std::endl;

  nty("Kromka masla", 3);
  std::cout << std::endl;

  return 0;
}