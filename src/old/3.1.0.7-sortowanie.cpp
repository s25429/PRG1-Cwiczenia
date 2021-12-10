#include <iostream>
#include <array>
#include <algorithm>
#define DEBUG false // Used for debugging purpouses

void sort_asc(int a[], int n);

int main() {
  std::array<int, 10> arr { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };

  sort_asc(arr.data(), arr.size());

  std::cout << "Asc: ";
  for (auto const &el : arr) {
    std::cout << el << ", ";
  }
  std::cout << std::endl;

  return 0;
}

void sort_asc(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int main_val = a[i],  max_val = main_val;
    int main_idx = i,     max_idx = main_idx;

    for (int j = i + 1; j < n; j++) {
      if (a[j] > max_val) {
        max_val = a[j];
        max_idx = j;
      }
    }

    if (max_val > main_val) {
      std::swap(a[main_idx], a[max_idx]);
    }

    // Used for debugging purpouses
    if (DEBUG) {
      std::cout << i << ": ";
      for (int x = 0; x < n; x++) {
        std::cout << a[x] << ", ";
      }
      std::cout << std::endl;
    }
  }
}
