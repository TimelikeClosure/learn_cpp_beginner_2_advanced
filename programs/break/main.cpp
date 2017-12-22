#include <iostream>

int main(int argc, char *argv[]){
    if (argc > 2){
        std::cout << "Err: Too many parameters \"" << argv[1];
        for (int i = 2; i < argc; ++i){
            std::cout << " " <<  argv[i];
        }
        std::cout << "\"" << std::endl;
        return 1;
    }
    bool showPrompt = true;
    if (argc == 2){
        if (argv[1][1] == 'q'){
            showPrompt = false;
        } else {
            std::cout << "Err: Unknown parameter \"" << argv[1] << "\"" << std::endl;
            return 1;
        }
    }

    int sum = 0;

    for (int i = 1; i <= 100; ++i){
        int number;

        if (showPrompt){
            std::cout << "Enter " << ((i == 1) ? "a" : "next") << " number to add (or -1 to end): ";
        }
        std::cin >> number;

        if (number == -1) break;

        sum += number;
    }

    std::cout << "The sum is " << sum << std::endl;

    return 0;
}