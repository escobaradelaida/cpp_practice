//Menu-driven program that makes a function call for each selection the user makes

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
void showMenu();
void showFees(double, int);

int main()
{
    int choice, months; //holds a menu choice

    //constants for menu choices
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE = 2,
              SENIOR_CHOICE = 3,
              QUIT_CHOICE = 4;

    //Constants for membership rates
    const double ADULT = 40.0,
                 CHILD = 20.0,
                 SENIOR = 30.0;
    //setting up numeric output formatiing before ending this block
    cout << fixed << showpoint << setprecision(2);

    do
    {
        //display the menu and get user choice
        showMenu();
        cin >> choice;

        //validate the menu selection
        while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)
        {
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }    

            //proceeding if the user does not want to quit
            if (choice != QUIT_CHOICE)
            {
                //get num of months
                cout << "For how many months?: ";
                cin >> months;

                //membership fees
                switch (choice)
                {
                    case ADULT_CHOICE:
                        showFees(ADULT, months);
                        break;
                    case CHILD_CHOICE:
                        showFees(CHILD, months);
                        break;
                    case SENIOR_CHOICE:
                        showFees(SENIOR, months);
                }
            }
     
    } while (choice != QUIT_CHOICE);
    return 0;
}

//definition of function showMenu
void showMenu()
{
    cout << "\n\t\tHealth Club Membership Menu\n\n"
         << "1. Standard Adult Membership\n"
         << "2. Child Membership\n"
         << "3. Senior Citizen Membership\n"
         << "4. Quit the Program\n"
         << "Enter your choice: ";
}

//definition of function showFees
void showFees(double memberRate, int months)
{
    cout << "The total charges are $"
         << (memberRate * months) << endl;
}