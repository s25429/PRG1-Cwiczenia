#include <iostream>
#include <string>
#include "punkt.cpp" // Tutaj znajduje sie klasa Punkt


int main() {
  auto p1 = Punkt(1, 2);
  auto p2 = Punkt(5, 3);


  p1.show();
  p2.show();

  std::cout << "p1.x = " << p1.getX() << "\n";
  std::cout << "p2.y = " << p2.getY() << "\n\n";


  p1.setXY(6, 4);
  p1.show();
  std::cout << "\n";


  p2.setXY(Punkt(7, 12));
  p2.show();
  std::cout << "\n";


  p1.getXY().show();
  std::cout << "\n";


  auto p3 = Punkt(p2);
  p3.show();
  std::cout << "\n";

  return 0;
}