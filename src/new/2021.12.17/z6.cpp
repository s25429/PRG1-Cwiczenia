#include <iostream>
#include <string>
#include <vector>

struct Student {
  std::string imie;
  std::string nazwisko;
  std::vector<float> oceny;
};

Student get_best_student(std::vector<Student>& students) {
  std::vector<float> avgs = {};

  for (const auto student : students) {
    float avg = 0.0f;
    for (const auto v : student.oceny) avg += v;
    avg /= student.oceny.size();

    avgs.push_back(avg);
  }

  float max_avg = 0.0f;
  size_t idx = 0;

  for (size_t i = 0; i < avgs.size(); i++) {
    if (avgs[i] > max_avg) {
      max_avg = avgs[i];
      idx = i;
    }
  }

  return students[idx];
}

int main() {
  auto essa1 = Student{ "Marek", "Dobrzynski", { 3, 4.5, 4.5, 5, 2 } };
  auto essa2 = Student{ "Jan", "Kreft", { 2, 5, 2, 5, 2 } };
  auto essa3 = Student{ "Jakub", "Laszcz", { 5, 4, 3, 4, 5 } };

  std::vector<Student> studenci = { essa1, essa2, essa3 };

  std::cout << "Najlepszy student: " << get_best_student(studenci).imie << std::endl;

  return 0;
}