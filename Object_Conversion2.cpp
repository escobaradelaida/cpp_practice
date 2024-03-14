/* Live code example: complete the class by writing an inline operator function
that converts the value member to a double. Code should display 99.00*/

#include <iostream>
#include <iomanip>
using namespace std;

class Number
{
private:
    int value;
public:
    Number(int i)
    {
        value = i;
    }

    int getValue()
    {
        return value;
    }
    // this is the inline operator. 
    operator double()
    {
        return (double)value;
    }
};

int main()
{
    Number n(99);
    double d = n;
    cout << showpoint << setprecision(2) << fixed
         << d << endl;
    return 0;
}