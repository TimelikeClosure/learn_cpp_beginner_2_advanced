#include <iostream>

int main(){
    float x;

    std::cout << "Enter a number:" << std::endl;

    std::cin >> x;

    if (x > 6){
        std::cout << x << " is greater than 6" << std::endl;
    } else if (x < 0){
        std::cout << x << " is less than 0" << std::endl;
    }

    if (x){
        std::cout << x << " is truthy, because it is not equal to 0" << std::endl;
    } else {
        std::cout << x << " is falsy, because it is equal to 0" << std::endl;
    }

    return 0;
}