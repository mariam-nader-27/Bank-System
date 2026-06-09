#ifndef VALIDATION_H_INCLUDED
#define VALIDATION_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Validation
{
public:
    static bool ValidName(string name)
    {
        if (name.length() < 3 || name.length() > 20)
        {
            return false;
        }
        return true;
    }

    static bool ValidPassword(string password)
    {
        if (password.length() >= 8 && password.length() <= 20)
        {
            return true;
        }
        return false;
    }

    static bool ValidBalance(double balance)
    {
        if (balance >= 1500)
        {
            return true;
        }
        return false;
    }

    static bool ValidSalary(double salary)
    {
        if (salary >= 5000)
        {
            return true;
        }
        return false;
    }
};
#endif
