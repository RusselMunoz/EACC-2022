#include <iostream>
#include <iomanip> 

int main() {
    std::string bio;
    int width = 100;
    int pos = 0;

    std::cout << "Tell us about yourself: ";
    std::getline(std::cin, bio);
    
    std::cout << std::endl;

    std::cout << "Your bio says: " << std::endl;

    while (pos < bio.length()) {
        
        int len = std::min(width, static_cast<int>(bio.length() - pos));
        std::cout << std::setw(width) << std::left << std::setfill(' ') << bio.substr(pos, len) << std::endl;
        pos += len; 
    }

    return 0;
}

