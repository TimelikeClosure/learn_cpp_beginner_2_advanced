#include <iostream>
#include <cmath>

int main(void){
    int n;

    do {
        std::cout << "Enter a natural number: ";
        std::cin >> n;
    } while (n <= 0);

    double sqrt_n = std::sqrt((double) n);

    std::cout << "sqrt(" << n << ") = " << sqrt_n << std::endl;

    return 0;
}