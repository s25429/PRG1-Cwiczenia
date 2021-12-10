#include <iostream>
#include <string>

bool pierwsza(int n)
{
  if (n <= 1)
    return false;

  for (int i = 2; i < n; i++)
    if (n % i == 0)
      return false;

  return true;
}

std::string linia(int imin, int imax) {
  std::string res = "";

  for (int i = imin; i < imax; i++)
    if (pierwsza(i))
      res += std::to_string(i) + ' ';

  return res;
}

int main() {
  std::cout << linia(2, 20) << std::endl;
  std::cout << linia(2, 20) << std::endl;

  return 0;
}