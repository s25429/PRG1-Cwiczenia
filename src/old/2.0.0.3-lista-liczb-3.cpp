#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 4) return 1;

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int s = atoi(argv[3]);
    
    if (s < 0) s *= -1;
    if (a >= b || s == 0) return 1;

    for (int i = a; i < b; i += s) {
        std::cout << i << " ";
    }
    
    return 0;
}
