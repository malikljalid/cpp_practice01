#include <iostream>

int globalVar = 13;

int getNumber(void)
{
    static int staticNumber = 0;

    staticNumber++;

    return (staticNumber);
}

int main(void)
{
    int localNumber = 20;

    std::string *Names = new std::string[6];

    // globalVar & staticNumber are stored in the Static/Global area in Memory
    // getNumber() & localNumber are stored int the STACK area in memory
    // Names[6] is stored int HEAP area in the memory because its dynamically allocated
    // our source code and this entire program text and instructions are stored in area called Source Code/Instructions

    std::cout << "RAM-Memory is splited into 4 main parts : \n\n";
    std::cout << "Source Code / Instructions : typically the entire code/text/intructions of our program sotred in it\n";
    std::cout << "Global / Static : Static & global variables in our program are stored in it\n";
    std::cout << "Stack : Local variables, functions and pointers in our code are stored in this area \n";
    std::cout << "Heap  : Any variable, array, object or structer we dynamically allocate space for, are stored in the HEAP\n";

    return (0);
}