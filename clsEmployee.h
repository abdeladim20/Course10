#include <iostream>
#include "clsPerson.h"
using namespace std;

class clsEmployee : public clsPerson
{
private:
    string _Title;
    string _Department;
    float _Salary;

public:
    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary) : clsPerson(ID, FirstName, LastName, Email, Phone)
    {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;
    }

    // Property Set
    void setTitle(string Title) { _Title = Title; }

    // Property Get
    string Title() { return _Title; }

    // Property Set
    void setDepartment(string Department) { _Department = Department; }

    // Property Get
    string Department() { return _Department; }

    // Property Set
    void setSalary(float Salary) { _Salary = Salary; }

    // Property Get
    float Salary() { return _Salary; }
};
