#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    int id;
    string name;
    string password;

public:
    Person(int id, string name, string password);

    void setId(int id);
    void setName(string name);
    void setPassword(string password);

    int getId();
    string getName();
    string getPassword();
    void display();
};

#endif
