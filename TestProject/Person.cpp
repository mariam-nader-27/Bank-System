#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(int id, string name, string password) {
    this->id = id;
    this->name = name;
    this->password = password;
}

void Person::setId(int id) {
    this->id = id;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::setPassword(string password) {
    this->password = password;
}

int Person::getId() {
    return id;
}

string Person::getName() {
    return name;
}

string Person::getPassword() {
    return password;
}

void Person::display() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
}
