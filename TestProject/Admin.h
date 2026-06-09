#ifndef ADMIN_H_INCLUDED
#define ADMIN_H_INCLUDED

#include"Employee.h"
class Admin:public Employee
{
  public:
      Admin(int id, string name,string password,double salary);
      void display();
};

#endif
