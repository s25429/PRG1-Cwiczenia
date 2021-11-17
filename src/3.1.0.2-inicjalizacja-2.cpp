#include <iostream>
#include <array>

void iota(int a[], int n, int start);

int main() {
  std::array<int, 10> arr;

  iota(arr.data(), arr.size(), 8);

  for (auto const &el : arr)
    std::cout << el << ", ";

  std::cout << std::endl;
  return 0;
}

void iota(int a[], int n, int start) {
  for (int i = 0; i < n; i++) 
    a[i] = i + start;
}
