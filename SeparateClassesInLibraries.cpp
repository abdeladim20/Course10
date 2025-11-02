#include <iostream>
#include "clsPerson.h"
#include "clsEmployee.h"

using namespace std;

int main()
{
    clsEmployee Employee1(10, "abdeladim", "jabbouri", "Abdeladim@gmail.com", "8298982", "CEO", "google", 5000);
    Employee1.Print();
    cout << "\n"
         << Employee1.Title() << endl;
    cout << Employee1.Department() << endl;
    cout << Employee1.Salary() << endl;
    return 0;
}