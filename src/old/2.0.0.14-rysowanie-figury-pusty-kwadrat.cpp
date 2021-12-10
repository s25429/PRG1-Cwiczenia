#include <iostream>

int main(int argc, char* argv[]) {
  if (argc < 2) return 1;

  int w = atoi(argv[1]);
  //std::cout << w;

  if (w < 3) return 1;

  for (int y = 1; y <= w; y++) {
    for (int x = 1; x <= w; x++) {
      if (y > 1 && y < w && x > 1 && x < w)
        std::cout << " ";
      else
        std::cout << "*";
    }
    std::cout << "\n";
  }

  return 0;
}
