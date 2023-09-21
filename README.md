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
Eg

```cpp
    #include <iostream>
    std::string name;
    int age;

    int main() {
        std::cout << "Please enter your names..." << std::endl; // input with spaces
        // std::cin >> name >> age;
        std::getline(std::cin, name);
        std::cout << "Your name is : " << name << std::endl;
    }

    // Output 
    /*
        Please enter your names...
        manu is awsome
        Your name is : manu is awsome
    */
```

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

### C++ core language Vs Standard Library Vs STL

- Core feature - basic building block that makes up cpp lang,
                - They are basically the rules that govern what you can do and cannot do with cpp. eg `Int`

- Standard Library - Set of ready to use highly specialised components that can easyly be used in a cpp program eg `<iostream> <string>`

- STL - Part of standard library. Collection of container of types eg iterators, funcions and algorithms.

## Day 4 3:00

### Variables, Number Systems and data types

#### Data types
- `int ` Predefined type in cpp. Reps whole numbers
- `double` Rep fractional numbers. decimal numbers.
- `float` Rep fractional numbers. decimal numbers.
- `char` Characters in memory.
- `bool` Stores two possible  values
- `void` typeless type
- `auto` not a type. A keyword actually

#### Number Systems
- Decimal (Base 10)
- Binary (Base 2)
- Octal (Base 8)
- hex (Base 16)
```cpp

    int number1 = 15; //Decimal
    int number2 = 017; //Octal
    int number3 = 0x0f; //hexadecimal
    int number4 = 0b0000111; // Binary

    int main()
    {
        std::cout << "Hello world from manu" << std::endl;
        std::cout << "Number 1 is :  " << number1 << std::endl; // 15
        std::cout << "Number 2 is :  " << number2 << std::endl; // 15
        std::cout << "Number 3 is :  " << number3 << std::endl; // 15
        std::cout << "Number 4 is :  " << number4 << std::endl; // 15

        return 0;
    }

```
#### Integers (In detail) 3:22

Rep whole numbers.
Occupy `4 bytes`or more in memory.
Variable : named piece of memory used to store 
specific types of data.

```cpp
    int apple_count{5};
    int orange_count{10};
    int fruit_count{apple_count + orange_count};

    int narrow_conversion_functional{2.9}; //causes a compilation error
    //compilation is unsuccessfull
```

##### Functional initialization 3:35 
Uses brackets instead of curly brackets ()


```cpp
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    int narrow_conversion_functional(2.9); //outputs 2
    //Infomation is lost but the compilation is successfull
    // Not recommended
    // chops out fraction part
```

##### Assignment notation 
Uses an equal sign (=)

```cpp
    int apple_count = 5;
    int orange_count = 10;
    int fruit_count = apple_count + orange_count;

    int narrow_conversion_functional = 2.9;//outputs 2
    //Infomation is lost but the compilation is successfull
    // Not recommended
    // chops out fraction part
```

##### Integer modifiers

Adding positive or negative numbers to a variable.
You use the signed keyword. An integer type is `signed` by default .
`signed` keyword shows you only want to store either a 
positive or negative value
`unsigned` Used when you only want to use positive values

```cpp
    signed int value1 {10};
    signed int value2 {-300};
    unsigned int value2 {-300}; // compilation error
```

`short` variable is 2 bytes in memory.
It shortens the length of variable in memory.
Only works in integral types(decimal numbers).
Does not work with floating point numbers.

```cpp
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
```

#### Fractional Numbers(floating Points)
