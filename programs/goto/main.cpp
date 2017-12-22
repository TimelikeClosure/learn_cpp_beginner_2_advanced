#include <iostream>

int main(){
    int i = 1;

    AGAIN:
        std::cout << i << std::endl;

        ++i;
        if (i <= 20){
            goto AGAIN;
        }

    return 0;
}