#include <iostream>

int getAnIntFromTheUser() {
    int userInput;

   // displays user to enter a number
    std::cout << "Enter a Number: ";
    std::cin >> userInput;

    return userInput;
}
int compareTwoInts(int a, int b) {
    //displays the larger number
    return(a > b) ? a : b;
}
int sumTwoInts(int a, int b) {
    //return results of the sum of the two numbers
    return a + b;
}
int subtractTwoInts(int a, int b) {
    //return results of subtracting two numbers
    return a - b;
}
int multiplyTwoInts(int a, int b) {
    //return results of multiplying two numbers
    return a * b;
}

int main() {
    //display getAnIntFromTheUser function
    int firstNumber = getAnIntFromTheUser();
    int secondNumber = getAnIntFromTheUser();

    //displays compareTwoInts function
    int largerNumber= compareTwoInts(firstNumber, secondNumber);
    std::cout << "The largest out of the two numbers is: " << largerNumber << std::endl;

    //displays sumTwoInts function
    int sum = sumTwoInts(firstNumber, secondNumber);
    std::cout << "The sum of the two numbers is: " << sum << std::endl;


int difference = subtractTwoInts(firstNumber, secondNumber);
std::cout << "The difference of the two numbers is: " << difference << std::endl;

    int product = multiplyTwoInts(firstNumber, secondNumber);
    std::cout << "The multple of the two numbers: " << product << std::endl;
    return 0;
}