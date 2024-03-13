/* Complete he Person class below by filling line 19 and replacing it with a copy constructor
    The copy constructor should initialize the name member with the string "Copy of"
    followed by the contents of the argument object's name member.*/

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
public:
    Person(string n)
    {
        name = n;
    }

    Person(const Person &p)
    {
        name = "Copy of " + p.name;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    Person person1("Hamilton");
    Person person2 = person1;

    cout << person1.getName() << endl;
    cout << person2.getName() << endl;
    return 0;
}