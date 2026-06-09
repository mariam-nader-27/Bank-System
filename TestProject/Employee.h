
#define EMPLOYEE_H_INCLUDED
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"

class Employee : public Person
{
private:
    double salary;

public:
    Employee(int id, string name, string password, double salary);

    void setSalary(double salary);
    double getSalary();

    void display();
};

#endif // EMPLOYEE_H
