#include <iostream>
#include <random>

void memrand_(void* s, size_t n);

int main() {
  char a[8];

  memrand_(a, sizeof(a));

  for (auto const& v : a) std::cout << v;
  std::cout << std::endl;

  return 0;
}

void memrand_(void* s, size_t n) {
  std::random_device rd;
  std::uniform_int_distribution<int> rand_byte(0, 255);
  char* ptr = (char*)s;

  for (size_t i = 0; i < n; i++)
    *(ptr + i) = rand_byte(rd);
}
