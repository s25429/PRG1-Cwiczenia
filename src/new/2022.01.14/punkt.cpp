#include <iostream>

class Punkt {
  int x, y;

public:
  void show() const {
    std::cout << "("  << this->x;
    std::cout << ", " << this->y;
    std::cout << ")\n";
  }

  int getX() const { return this->x; }

  int getY() const { return this->y; }


  void setXY(const int &x, const int &y) {
    this->x = x;
    this->y = y;
  }

  void setXY(const Punkt &p) {
    this->x = p.x;
    this->y = p.y;
  }


  Punkt getXY() const { return Punkt(this->x, this->y); }

  Punkt(const int &x, const int &y): x(x), y(y) {
    std::cout << "Utworzono punkt (" << x << ", " << y << ")\n";
  }

  Punkt(const Punkt &p) {
    this->x = p.getX();
    this->y = p.getY();
    std::cout << "Utworzono punkt z punktu ";
    p.show();
  }

  ~Punkt() {
    std::cout << "Zniszczono punkt ";
    this->show();
  }
};