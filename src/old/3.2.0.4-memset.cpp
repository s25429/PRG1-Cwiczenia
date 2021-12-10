#include <iostream>

void memset_(void* dest, int ch, size_t count);

int main() {
  int a[3] = {1, 2, 3};

  memset_(a, 0, sizeof(a[0]) * 2);

  for (auto const& v : a) std::cout << v << ", ";
  std::cout << std::endl;

  return 0;
}

void memset_(void* dest, int ch, size_t count) {
  char* ptr = (char*)dest;

  for (size_t i = 0; i < count; i++)
    *(ptr + i) = ch;
}
