/*Values sent into a function are called arguments. Parameters can help you design your own functions that accept data this way
Parameters are a special value that holds a value being passed into a function.
Here is an example:

void displayValue(int num)
{
    cout << "The value is " << num << endl;
}*/

//this program demonstrates a function with a parameter

#include <iostream>
using namespace std;

void displayValue(int);

int main()
{
    cout << "I am passing 5 to displayValue.\n";
    displayValue(5); // calls displayValue with argument 5
    cout << "Now I am back in main.\n";
    return 0;
}

//definition of function displayValue
void displayValue(int num)
{
    cout << "The value is " << num << endl;
}