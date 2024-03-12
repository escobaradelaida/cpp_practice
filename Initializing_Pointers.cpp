/* legal initialized pointers:
    int myValue;
    int *pint = &myValue; // legal because myValue is an integer

    another legal:
    int ages[20];
    int *pint = ages; // legal because ages is an array of integers

    can also be written as:
    int myValue, *pint = &myValue; // defines int value myValue, then defines pointer *pint, which is initialized with address myValue

    illegal:
    float myFloat;
    int *pint = &myFloat; //cannot have a float for pointers */

// This program displays multiples of the number 5

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;

    int multiples[SIZE] = {5, 10, 15, 20, 25};
    int index;

    int *multiplesPtr = multiples;

    cout << "Multiples of Five" << endl;

    for (index = 0; index < SIZE; index++)
    {
        cout << *multiplesPtr << endl;
        multiplesPtr++;
    }
    return 0;
}

