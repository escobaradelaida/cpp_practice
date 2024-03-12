#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum;
    char again;

    do {
        cout << "Enter two numbers and I will calculate its sum.\n";

        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;

        sum = num1 + num2;
        cout << num1 << " + " << num2 << " = " << sum << endl;
        cout << "\nWould you like to calculate another sum?: ";
        cin >> again;
    }

    while (again == 'y' || again == 'Y');
    return 0;
}