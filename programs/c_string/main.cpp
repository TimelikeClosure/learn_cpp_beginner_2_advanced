#include <iostream>
#include <cstring>

int main(void){
    char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    std::cout << str << std::endl;

    char shortString[2];
    strcpy(shortString, "Buffer overflowingAAAAAHHHHHHHHH!!!!!!");

    std::cout << shortString << std::endl;

    return 0;
}
