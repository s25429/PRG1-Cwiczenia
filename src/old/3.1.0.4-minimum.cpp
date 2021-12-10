#include <iostream>
#include <array>
#include <limits>

int amin_idx(int a[], int n);
int amin_val(int a[], int n);

int main() {
  std::array<int, 10> arr { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };

  std::cout << "amin index: " << amin_idx(arr.data(), arr.size()) << std::endl;
  std::cout << "amin value: " << amin_val(arr.data(), arr.size()) << std::endl;

  return 0;
}

int amin_idx(int a[], int n) {
  int min_val = std::numeric_limits<int>::max(), 
      min_idx = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] < min_val) {
      min_val = a[i];
      min_idx = i;
    }
  }

  return min_idx;
}

int amin_val(int a[], int n) {
  int min_val = std::numeric_limits<int>::max();

  for (int i = 0; i < n; i++) {
    if (a[i] < min_val) {
      min_val = a[i];
    }
  }

  return min_val;
}
