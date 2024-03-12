// variables definied inside a function are local to that function.
// they are hidden from the statements in other functions which normally cant access them
#include <iostream>
using namespace std;

void anotherFunction(); // function prototype

int main()
{
    int num = 1; // this is our local variable

    cout << "In the main, the num is " << num << endl;
    anotherFunction();
    cout << "Back in the main, the num is " << num << endl;
    return 0;
}

// definition of anotherFunction
// it has a local variable, num, whose initial value is displayed

void anotherFunction()
{
    int num = 20; // this is the local variable
    cout << "In another function, num is " << num << endl;
}