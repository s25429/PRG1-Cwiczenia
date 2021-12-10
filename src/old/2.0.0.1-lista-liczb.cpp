#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 3) return 1;

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if (a >= b) return 1;

    for (int i = a; i < b; i++) {
        std::cout << i << " ";
    }
    
    return 0;
}
