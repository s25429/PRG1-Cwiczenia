#include <iostream>
#include <string>

void print(std::string* p);

int main() {
  std::string hello = "Hello, World!";
  std::string* hello_ptr = &hello;

  print(hello_ptr);

  return 0;
}

void print(std::string* p) {
  std::cout << p << " = " << *p << std::endl;
}