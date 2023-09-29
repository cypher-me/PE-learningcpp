// Fractional Numbers
#include <iostream>
#include <iomanip>

float my_float {1.234567891011121314151617181920F};
double my_double {1.234567891011121314151617181920};
long double my_long_double {0.234567891011121314151617181920L};


int main() {

    // std::cout << std::setprecision(20);
    std::cout << "size of my_float:  " << sizeof(my_float) << std::endl;
    std::cout << "size of my_double:  " << sizeof(my_double) << std::endl;
    std::cout << "size of my_long_double:  " << sizeof(my_long_double) << std::endl;

    std::cout << "my_float:  " << my_float << std::endl;
    std::cout << "my_double:  " << my_double << std::endl;
    std::cout << "my_long_double:  " << my_long_double << std::endl;
}

