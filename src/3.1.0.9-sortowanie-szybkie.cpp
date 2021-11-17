#include <iostream>
#include <array>
#include <algorithm>

void quicksort(int a[], int n);
void quicksort_logic(int a[], int low, int high);
int quicksort_partition(int a[], int low, int high);

int main() {
  std::array<int, 10> arr { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };

  quicksort(arr.data(), arr.size());

  std::cout << "After Quicksort desc: ";
  for (auto const &el : arr) {
    std::cout << el << ", ";
  }
  std::cout << std::endl;

  return 0;
}

void quicksort(int a[], int n) {
  quicksort_logic(a, 0, n - 1);
}

void quicksort_logic(int a[], int low, int high) {
  if (low < high) {
    int pivot = quicksort_partition(a, low, high);

    quicksort_logic(a, low, pivot - 1);
    quicksort_logic(a, pivot + 1, high);
  }
}

int quicksort_partition(int a[], int low, int high) {
  int i = low - 1;
  int pivot = a[high];

  for (int x = low; x < high; x++) {
    if (a[x] <= pivot)
      std::swap(a[++i], a[x]);
  }

  std::swap(a[++i], a[high]);
  return i;
}
