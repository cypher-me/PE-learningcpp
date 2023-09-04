// Reading data with spaces
#include <iostream>

int main(){ 
    int age;
    std::string name;

    std::cout << "What is your name :  " << std::endl;
    std::getline(std::cin, name);
    // std::cin >> name;

    std::cout << "Please input your age :  " << std::endl;
    std::cin >> age;

    std::cout << "Your name is : " << name << " and age is : " << age << std::endl;
}