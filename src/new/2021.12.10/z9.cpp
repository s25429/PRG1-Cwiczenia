#include <iostream>
#include <string>

bool is_palindrome(std::string str) {
  std::string rev = "";

  for (size_t i = str.size(); i > 0; i--)
    rev.push_back(str[i - 1]);

  return str == rev;
}

int main() {
  std::cout << "Kajak to palindrom?\t";
  std::cout << (is_palindrome("kajak") ? "Tak" : "Nie") << std::endl;

  std::cout << "Puszka to palindrom?\t";
  std::cout << (is_palindrome("puszka") ? "Tak" : "Nie") << std::endl;

  return 0;
}