/* A function prototyle eliminates the need to place a function definition before all calls to the function*/
// Here is an example of a prototype for displayMessage
// void displayMessage();
// this time, it actually ends with a semi-colon
// usually placed near the top of the program so the compiler can access them first

// This program has three functions: main, first, second

#include <iostream>
using namespace std;

void first();
void second();

int main()
{
    cout << "I am starting in the main function.\n";
    first();
    second();
    cout << "Back into the main function again.\n";
    return 0;
}

// definition of the function first
void first()
{
    cout << "I am now inside of the first function.\n";
}

// definition of the function second
void second()
{
    cout << "I am now inside of the second function.\n";
}
