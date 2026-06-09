#include "Admin.h"
Admin::Admin(int id, string name, string password, double salary): Employee(id, name, password, salary)
{
}
void Admin::display() {
    cout << "Admin Data :" << endl;
    Employee::display();
}
