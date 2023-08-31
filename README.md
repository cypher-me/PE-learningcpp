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