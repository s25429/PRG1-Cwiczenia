#include <iostream>

int main(int argc, char* argv[]) {
  if (argc < 2) return 1;

  int n = atoi(argv[1]),
      silnia = 1,
      i = 1;

  while (i <= n)
    silnia *= i++;

  std::cout << "Silnia: " << silnia << "\n";

  return 0;
}
