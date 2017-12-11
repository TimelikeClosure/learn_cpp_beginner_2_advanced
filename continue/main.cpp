#include <iostream>

int main(int argc, char *argv[]){
    if (argc > 3){
        std::cerr << "Err: Too many parameters \"" << argv[1];
        for (int i = 2; i < argc; ++i){
            std::cout << " " <<  argv[i];
        }
        std::cout << "\"" << std::endl;
        return 1;
    }

    unsigned int modulo = 3, max = 100;
    bool
        maxArgIncluded = false,
        modArgIncluded = false;
    char
        maxArgPreface[] = {'-', '-', 'm', 'a', 'x', '='},
        modArgPreface[] = {'-', '-', 'm', 'o', 'd', '='};

    for (unsigned short int argIndex = 1; argIndex < argc; ++argIndex){

    }

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