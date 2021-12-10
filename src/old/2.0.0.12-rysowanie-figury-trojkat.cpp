#include <iostream>

int main(int argc, char* argv[]) {
  if (argc < 3) return 1;

  int w = atoi(argv[1]),
      h = atoi(argv[2]);

  double step = (double)w / (double)h;
  double xlimit = w > h ? 1 : 0;

  for (int y = 0; y < h; y++) {
    for (int x = 0; x <= (int)xlimit; x++) {
      std::cout << "*";
    }
    xlimit += step;
    std::cout << "\n";
  }

  return 0;
}
