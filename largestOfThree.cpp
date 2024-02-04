#include <iostream>

int main() {
    //declare numbers 
    int number1, number2, number3;


//output to show enter three numbers
std::cout << "Enter the first number: ";
std::cin >> number1;

std::cout << "Enter the second number: ";
std::cin >> number2;

std::cout << "Enter the third number: ";
std::cin >> number3;

//determine larger number with if statements
if (number1 >= number2) {
    if (number1 >= number3) {
        std::cout << "The largest number is: " << number1 << std::endl;
    } else {
        std::cout << "The largest number is: " << number3 << std::endl;
    }
} else {
    if (number2 >= number3) {
        std::cout << "The largest number is: " << number2 << std::endl;
    } else {
        std::cout << "The largest number is: " << number3 << std::endl;
    }
    }

return 0;
}