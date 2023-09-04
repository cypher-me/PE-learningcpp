# CPP Personal notes for self study

## Author `cypher-me`

## Day_1 1.46.50

```cpp
#include // used to load builtin and user defined modules
#include <iostream> // import system module
#include <main.h> //import user modules
                // does no end with a semi colon 
```

## Day_2 1.46

### main function and std::cout

```cpp
#include <iostream> // allows us to print things to the console
                    // it gives us access to std
```

### The main() function

This is the entry point of your c++ program
the first function to run

```cpp
std::cout // prints characters to the console
std::endl // prints a newline character
std::cout << "manu is awsome" << std::endl; //

// the main function must be in your cpp program
int main(){

}
```

Returning from the main fuction

```cpp
int main(){

    return 0 // Tells the OS that the function has run succesfully and has no errors

}
```

### cpp comments

```cpp
// one line comment

/*
    Multiline blok comment
    Amazing
*/
```

## Day Three

### Errors and warnings 2:01

There are three types

- compile-time errors
- runtime errors
- warnings

```cpp
int main() {
    // compile time errors the lack of a semicolon causes the code not to be compiled
    std::cout << "manu is awsome" << std::endl
    
}

```

Runtime error is a logical error that arires after compilation
it can cause the program to crash

Warnings not serious enough to halt compilation. Should be fixed before it becomes a major error

### Statements and functions 2:13

Statement is a basic unit of computation
They end with a semicolon
They include variables

#### Functions

They are defined outside the main function
Should be defined before they are called
A function to add numbers

```cpp
int addNumber(int firstNumber, int secondNumber) {
    int sum = firstNumber + secondNumber;
    return sum;
}

int main (){
    // call the function
}
```

### Input Output 2:31

#### std::cout 

Printing data to console
Used for output to the terminal
The arrows point to cout to signal data is going to std::cout
Get data prom program to terminal
```cpp
    std::cout << "Hello world" << std::endl;
```

#### std::cin

Reading data from the terminal

```cpp
    int age;
    std::string name;

    std::cout << "What is our name: " << std::endl;
    std::cin >> name;

    std::cout << "What is your age: " << std::endl;
    std::cin >> age;

    std::cout << "Name : " << name << "Age : " << age << std::endl;

```

You can also us std::cin to chain input into multiple variables when input is seperated by spaces

```cpp
    int age;
    std::string name;

    std::cout << "Enter name and age seperated by a space :" << std::endl;
    std::cin >> name >> age;
    std::cout << "Name : " << name << "  Age : " << age << std::endl;
```

Reading data with spaces.
The program will crash if input is multiple words
You bypass this by the `std::getline(<stream_where_data_is_to_go_eg>std::cin,<variable_to_read_the_data>)`

```cpp
    int age;
    std::string name;

    std::cout << "What is your name :  " << std::endl;
    std::getline(std::cin, name);
    // std::cin >> name;

    std::cout << "Please input your age :  " << std::endl;
    std::cin >> age;

    std::cout << "Your name is : " << name << " and age is : " << age << std::endl;
```


#### std::cerr 

Printing errors to the console

```cpp
    std::cerr << "Custom error message " << std::endl;
```

#### std::clog 

Print log messages to the console

```cpp

    std::cout << "Hello world" << std::endl;
    std::cout << "the number is :" << numberOut << std::endl;
    std::cerr << "std::cerr output: Something went wrong" << std::endl;
    std::clog << "std::clog output: This is a log message" << std::endl;

```

### C++ Program Execution and Memory Model.

When you run a compiled progrum it is loaded into
memory and is run by the cpu.
When the program is done running it is removed 
from memory and space freed.
In memory an empty variable is assigned a random 
value as a placeholder. 
```cpp
    int age; // The empty variable is assigned a random
                //placeholder in memory
```

