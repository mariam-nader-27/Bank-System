#ifndef CLIENT_H
#define CLIENT_H
#include "Person.h"

class Client : public Person
{
private:
    double balance;

public:
    Client(int id, string name, string password, double balance) : Person(id, name, password)
    {
        setBalance(balance);
    }

    void setBalance(double balance)
    {
        if (Validation::ValidBalance(balance))
        {
            this->balance = balance;
        }
        else
        {
            cout << "Invalid Balance! Minimum balance must be 1500." << endl;
        }
    }

    double getBalance()
    {
         return balance;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << ". New Balance: " << balance << endl;
    }

    void withdraw(double amount)
    {
        if (balance - amount >= 1500) {
            balance -= amount;
            cout << "Withdrew: " << amount << ". New Balance: " << balance << endl;
        } else {
            cout << "Withdraw denied! Minimum balance of 1500 must be maintained." << endl;
        }
    }

    void display() {
        Person::display();
        cout << "Balance: " << balance << endl;
    }
};

#endif
