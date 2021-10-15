#include <iostream>

int main(int argc, char* argv[]) {
  if (argc < 3) return 1;

  int limit =     atoi(argv[1]),
      dzielnik =  atoi(argv[2]),
      suma =      0;

  for (int i = 1; i <= limit; i++)
    if (i % dzielnik == 0) suma += i;

  std::cout << "Suma: " << suma << std::endl;

  return 0;
}
