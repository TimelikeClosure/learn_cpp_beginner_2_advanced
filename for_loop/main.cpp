#include <iostream>

int main(void){
    int n;
    std::cout << "How many numbers do you wish to add? ";
    std::cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; ++i){
        int number;
        std::cout << "Enter number " << i << ": ";
        std::cin >> number;
        sum += number;
    }

    std::cout << "The sum of the " << n << " entered integers is " << sum << std::endl;

    return 0;
}