#include "Executive.h"
#include <iostream>
Executive::Executive():Manager() {

}

Executive::Executive(string name, double salary, double yearsOfWork, string department) : Manager(std::move(name), salary, yearsOfWork, std::move(department)) {

}

void Executive::PrintExecutiveInfo(){
    PrintInfo();
    std::cout<<"Executive"<<std::endl;
}
