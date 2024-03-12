/* When an argument is passed into a parameter, only a copy of the argument's value is passed
Normall, when a parameter's value is changed inside a function, it has no effect on the original statement*/

//This program demos that changes to a function parameter have no effect on the original argument

#include <iostream>
using namespace std;

//function prototype
void changeMe(int);

int main()
{
    int number = 12;

    //display value in number
    cout << "the number is " << number << endl;

    //calls changeMe, passing the value in number as an arg
    changeMe(number);

    //display the value in number again
    cout << "Now back in main again, the value of ";
    cout << "number is " << number << endl;
    return 0;
}

//definition of function changeMe
//this function changes the value of the parameter myValue
void changeMe(int myValue)
{
    //change the value of myValue to 0
    myValue = 0;
    
    //display the value in myValue
    cout << "Now the value is " << myValue << endl;
}