#include <iostream>
#include <string>

int main() {
    std::string inputString;

    std::cout << "Enter Your Name: ";
    std::getline(std::cin, inputString);

    std::string reversedString(inputString.rbegin(), inputString.rend());

    std::cout << "Reversed Your Name: " << reversedString << std::endl;

    return 0;
}