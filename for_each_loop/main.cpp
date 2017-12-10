#include <iostream>

int main(void){
    int arr[] = {5, 4, 1, 2, 3, -1};
    double arr2[] = {1.1, 2.2, 6.1, 3.5};

    bool firstElement;

    firstElement = true;
    for(int i : arr){
        if (!firstElement){
            std::cout << " ";
        }
        std::cout << i;
        firstElement = false;
    }
    std::cout << std::endl;

    firstElement = true;
    for(double i : arr2){
        if (!firstElement){
            std::cout << " ";
        }
        std::cout << i;
        firstElement = false;
    }
    std::cout << std::endl;

    firstElement = true;
    for(auto i : arr2){
        if (!firstElement){
            std::cout << " ";
        }
        std::cout << i;
        firstElement = false;
    }
    std::cout << std::endl;

    std::cout << arr[0];
    for(int i=1; i < 6; i++){
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;

    return 0;
}