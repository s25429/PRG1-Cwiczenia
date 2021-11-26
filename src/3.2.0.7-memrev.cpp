#include <iostream>

void memrev_(void* s, size_t n);

int main() {
  char a[] = "Hello, World!";

  std::cout << "Przed:\t";
  for (auto const& v : a) std::cout << v;
  std::cout << std::endl;

  memrev_(a, sizeof(a));

  std::cout << "Po:\t";
  for (auto const& v : a) std::cout << v;
  std::cout << sizeof(char) << std::endl;

  return 0;
}

void memrev_(void* s, size_t n) {
  char* ptr = (char*)s;
  char* bufor = new char[n];

  for (size_t i = 0, j = n - 1; i < n; i++, j--)
    *(bufor + i) = *(ptr + j);

  for (size_t i = 0; i < n; i++)
    *(ptr + i) = *(bufor + i);

  delete[] bufor;
}
