#include <iostream>
#include <string>
#include <vector>

struct Student {
  std::string imie;
  std::string nazwisko;
  std::vector<float> oceny;
};

struct Group {
  std::string nazwa;
  std::vector<Student> studenci;
};

void append_student(Group& group, Student& student) {
  group.studenci.push_back(student);
}

int main() {
  auto essa1 = Student{ "Marek", "Dobrzynski", { 3, 4.5, 4.5, 5, 2 } };
  auto essa2 = Student{ "Jan", "Kreft", { 2, 5, 2, 5, 2 } };
  auto essa3 = Student{ "Jakub", "Laszcz", { 5, 4, 3, 4, 5 } };
  auto essa4 = Student{ "Mateusz", "Karp", { 1, 1, 1, 1, 1 } };

  auto grupa = Group{ "grupa", { essa1 } };

  append_student(grupa, essa2);
  append_student(grupa, essa3);
  append_student(grupa, essa4);

  std::cout << "Studenci w grupie: ";
  for (const auto x : grupa.studenci) std::cout << x.imie << ", ";
  std::cout << std::endl;

  return 0;
}