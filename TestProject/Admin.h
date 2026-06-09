#ifndef ADMIN_H
#define ADMIN_H
#include "Employee.h"

class Admin : public Employee
{
public:
    Admin(int id, string name, string password, double salary) : Employee(id, name, password, salary)
    {
    }
    void display()
    {
        cout << "Admin Data :" << endl;
        Employee::display();
    }
};

#endif
