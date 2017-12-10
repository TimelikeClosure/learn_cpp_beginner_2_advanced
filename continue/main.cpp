#include <iostream>

int main(void){
    unsigned int modulo, max;

    std::cout << "What number would you like to sum up to? ";
    std::cin >> max;
    std::cout << "Which number multiples would you like to exclude? ";
    std::cin >> modulo;
    
    for (unsigned int i = 1; i <= max; ++i){
        if (i % modulo == 0){
            continue;
        }
        std::cout << i << std::endl;
    }

    std::cout << -1 << std::endl;

    return 0;
}