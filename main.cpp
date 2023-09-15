// Integer modifiers
#include <iostream>

int main() 
{
    signed int value1 {10};
    signed int value2 {-300};

    short short_var {-3456}; //2 bytes
    short int short_int {455}; //2 bytes
    signed short signed_short {122}; //2 bytes
    signed short int signed_short_int {-456}; //2 bytes
    unsigned short int unsigned_short_int {456}; //2 bytes

    long long_var {-3456}; //4 bytes
    long int long_int {455}; //4 bytes
    signed long signed_long {122}; //4 bytes
    signed long int signed_long_int {-456}; //4 bytes
    unsigned long int unsigned_long_int {456}; //4 bytes

    long long long_long_var {-3456}; //8 bytes
    long long int long_long_int {455}; //8 bytes
    signed long long signed_long_long {122}; //8 bytes
    signed long long int signed_long_long_int {-456}; //8 bytes
    unsigned long long int unsigned_long_long_int {456}; //8 bytes

    std::cout << "value1:  " << value1 << std::endl;
    std::cout << "value2:  " << value2 << std::endl;
}
