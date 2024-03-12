// Functions are broken up into various parts
// Return type, name, parameter list, and body
// example:
// int main() // int is out return type, main is our function name, and the () is the parameter list
//{
    //cout << "Hello World\n"; // this is our function body
    //return 0;
//}

/* void functions perform one or more statements and then terminate. they do not 
return a value*/
//this is what it looks like when a function is called

// this program has two functions: main and displayMessage
#include <iostream>
using namespace std;

void displayMessage()
{
    cout << "Hello from the function displayMessage.\n";
}

int main()
{
    cout << "Hellow from main.\n";
    displayMessage();
    cout << "Back in the function main.\n";
    return 0;
}