#include "Manager.h"
#include <iostream>
using std::cout;
using std::endl;

Manager::Manager(){
    department = "";
}

Manager::Manager(string name, double salary, double yearsOfWork, string department): Employee(std::move(name), salary, yearsOfWork) {
    department = std::move(department);
}

void Manager::PrintInfo() {
    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;
    cout<<"Years of Work: "<<yearsOfWork<<endl;
    cout<<"Department: "<<department<<endl;
}