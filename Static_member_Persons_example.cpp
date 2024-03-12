#include <iostream>
using namespace std;

class Person
{
    private:
        static int count;
    public:
        Person()
        {
            count++;
        }

        ~Person()
        {
            count--;
        }

        int getCount()
        {
            return count;
        }
};

int Person::count = 0;

int main()
{
    Person p1;
    Person p2;
    Person p3;

    cout << "We have " << p1.getCount() << " Person objects.";
    return 0;
}

