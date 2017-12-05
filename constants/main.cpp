#include <iostream>

#define PI 3.141592625359

int main(){
    std::cout << "Enter circle radius: ";

    float radius;

    std::cin >> radius;

    float circle_area = PI * radius * radius;

    std::cout << "Circle's area is " << circle_area << std::endl;

    return 0;
}