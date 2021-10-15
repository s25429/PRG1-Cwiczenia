#include <iostream>
#include <math.h>

bool pierwsza(int n);

int main(int argc, char* argv[]) {
    if (argc < 2) return 1;

    int n = atoi(argv[1]);

    if (n <= 0) return 1;

    if (!pierwsza(n)) {
        std::cout << "Nie liczba pierwsza!\n";
    } else {
        std::cout << "Jest liczba pierwsza! Suma liczb pierwszych mniejszych: ";
        int suma = 0;
        for (int i = 1; i <= n; i++)
            if (pierwsza(i)) 
                suma += i;
        std::cout << suma << "\n";
    }
    
    return 0;
}

bool pierwsza(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) 
            return false;
    return true;
}

