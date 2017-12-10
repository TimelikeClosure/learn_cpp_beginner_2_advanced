#include <iostream>

int main(void){
    int sum = 0;

    for (int i = 1; i <= 50; ++i){
        int number;

        std::cout << "Enter " << ((i == 1) ? "a" : "next") << " number to add (or -1 to end): ";
        std::cin >> number;

        if (number == -1) break;

        sum += number;
    }

    std::cout << "The sum is " << sum << std::endl;

    return 0;
}