// This program has three functions: main, deep, and deeper
#include <iostream>
using namespace std;

void deeper()
{
    cout << "I am now inside the function deeper.\n";
}

void deep()
{
    cout << "I am now inside of the function deep.\n";
    deeper(); // calls the function deeper
    cout << "Now I am back in deep.\n";
}

int main()
{
    cout << "I am starting in function main.\n";
    deep(); // calls the function deep
    cout << "Back in function main again.\n";
    return 0;
}