/* A constructor is a member function that is autonmatically called when a class object is created
    It has the same name as the class and it is automatically called when the object is created in memory,
    or instantiated*/

// This program demonstrates a constructor
#include <iostream>
using namespace std;

// Demo class declaration

class Demo
{
    public:
        Demo(); // Constructor
};

Demo::Demo()
{
    cout << "Welcome to the constructor\n";
}

// Main function

int main()
{
    Demo demoObject; // Define a Demo object

    cout << "This program demonstrates an object\n";
    cout << "with a constructor.\n";
    return 0;
}