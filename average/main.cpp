#include <iostream>

int main(){
    int n1, n2, n3, n4, n5;

    std::cout << "Enter five integers, separated by spaces" << std::endl;

    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;

    int sum = n1 + n2 + n3 + n4 + n5;

    float average = (float) sum / 5.0f;

    std::cout << "The sum of these numbers is " << sum << std::endl;
    std::cout << "The average is " << average << std::endl;

    return 0;
}