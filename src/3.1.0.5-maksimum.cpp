#include <iostream>
#include <array>
#include <limits>

int amax_idx(int a[], int n);
int amax_val(int a[], int n);

int main() {
  std::array<int, 10> arr { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };

  std::cout << "amax index: " << amax_idx(arr.data(), arr.size()) << std::endl;
  std::cout << "amax value: " << amax_val(arr.data(), arr.size()) << std::endl;

  return 0;
}

int amax_idx(int a[], int n) {
  int max_val = std::numeric_limits<int>::min(), 
      max_idx = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > max_val) {
      max_val = a[i];
      max_idx = i;
    }
  }

  return max_idx;
}

int amax_val(int a[], int n) {
  int max_val = std::numeric_limits<int>::min();

  for (int i = 0; i < n; i++) {
    if (a[i] > max_val) {
      max_val = a[i];
    }
  }

  return max_val;
}
