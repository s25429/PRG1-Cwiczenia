#include <iostream>
#include <array>

int search(int a[], int n, int needle);

int main() {
  std::array<int, 10> arr { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };

  std::cout << "search 101: " << search(arr.data(), arr.size(), 101) << std::endl;
  std::cout << "search 0: " << search(arr.data(), arr.size(), 0) << std::endl;

  return 0;
}

int search(int a[], int n, int needle) {
  for (int i = 0; i < n; i++)
    if (a[i] == needle) 
      return i;
  return -1;
}
