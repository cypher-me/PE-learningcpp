// Integers
#include <iostream>

int elephant_count; // variable may contains a random garbage value
int lion_count {}; // Initializes to 0
int cow_count {10};
int dog_count {15};

int domestic_count {cow_count + dog_count};
// int dosnt_exist {crow_count + snake_count}; // won't compile with undeclared variable

// int narrowing_conversion {2.9};


int main()
{
    // std::cout << some_number << std::endl;
    return EXIT_SUCCESS;
}