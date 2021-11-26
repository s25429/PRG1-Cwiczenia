#include <iostream>

void memcpy_(void* dest, const void* src, size_t count);

int main() {
  char a[] = "Hello, World!";
  char b[5];

  memcpy_(b, a, sizeof(b));

  for (auto const& v : b) std::cout << v;
  std::cout << std::endl;

  return 0;
}

void memcpy_(void* dest, const void* src, size_t count) {
  char* dest_ptr = (char*)dest;
  char* src_ptr = (char*)src;

  for (size_t i = 0; i < count; i++)
    *(dest_ptr + i) = *(src_ptr + i);
}
