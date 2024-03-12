#include <iostream>
#include <iomanip>
using namespace std;

void showDollars(double); //our function prototype

int main()
{
    double payRate, hoursWorked, wages;
    cout << "How many hours have you worked? ";
    cin >> payRate;

    wages = hoursWorked * payRate;

    showDollars(wages);
    return 0;
}

void showDollars(double dollars)
{
    cout << "Your wages are $" << setprecision(2) << fixed << showpoint << dollars << endl;
}