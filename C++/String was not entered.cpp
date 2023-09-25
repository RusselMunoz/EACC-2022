#include <iostream>
#include <limits>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ") != std::string::npos) {
        std::cout << "You did not enter a valid string!\n";
    } else {
        std::cout << "You entered: " << input << '\n';
    }

    return 0;
}

