#include <iostream>

int main(void){

    const unsigned short int numberListCount = 10;

    int numberList[numberListCount];

    std::cout << "Enter number 1 of " << numberListCount << ": ";
    std::cin >> numberList[0];

    unsigned short int 
        minIndex = 0,
        maxIndex = 0;
    
    for (unsigned short int index = 1; index < numberListCount; index++){
    std::cout << "Enter number " << (index + 1) << " of " << numberListCount << ": ";
        std::cin >> numberList[index];
        if (numberList[index] < numberList[minIndex]){
            minIndex = index;
        } else if (numberList[index] > numberList[maxIndex]){
            maxIndex = index;
        }
    }

    std::cout << "Your numbers range from " << numberList[minIndex] << " to " << numberList[maxIndex] << std::endl;

    return 0;
}