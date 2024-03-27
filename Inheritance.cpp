#include <iostream>
#include <string>
using namespace std;

class Phone
{
private:
    string phoneNumber;
public:
    void setPhoneNumber(string pn)
    {
        phoneNumber = pn;
    }

    string getPhoneNumber() const
    {
        return phoneNumber;
    }
};

// Modify the SmartPhone class header so that
// SmartPhone is derived from the Phone class. This should be in line 23
class SmartPhone : public Phone
{
private:
    int monthlyGigabytes;
public:
    void setMonthlyGigabytes(int g)
    {
        monthlyGigabytes = g;
    }

    int getMonthlyGigabytes() const
    {
        return monthlyGigabytes;
    }
};

int main()
{
    SmartPhone smartPhone;
    smartPhone.setPhoneNumber("919-555-1212");
    smartPhone.setMonthlyGigabytes(16);

    cout << "My phone number is " << smartPhone.getPhoneNumber() 	 	 << endl;
    cout << "I have " << smartPhone.getMonthlyGigabytes()
         << " gigabytes of data per month.\n";
    return 0;
}