#include <iostream>

int main(void){
    int n;
    std::cout << "How many numbers do you wish to add? ";
    std::cin >> n;

    int i = 1,
        sum = 0;

    while (i <= n){
        int number;
        std::cout << "Enter number " << i << ": ";
        std::cin >> number;
        sum += number;
        i++;
    }

    std::cout << "The sum of the " << n << " entered integers is " << sum << std::endl;

    return 0;
}