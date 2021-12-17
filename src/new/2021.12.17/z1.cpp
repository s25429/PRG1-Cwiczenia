#include <iostream>
#include <vector>

float average_of(std::vector<int>& vect) {
  float sum = 0.0f;

  for (size_t i = 0; i < vect.size(); i++) {
    sum += vect[i];
  }

  return sum / vect.size();
}

int main() {
  std::vector<int> wektor = { 2, 4, 5, 8, 1, 2 };

  std::cout << "Srednia arytmetyczna: " << average_of(wektor) << std::endl;

  return 0;
}