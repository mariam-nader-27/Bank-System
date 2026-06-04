#include <iostream>
using namespace std;

class Person {
protected:
    int id;
    string name;
    string password;

public:
    Person(int id, string name, string password)
    {
        this->id = id;
        this->name=name;
        this->Password=password;
    }

    void setId(int id)
    {
        this->id = id;
    }

    void setName(string name)
    {
        if (Validation::isValidName(name))
            {
            this->name = name;
            }
        else
            {
            cout << "Invalid Name! Must be between 3-20 characters"<<endl;
            }
    }

    void setPassword(string password)
    {
        if (Validation::isValidPassword(password))
            {
            this->password = password;
            }
        else
            {
            cout << "Invalid Password! Must be between 8-20 characters"<<endl;
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
        cout<< "Name: " << name << endl;
     }
};
int main()
{

    return 0;
}
