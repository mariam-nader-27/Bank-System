#include "Client.h"


Client::Client(int id, string name, string password, double balance) :
	Person(id, name, password),  balance(balance)
{
}

void Client::setBalance(double balance) {
	this->balance = balance;
}

double Client::getBalance() {
	return balance;
}

void Client::deposit(double amount) {
	balance = balance + amount;
}
void Client::withdraw(double amount) {
	if(amount > balance)
	{
		cout << "there is not enough balance for this operation ! " << endl;
		return;
	}
	balance = balance - amount;
}
void Client::transferTo(double amount, Client& recipient) {
	if (amount > balance)
	{
		cout << "there is not enough balance for this transaction ! " << endl;
		return;
	}
	recipient.deposit(amount);
}

void Client::checkBalance() {
	cout << getBalance();
}

void Client::display() {
	Person::display();
	cout << "Balance: " << balance << endl;
}
