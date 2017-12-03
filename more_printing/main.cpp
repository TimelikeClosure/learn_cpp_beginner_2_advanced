#include <iostream>
#include <iomanip>

int main(){
    std::cout << std::setw(5) << 2016 << " is today's year." << std::endl;
    std::cout << std::setw(5) << 12 << " is today's month." << std::endl;
    std::cout << std::setw(5) << 3 << " is today's date." << std::endl;

    return 0;
}