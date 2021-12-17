#include <iostream>
#include <vector>

bool contains_all(std::vector<int> vmain, std::vector<int>& vsub) {
  for (const auto value : vsub) {
    bool found = false;

    for (size_t i = 0; i < vmain.size(); i++) {
      if (vmain[i] == value) {
        found = true;
        vmain.erase(vmain.begin() + i);
        break;
      }
    }

    if (!found) return false;
  }

  return true;
}

int main() {
  std::vector<int> a = { 1, 2, 3, 4, 5, 6, 7 };
  std::vector<int> b = { 2, 4, 5 };
  std::vector<int> c = { 7, 8 };


  std::cout << "A: { ";
  for (const auto& v : a) std::cout << v << ", ";
  std::cout << "}" << std::endl;

  std::cout << "B: { ";
  for (const auto& v : b) std::cout << v << ", ";
  std::cout << "}" << std::endl;

  std::cout << "C: { ";
  for (const auto& v : c) std::cout << v << ", ";
  std::cout << "}" << std::endl;


  std::cout << "B zawiera sie w A ? " << (contains_all(a, b) ? "Tak" : "Nie") << std::endl;
  std::cout << "C zawiera sie w A ? " << (contains_all(a, c) ? "Tak" : "Nie") << std::endl;

  return 0;
}