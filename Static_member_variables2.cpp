// This program demos a static member variable
#include <iostream>
#include "Tree.h"
using namespace std;

int main()
{
    // define three Tree objects
    Tree Oak;
    Tree Elm;
    Tree Pine;

    // display the number of Tree objects we have
    cout << "We have " << Pine.getObjectCount() // calls the .getObjectCount member function to retrieve # of instances created
         << " trees in our program";
    return 0;
}

// the program creates three instances of the Tree class stored in the variables Oak, Elm, Pine