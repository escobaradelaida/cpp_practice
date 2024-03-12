// a global variable is any variable defined outside all the functions in a program
// a global variable can be accessed by all functions that are defined after the global variable is defined
// if a global variable is not set to any value by a statement, it is auto set to zero
// below show two functions, main and anotherFunction that access the same global variable num

#include <iostream>
using namespace std;

void anotherFunction(); // function prototype
int num = 2;  // this is our global variable, both functions have access to this

int main()
{
    cout << "In main, num is " << num << endl;
    anotherFunction();
    cout << "Back in main, num is " << num << endl;
    return 0;
}

//definition of anotherFunction
//this function changes the value of the global variable num

void anotherFunction()
{
    cout << "In anotherFunction, num is " << num << endl;
    num = 50; // this is where the variable num changes
    cout << "But, it is now changed to " << num << endl;
}