#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  if (argc < 3) return 1;

  std::string sign = "";
  int v = atoi(argv[1]);

  for (int i = 2, arg = 0; i < argc; i++) {
    arg = atoi(argv[i]);

    if (v > arg)      sign = ">";
    else if (v < arg) sign = "<";
    else              sign = "==";

    std::cout << v << " " << sign << " " << arg << "\n";
  }

  return 0;
}
