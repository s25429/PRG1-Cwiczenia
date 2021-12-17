#include <iostream>
#include <string>
#include <vector>

struct Student {
  std::string imie;
  std::string nazwisko;
  std::vector<float> oceny;
};

float average_of(Student& student) {
  // Duplikacja nazwy nie spowoduje konfliktu, uzywany jest function overloading
  float avg = 0.0f;

  for (const float& v : student.oceny) avg += v;

  return avg / student.oceny.size();
}

int main() {
  auto s1 = Student{ "Jan", "Dobrzynski", { 3, 4.5, 4.5, 5, 2 } };

  std::cout << "Srednia ocen: " << average_of(s1) << std::endl;

  return 0;
}