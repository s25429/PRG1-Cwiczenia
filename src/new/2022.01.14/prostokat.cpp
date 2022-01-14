#include <iostream>
#include "punkt.cpp"
#include <math.h>

class Prostokat {
  Punkt _lt, _rb; // left top, right bottom

public:
  Prostokat(const int &x1, const int &y1, const int &x2, const int &y2) 
  : _lt(x1, y1), _rb(x2, y2) {}

  Prostokat(const Punkt &p1, const Punkt &p2)
  : _lt(p1), _rb(p2) {}

  ~Prostokat() { 
    std::cout << "Prostokat ";
    std::cout << "(" << _lt.getX() << ", " << _lt.getY() << ")";
    std::cout << " x ";
    std::cout << "(" << _rb.getX() << ", " << _rb.getY() << ")";
    std::cout << " zniszczony!!!\n";
  }

  void show() const {
    std::cout << "\n=~=~=<| Dane prostokata: |>=~=~=\n";

    std::cout << "Lewy gorny wierzcholek: "; _lt.show();
    std::cout << "Prawy gorny wierzcholek: "; _rb.show();

    std::cout << "Dlugosc prostokata: ";
    std::cout << abs(_lt.getX() - _rb.getX()) << "\n";
    std::cout << "Wysokosc prostokata: ";
    std::cout << abs(_lt.getY() - _rb.getY()) << "\n\n";
  }

  int pole() const {
    int w = abs(_lt.getX() - _rb.getX());
    int h = abs(_lt.getY() - _rb.getY());
    return w * h;
  }

  bool czy_lezy_w_srodku(const Punkt &p) const {
    int x_min, x_max, y_min, y_max;
    int p_x = p.getX();
    int p_y = p.getY();
    
    if (_lt.getX() <= _rb.getX()) {
      x_min = _lt.getX();
      x_max = _rb.getX();
    } else {
      x_min = _rb.getX();
      x_max = _lt.getX();
    }

    if (_lt.getY() <= _rb.getY()) {
      y_min = _lt.getY();
      y_max = _rb.getY();
    } else {
      y_min = _rb.getY();
      y_max = _lt.getY();
    }

    if (p_x < x_min || p_x > x_max || p_y < y_min || p_y > y_max)
      return false;
    return true;
  }
};