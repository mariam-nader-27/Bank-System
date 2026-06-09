#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

class Employee : public Person
{
protected:
    double salary;

public:
    Employee(int id, string name, string password, double salary) : Person(id, name, password)
    {
        setSalary(salary);
    }

    void setSalary(double salary)
    {
        if (Validation::ValidSalary(salary))
        {
            this->salary = salary;
        } else {
            cout << " Minimum salary must be 5000." << endl;
        }
    }

    double getSalary() { return salary; }

    void display() {
        Person::display();
        cout << "Salary: " << salary << endl;
    }
};

#endif
