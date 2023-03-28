#include "Employee.h"
#include <string>

using std::string;

Employee::Employee() {
    name = "";
    salary = 0.0;
    yearsOfWork = 0;
}

Employee::Employee(string name, double salary, double yearsOfWork) {

    name = std::move(name);
    salary = salary;
    yearsOfWork = yearsOfWork;

}