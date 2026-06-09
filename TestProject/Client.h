#ifndef CLIENT_H
#define CLIENT_H
#include "Person.h"

class Client : public Person
{
protected:
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
            cout << "Minimum balance must be at least 1500." << endl;
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

    void transferTo(double amount, Client& recipient)
    {
        if (amount <= 0)
        {
            cout << "Invalid Amount" << endl;
            return;
        }

        if (balance - amount >= 1500)
        {
            balance -= amount;
            recipient.balance += amount;
        }
        else
        {
            cout << "Transfer Failed" << endl;
        }
    }

    void checkBalance()
    {
        cout << "Balance: " << balance << endl;
    }
    void withdraw(double amount)
    {
        if (balance - amount >= 1500)
        {
            balance -= amount;
            cout << "Withdrew: " << amount << ". New Balance: " << balance << endl;
        }
        else
        {
            cout << "Minimum balance of 1500 must be maintained." << endl;
        }
    }

    void display() {
        Person::display();
        cout << "Balance: " << balance << endl;
    }
};

#endif
