#include <iostream>
#include <iomanip>

int main(){
    short int 
        year = 2017, 
        mon = 12, 
        day = 3;

    std::cout 
        << "Today is "
        << std::setfill('0') << std::setw(2) << day
        << '/'
        << std::setfill('0') << std::setw(2) << mon
        << '/'
        << std::setw(4) << year
        << std::setfill(' ') << std::endl;

    return 0;
}