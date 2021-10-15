#include <iostream>

int main(int argc, char* argv[]) {
  if (argc < 3) return 1;

  int w = atoi(argv[1]),
      h = atoi(argv[2]);

  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      std::cout << "*";
    }
    std::cout << "\n";
  }

  return 0;
}
