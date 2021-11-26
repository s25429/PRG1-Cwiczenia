#include <iostream>

void memfrob_(void *src, size_t count);

int main() {
  char a[] = "Hello, World!";

  std::cout << "[Encryption]:" << std::endl;
  memfrob_(a, sizeof(a));

  for (auto const& v : a) std::cout << v;
  std::cout << std::endl;

  std::cout << "[Decryption]:" << std::endl;
  memfrob_(a, sizeof(a));

  for (auto const& v : a) std::cout << v;
  std::cout << std::endl;

  return 0;
}

void memfrob_(void *src, size_t count) {
  char* ptr = (char*)src;

  for (size_t i = 0; i < count; i++)
    *(ptr + i) ^= 42;
}
