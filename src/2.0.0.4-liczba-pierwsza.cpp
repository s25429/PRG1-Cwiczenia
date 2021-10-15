#include <iostream>
#include <math.h>

int main(int argc, char* argv[]) {
    if (argc < 2) return 1;

    int n = atoi(argv[1]);

    if (n <= 0) return 1;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            std::cout << "Nie liczba pierwsza!\n";
            return 1;
        }
    }
    
    std::cout << "Jest liczba pierwsza!\n";    
    return 0;
}
