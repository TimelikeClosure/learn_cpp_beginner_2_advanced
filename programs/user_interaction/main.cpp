#include <iostream>

int main(void){
    int number;
    std::cout << "Enter an integer" << std::endl;
    std::cin >> number;

    int numberSquared = number * number;

    std::cout << "Your integer squared is " << numberSquared << std::endl;
    std::cout << "The square of " << number << " is " << number * number << std::endl;

    return 0;
}