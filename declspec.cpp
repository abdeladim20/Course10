// --------- windows code : -------

// #include <iostream>
// using namespace std;

// class clsPerson
// {
// private:
//     string _FirstName;

// public:
//     void SetFirstName(string FirstName)
//     {
//         _FirstName = FirstName;
//     }
//     string GetFirstName()
//     {
//         return _FirstName;
//     }
//     // this line work only on windows !!!!! (is a Microsoft-specific extension that allows C++ to mimic C#-style properties)
//     __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
//      declspec : declaration specification 
// };
// int main()
// {
//     clsPerson Person1;
//     Person1.SetFirstName("Abdeladim");
//     cout << Person1.GetFirstName() << endl;

//     // instead of the above we only write this
//     Person1.FirstName = "Abdeladim";
//     cout << Person1.FirstName;
//     return 0;
// }

// --------- linux code : ---------
#include <iostream>
using namespace std;

class clsPerson
{
private:
    string _FirstName;

public:
    void SetFirstName(const string &FirstName) { _FirstName = FirstName; }
    string GetFirstName() const { return _FirstName; }
};

int main()
{
    clsPerson Person1;
    Person1.SetFirstName("Abdeladim");
    cout << Person1.GetFirstName() << endl;
}
