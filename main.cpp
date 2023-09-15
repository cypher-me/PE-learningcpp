// Functional initialization
#include <iostream>

int main () 
{
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    int narrow_conversion_functional(2.9); //outputs two

    std::cout << narrow_conversion_functional << std::endl;

}
