#include <iostream>
#include <string>
#define LOGendl(x, y, z) std::cout << x << ": " << y << " " << z << std::endl << std::endl;
#define LOGn(x, y, z) std::cout << x << ": " << y << " " << z << "\n\n";

struct Osoba {
  std::string imie = "";
  double waga = 0.0;
  int wzrost = 0;
} osoba { "Tomek", 67.4, 180 };

int main() {
  LOGendl("Imie", osoba.imie, "");
  LOGendl("Waga", osoba.waga, "kg");
  LOGn("Wzrost", osoba.wzrost, "cm");

  return 0;
}