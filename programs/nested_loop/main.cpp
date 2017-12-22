#include <iostream>

int main(void){
    unsigned int height, width;

    std::cout << "Enter a height and width: ";
    std::cin >> height >> width;
    
    for (unsigned int y = 0; y < height; ++y){
        for (unsigned int x = 0; x < ((double)width * (double) y / (double)height); ++x){
            std::cout << (x * y % 10);
        }
        std::cout << std::endl;
    }

    return 0;
}