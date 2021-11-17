#include <iostream>
#include <array>

int asum(int a[], int n);

int main() {
  std::array<int, 10> arr { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };

  std::cout << "asum: " << asum(arr.data(), arr.size()) << std::endl;

  return 0;
}

int asum(int a[], int n) {
  int res = 0;
  for (int i = 0; i < n; i++)
    res += a[i];
  return res;
}
