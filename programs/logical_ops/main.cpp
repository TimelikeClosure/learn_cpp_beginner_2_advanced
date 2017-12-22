#include <iostream>

int main(){
    bool 
        A = true,
        B = true,
        C = false,
        D = false;

    bool and1 = A && B; // true
    bool and2 = A && D; // false
    bool and3 = C && D; // false

    std::cout << (and1 && !and2 && !and3) << " should be true" << std::endl;

    bool or1 = A || B; // true
    bool or2 = A || D; // true
    bool or3 = C || D; // false

    std::cout << (!or1 || !or2 || or3) << " should be false" << std::endl;

    return 0;
}