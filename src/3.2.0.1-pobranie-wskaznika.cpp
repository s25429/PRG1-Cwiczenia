#include <iostream>
#include <string>

int main() {
  std::string hello = "Hello, World!";
  std::string* hello_ptr = &hello;

  std::cout << "Wartosc: " << hello << std::endl;
  std::cout << "Adres: " << hello_ptr << std::endl;

  return 0;
}