#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 4) return 1;

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);

    if (a >= b || c == 0) return 1;

    for (int i = a; i < b; i++) {
        if (i % c == 0)
            std::cout << i << " ";
    }
    
    return 0;
}
