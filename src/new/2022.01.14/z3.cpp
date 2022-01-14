#include <iostream>
#include "wymierne.cpp"

int main() {
  auto w1 = Wymierne(84, 18);
  auto w2 = Wymierne(2, 6);
  auto w3 = Wymierne(2, 5);
  auto w4 = Wymierne(1, 4);

  w1.show();
  w2.show();

  std::cout << "\n";


  Wymierne* ptr1 = w1.sum(w2); // 84/18 + 2/6 = 14/3 + 1/3 = 5
  ptr1->show();

  std::cout << "\n";


  auto ptr2 = w2.sum(Wymierne(2, 5)); // 1/3 + 2/5 = 5/15 + 6/15 = 11/15
  ptr2->show();

  std::cout << "\n";


  w3.sum2(w1); // 14/3 + 2/5 = 70/15 + 6/15 = 76/15
  w3.show();

  std::cout << "\n";


  auto ptr3 = w4.sum(5);
  ptr3->show();

  std::cout << "\n";


  delete ptr1;
  ptr1 = nullptr;
  delete ptr2;
  ptr2 = nullptr;
  delete ptr3;
  ptr3 = nullptr;

  return 0;
}