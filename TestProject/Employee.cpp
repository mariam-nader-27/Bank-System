#include "Employee.h"

Employee::Employee(int id, string name, string password, double salary): Person(id, name, password)
{
    this->salary = salary;
}
void Employee::setSalary(double salary)
{
    if (salary >= 5000)
    {
        this->salary = salary;
    }
    else
    {
        cout << "Invalid Salary! Minimum salary is 5000." << endl;
    }
}

double Employee::getSalary()
{
    return salary;
}

void Employee::display()
{
    Person::display();
    cout << "Salary: " << salary << endl;
}
