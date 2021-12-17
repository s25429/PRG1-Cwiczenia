#include <iostream>
#include <vector>

int dot_product(std::vector<int>& v1, std::vector<int>& v2) {
  if (v1.size() != v2.size()) {
    std::cerr << "Podane wektory nie sa tej samej wielkosci! ";
    return 0;
  }

  int res = 0;

  for (size_t i = 0; i < v1.size(); i++)
    res += v1[i] * v2[i];

  return res;
}

int main() {
  std::vector<int> w1 = { 1, 2, 3 };
  std::vector<int> w2 = { 5, -1, 0 };
  std::vector<int> w3 = { 5 };

  std::cout << "Dot product 1: " << dot_product(w1, w2) << std::endl;
  std::cout << "Dot product 2: " << dot_product(w1, w3) << std::endl;

  return 0;
}