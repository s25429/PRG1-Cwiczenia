#include <iostream>

int main(int argc, char* argv[]) {
  if (argc < 2) return 1;

  int n = atoi(argv[1]),
      silnia = 1;

  for (int i = 1; i <= n; i++)
    silnia *= i;

  std::cout << "Silnia: " << silnia << "\n";

  return 0;
}
