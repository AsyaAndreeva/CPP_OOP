
#ifndef MANAGER_EXECUTIVE_H
#define MANAGER_EXECUTIVE_H
#include "Manager.h"

class Executive : public Manager{
public:
    Executive();
    Executive(string name, double salary, double yearsOfWork, string department);

    void PrintExecutiveInfo();
};


#endif //MANAGER_EXECUTIVE_H
