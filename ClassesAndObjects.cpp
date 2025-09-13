#include <iostream>
using namespace std;

class clsPerson
{
    int num;

public:
    string FistName;
    string LastName;
    string FullName()
    {
        return FistName + " " + LastName;
    }
};

int main()
{
    clsPerson Person1;
    Person1.FistName = "Abdeladim";
    Person1.LastName = "Jabbouri";
    cout << Person1.FullName() << endl;

    return 0;
}