//This program demos a function with three parameters
#include <iostream>
using namespace std;

//function prototype
void showSum(int, int, int);

int main()
{
    int value1, value2, value3; 

    //get three integers
    cout << "Enter three integers and I will display their sum: ";
    cin >> value1 >> value2 >> value3;

    //call showSum passing three args
    showSum(value1, value2, value3);
    return 0;
}

//definition of function showSum
void showSum(int num1, int num2, int num3)  // each parameter variable must have a data type
{
    cout << (num1 + num2 + num3) << endl;
}