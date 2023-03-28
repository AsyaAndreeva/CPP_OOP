
#ifndef MANAGER_MANAGER_H
#define MANAGER_MANAGER_H

#include "Employee.h"

class Manager : public Employee{
public:

    Manager();
    Manager(string name, double salary, double yearsOfWork, string department);

    void PrintInfo();
private:
    string department;
};


#endif //MANAGER_MANAGER_H
