// This program has three functions: main, first, and second

#include <iostream>
using namespace std;

// here is void first
void first()
{
    cout << "I am now inside of function first.\n";
}

//here is the definition for void second
void second()
{
    cout << "I am now inside of the function second.\n";
}

//here is function main
int main()
{
    cout << "I am starting in function main.\n";
    first(); // calls the function first
    second(); // calls the function second
    cout << "Back in function main again.\n";
    return 0;
}