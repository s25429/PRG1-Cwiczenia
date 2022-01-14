#include <iostream>

class Wymierne {
  int numerator, denominator;

  int nwd(int a, int b) const {
    while (a != b) {
      if (a > b) a -= b;
      else       b -= a;
    }
    return a;
  }

  int nww(int a, int b) const {
    int nwd = this->nwd(a, b);
    return (a * b) / nwd;
  }

public:
  Wymierne(const int &n, const int &d)
  : numerator(n), denominator(d) {
    this->simplify();
  }

  Wymierne(const int &v)
  : numerator(v), denominator(1) {}

  ~Wymierne() {
    std::cout << "Liczba " << numerator << "/" << denominator << " zostala usunieta!\n";
  }

  void simplify() {
    int nwd = this->nwd(this->numerator, this->denominator);
    this->numerator /= nwd;
    this->denominator /= nwd;
  }

  int getX() const { return this->numerator; }
  int getY() const { return this->denominator; }

  void show() const {
    std::cout << "num = " << this->numerator;
    std::cout << ", " << this->denominator << "\n";
  }

  Wymierne* sum(const Wymierne &w) const {
    /// https://stackoverflow.com/a/50595188

    // Wez wszystkie wartosci jako liczba wymierna 1 i 2
    int n1 = this->numerator;
    int d1 = this->denominator;
    int n2 = w.getX();
    int d2 = w.getY();

    // Znajdz nww dla wspolnego denominatora i oblicz mnoznik numeratora dla obu liczb wymiernych
    int nww = this->nww(d1, d2);
    int d1_multi = nww / d1;
    int d2_multi = nww / d2;

    // Zaktualizuj wartosc obydwu numeratorow i wyznacz z sumy nowego numeratora
    n1 = n1 * d1_multi;
    n2 = n2 * d2_multi;
    int new_n = n1 + n2;

    return new Wymierne(new_n, nww);
  }

  Wymierne* sum(const int v) const { //* Overloaded
    // Wez wszystkie wartosci jako liczba wymierna 1 i 2
    int n1 = this->numerator;
    int d1 = this->denominator;
    int n2 = v;
    int d2 = 1;

    // Znajdz nww dla wspolnego denominatora i oblicz mnoznik numeratora dla obu liczb wymiernych
    int nww = this->nww(d1, d2);
    int d1_multi = nww / d1;
    int d2_multi = nww / d2;

    // Zaktualizuj wartosc obydwu numeratorow i wyznacz z sumy nowego numeratora
    n1 = n1 * d1_multi;
    n2 = n2 * d2_multi;
    int new_n = n1 + n2;

    return new Wymierne(new_n, nww);
  }

  void sum2(const Wymierne &w) {
    // Wez wszystkie wartosci jako liczba wymierna 1 i 2
    int n1 = this->numerator;
    int d1 = this->denominator;
    int n2 = w.getX();
    int d2 = w.getY();

    // Znajdz nww dla wspolnego denominatora i oblicz mnoznik numeratora dla obu liczb wymiernych
    int nww = this->nww(d1, d2);
    int d1_multi = nww / d1;
    int d2_multi = nww / d2;

    // Zaktualizuj wartosc obydwu numeratorow i wyznacz z sumy nowego numeratora
    n1 = n1 * d1_multi;
    n2 = n2 * d2_multi;
    int new_n = n1 + n2;

    this->numerator = new_n;
    this->denominator = nww;
    this->simplify();
  }
};