
#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Client : public Person{
private:
	double balance;
public:
	Client(int id, string name, string password, double balance);

	void setName(string name);
	void setPassword(string password);
	void setBalance(double balance);

	string getName();
	string getPassword();
	double getBalance();

	void deposit(double amount);
	void withdraw(double amount);
	void transferTo(double amount, Client& recipient);

	void checkBalance();

	void display();

};

#endif