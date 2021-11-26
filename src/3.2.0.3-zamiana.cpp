#include <iostream>
#include <string>

void swap(int* ap, int* bp);

int main() {
  int a = 42, b = 64;
  int* a_ptr = &a;
  int* b_ptr = &b;

  swap(a_ptr, b_ptr);

  return 0;
}

void swap(int* ap, int* bp) {
  std::cout << "A: " << *ap << "\t" << "B: " << *bp << std::endl;

  int* bufor = ap;
  ap = bp;
  bp = bufor;
  
  std::cout << "A: " << *ap << "\t" << "B: " << *bp << std::endl;
}