#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Student {
  std::string imie;
  std::string nazwisko;
  std::vector<float> oceny;
};

struct Group {
  std::string nazwa;
  std::vector<Student> studenci;
};

Group best_groups_name(std::vector<Group>& groups) {
  std::vector<float> medians = {};

  for (const auto& group : groups) {
    std::vector<float> group_grades = {};

    for (const auto& student : group.studenci)
      group_grades.insert(
        group_grades.end(), 
        student.oceny.begin(), 
        student.oceny.end()
      );

    std::sort(group_grades.begin(), group_grades.end());
    size_t vec_len = group_grades.size();

    if (vec_len & 1) {
      medians.push_back(group_grades[vec_len * 0.5f]);
    } else {
      size_t idx2 = vec_len * 0.5f;
      size_t idx1 = idx2 - 1;
      float median = (group_grades[idx1] + group_grades[idx2]) * 0.5f;

      medians.push_back(median);
    }
  }

  float max_med = 0.0f;
  size_t idx = 0;

  for (size_t i = 0; i < medians.size(); i++) {
    if (medians[i] > max_med) {
      max_med = medians[i];
      idx = i;
    }
  }

  return groups[idx];
}

int main() {
  auto essa1 = Student{ "Marek", "Dobrzynski", { 3, 4.5, 4.5, 5, 2 } };
  auto essa2 = Student{ "Jan", "Kreft", { 2, 5, 2, 5, 2 } };
  auto essa3 = Student{ "Jakub", "Laszcz", { 5, 4, 3, 4, 5 } };
  auto essa4 = Student{ "Mateusz", "Karp", { 1, 1, 1, 1, 1 } };
  auto essa5 = Student{ "Grzegorz", "Bobrek", { 2, 2, 2, 2, 2 } };
  auto essa6 = Student{ "Alicja", "Sierp", { 5, 5, 3, 3, 1 } };

  auto grupa1 = Group{ "grupa1", { essa1, essa2 } };
  auto grupa2 = Group{ "grupa2", { essa3, essa4 } };
  auto grupa3 = Group{ "grupa3", { essa5, essa6 } };

  std::vector<Group> grupy = { grupa1, grupa2, grupa3 };

  std::cout << "Najlepsza grupa: " << best_groups_name(grupy).nazwa << std::endl;

  return 0;
}