#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> filter_palindromes(std::vector<std::string>& vect) {
  std::vector<std::string> new_vect = {};

  for (const std::string& text : vect) {
    std::string text_rev = std::string(text.rbegin(), text.rend());
    
    if (text != text_rev) continue;

    new_vect.push_back(text);
  }

  return new_vect;
}

int main() {
  std::vector<std::string> wektor = { "kajak", "slimak", "woda" };
  std::vector<std::string> palindromy = filter_palindromes(wektor);

  std::cout << "Wektor: ";
  for (const auto& x : wektor) std::cout << x << ", ";
  std::cout << std::endl;

  std::cout << "Palindromy: ";
  for (const auto& x : palindromy) std::cout << x << ", ";
  std::cout << std::endl;

  return 0;

}