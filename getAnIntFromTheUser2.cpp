#include <iostream>

int getAnIntFromTheUser() {
    int userInput;

    std::cout << "Enter Year Born: ";
    std::cin >> userInput;

    return userInput;
}

int main() {

    int userInteger = getAnIntFromTheUser();

    std::cout << "You Were Born In  " << userInteger << std::endl;

    return 0;
}