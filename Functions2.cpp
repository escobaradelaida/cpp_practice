//Here is a code in which function displayMessage is repeatedly called from a Loop.
#include <iostream>
using namespace std;

void displayMessage()
{
    cout << "Hellow from the function displayMessage.\n";
}

int main()
{
    cout << "Hello from main.\n";
    for (int count = 0; count < 5; count++)
        displayMessage(); //will call displayMessage
    cout << "Back in the function main.\n";
    return 0;
}