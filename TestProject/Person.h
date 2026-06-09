#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include "Validation.h"

using namespace std;

class Person
{
protected:
    int id;
    string name;
    string password;

public:
    Person(int id, string name, string password)
    {
        this->id = id;
        setName(name);
        setPassword(password);
    }

    void setName(string name)
    {
        if (Validation::ValidName(name))
        {
            this->name = name;
        }
        else
        {
            cout << "The name must be 3-20 alphabetic characters." << endl;
        }
    }

    void setPassword(string password) {
        if (Validation::ValidPassword(password)) {
            this->password = password;
        } else {
            cout << "The Password Must be 8-20 characters." << endl;
        }
    }

    int getId()
    {
         return id;
    }
    string getName()
    {
        return name;
    }
    string getPassword()
    {
        return password;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

#endif
