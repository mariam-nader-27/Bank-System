#include "Person.h"
#include "Validation.h"

Person::Person(int id, string name, string password)
{
    this->id = id;
    this->name = name;
    this->password = password;
}

void Person::setId(int id)
{
    this->id = id;
}

void Person::setName(string name)
{
    if (Validation::ValidName(name))
        {
        this->name = name;
    }
    else
    {
        cout << "Invalid Name! Must be between 3-20 characters" << endl;
    }
}

void Person::setPassword(string passwor)
{
    if (Validation::ValidPassword(password))
    {
        this->password = password;
    }
    else
    {
        cout << "Invalid Password! Must be between 8-20 characters" << endl;
    }
}

int Person::getId()
{
    return id;
}

string Person::getName()
{
    return name;
}

string Person::getPassword()
{
    return password;
}

void Person::display()
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
}
