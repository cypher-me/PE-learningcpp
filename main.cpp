#include <iostream>
// Functions

int addNumber(int firstNumber, int secondNumber) {
    int sum = firstNumber + secondNumber;
    return sum;
}

int main(){
    std::cout << addNumber(4,5) << std::endl;
}
