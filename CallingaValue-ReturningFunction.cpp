//this program uses a function that returns a value
#include <iostream>
using namespace std;

//function prototype
int sum(int, int);

int main()
{
    int value1 = 20, //first value
        value2 = 40, //second value
        total; // to hold the total

    //call the sum function passing the contents of value1 and value 2 as args
    //Assign the return value to the total variable
    total = sum(value1, value2);

    //Display the sum of the values
    cout << "The sum of " << value1 << " and " << value2 << " is " << total << endl;
    return 0;
}

//definition of the function sum. returns sum of its two parameters
int sum(int num1, int num2)
{
    return num1 + num2;
}