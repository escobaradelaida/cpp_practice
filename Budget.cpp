// This program demos a static class member varaible
#include <iostream>
#include <iomanip>
#include "Budget.h"
using namespace std;

int main()
{
    int count; // Loop counter
    const int NUM_DIVISIONS = 4; // number of divisions
    Budget divisions[NUM_DIVISIONS]; // array of budget objects

    // get the budget requests for each divsion
    for (count = 0; count < NUM_DIVISIONS; count++)
    {
        double budgetAmount;
        cout << "Enter budget request for division ";
        cout << (count + 1) << ": ";
        cin >> budgetAmount;
        divisions[count].addBudget(budgetAmount);
    }

    // Display the budget requests and the corporate budget
    cout << fixed << showpoint << setprecision(2);
    cout << "\nHere are the division budget requests:\n";
    for (count = 0; count < NUM_DIVISIONS; count++)
    {
        cout << "\tDivision " << (count + 1) << "\t$ ";
        cout << divisions[count].getDivisionBudget() << endl;
    }
    cout << "\tTotal Budget Requests:\t$ ";
    cout << divisions[0].getCorpBudget() << endl;

    return 0;
}