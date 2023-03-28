#ifndef MANAGER_EMPLOYEE_H
#define MANAGER_EMPLOYEE_H

#include<string>

using std::string;

class Employee {

public:

    Employee();
    Employee(string name, double salary, double yearsOfWork);

    string GetName();
    double GetSalary();
    double GetYearsOfWork();

protected:

    string name;
    double salary;
    double yearsOfWork;

};


#endif //MANAGER_EMPLOYEE_H
