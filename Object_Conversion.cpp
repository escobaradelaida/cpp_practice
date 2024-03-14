// Special operator functions may be writen to convert a class object to any other type

/* Take a look at the variable below
   
   int i;
   double d;
   
   
   the statement below auto converts the value of i to a floating-point
   number and stores it in d: 
   d = i
   
   the statement below converts the value in d to an integer and stores
   it in i:
   i = d;
   
   This functionality can be given to class objects.
   If distance is a FeetInches object and d is a double,
   the following statement and store it in d:
   d = distance;
   
   Here is a code for the operator function that converts a FeetInches object as a double
   
   FeetInches::operator double()
   {
    double temp = feet;
    temp += (inches / 12.0);
    return temp;
}

    So if the value 4 feet 6 inches will be converted to 4.5 and the value
    is stored in the local variable temp*/

// Code example: this program demos the FeetInches class's conversion functions
#include <iostream>
#include "FeetInches.h"
using namespace std;

int main()
{
    double d; // to hold double input
    int i; // to hold int input

    // Define a FeetInches object
    FeetInches distance;

    // get a distance from the user
    cout << "Enter a distance in feet and inches:\n"
    cin >> distance;

    // convert the distance object to a double
    d = double;

    // convert the distance object to an in
    i = distance;

    // display the values
    cout << "The Value " << distance;
    cout << " is equivalent to " << d << " feet\n";
    cout << "or " << i << "feet, rounded down.\n"
    return 0;
}
   