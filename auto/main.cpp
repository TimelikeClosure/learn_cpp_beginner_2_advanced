#include <iostream>

int main(){
    auto x = 10.5;
    auto y = 10;

    int var1 = 10;
    int var2(10);
    int var3{20};

    auto var{6}; // initialization list, not int

    std::cout << "auto var{6} " << var << std::endl;

    return 0;
}