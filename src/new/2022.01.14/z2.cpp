#include <iostream>
#include <string>
#include "prostokat.cpp"


int main() {
  auto p1 = Prostokat(1, 2, 5, 6);
  auto p2 = Prostokat(Punkt(3, 4), Punkt(2, 7));

  p1.show();
  p2.show();

  std::cout << "P1 pole: " << p1.pole() << "\n";
  std::cout << "P2 pole: " << p2.pole() << "\n\n";

  auto punkt = Punkt(4, 4);
  std::cout << "Punkt (4, 4) lezy w prostokacie p1? ";
  std::cout << (p1.czy_lezy_w_srodku(punkt) ? "Tak" : "Nie");
    std::cout << "\n";
  std::cout << "Punkt (4, 4) lezy w prostokacie p2? ";
  std::cout << (p2.czy_lezy_w_srodku(punkt) ? "Tak" : "Nie");
  std::cout << "\n\n";

  return 0;
}