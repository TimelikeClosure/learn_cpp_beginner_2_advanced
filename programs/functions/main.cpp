#include <iostream>

void printBar(unsigned short int size){
    for (unsigned short int layer = 1; layer <= size; layer++){
        std::cout << "*";
    }
    std::cout << std::endl;
};

int main(void){

    {
        unsigned short int barSize;
        while(true){
            std::cout << "Enter a bar size (0 to end): ";
            std::cin >> barSize;
            if (barSize == 0){ break; }
            printBar(barSize);
        }
    }

    return 0;
}