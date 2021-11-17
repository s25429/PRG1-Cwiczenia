#include <iostream>
#include <array>

void init(int a[], int n);

int main() {
  std::array<int, 10> arr;

  init(arr.data(), arr.size());

  for (auto const &el : arr)
    std::cout << el << ", ";

  std::cout << std::endl;
  return 0;
}

void init(int a[], int n) {
  for (int i = 0; i < n; i++)
    a[i] = 0;
}
