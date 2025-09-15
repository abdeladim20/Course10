#include <iostream>
using namespace std;

class clsPerson
{
private: // only accessable inside this class
    int Variabl1 = 7;
    int Function1() { return 50; }

protected: // only accessable inside this class and all classes inhirets this class
    int Variabl2 = 100;
    int Function2() { return 60; }

public: // accessable for everyone outside/inside and classes inherits this class
    string FirstName;
    string LastName;
    string FullName() { return FirstName + " " + LastName; }
    float Function3() { return Function1() * Variabl1 * Variabl2; }
};

int main()
{
    clsPerson Person1;
    Person1.FirstName = "Abdeladim";
    Person1.LastName = "Jabbouri";
    cout << "Person1: " << Person1.FullName() << endl;
    cout << Person1.Function3();
}