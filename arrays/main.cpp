#include <iostream>

int main(void){
    unsigned short int arr1Len = 5;

    std::cout << "How long should the array be? ";
    std::cin >> arr1Len;

    // static unsigned int arr1[arr1Len]; // does not compile with non-constant length
    unsigned int arr1[arr1Len];

    for (unsigned short int index = 0; index < arr1Len; index++){
        arr1[index] = index * index;
    }

    for (short i = 0; i < arr1Len; ++i){
        std::cout << arr1[i] << std::endl;
    }

    std::cout << "This is standard output" << std::endl;
    std::cerr << "This is error output" << std::endl;
    std::clog << "This is log output" << std::endl;

    return 0;
}