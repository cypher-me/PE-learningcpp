#include <iostream>
// Input Output
// int numberOut = 45;

// int main(){
//     std::cout << "Hello world" << std::endl;
//     std::cout << "the number is :" << numberOut << std::endl;
//     std::cerr << "std::cerr output: Something went wrong" << std::endl;
//     std::clog << "std::clog output: This is a log message" << std::endl;
// }

// Reading Data in 

// int main(){
//     int age;
//     std::string name;

//     std::cout << "What is our name: " << std::endl;
//     std::cin >> name;

//     std::cout << "What is your age: " << std::endl;
//     std::cin >> age;

//     std::cout << "Name : " << name << "Age : " << age << std::endl;
// }

// Chaining input

int main() {
    int age;
    std::string name;

    std::cout << "Enter name and age seperated by a space :" << std::endl;
    std::cin >> name >> age;
    std::cout << "Name : " << name << "  Age : " << age << std::endl;
}