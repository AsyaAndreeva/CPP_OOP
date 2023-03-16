
#ifndef BUILDINGS_BUILDINGS_H
#define BUILDINGS_BUILDINGS_H

#include<iostream>
#include <string>

using std::string;
using std::istream;
using std::ostream;

class Buildings {

public:
    Buildings();
    Buildings(string address, int PlannedFlats, int PlannedEnters, int BuildFlats, int BuildEnters);


    string GetAddress();
    int GetPlannedFlats() const;
    int GetPlannedEnters() const;
    int GetBuildFlats() const;
    int GetBuildEnters() const;

    void SetAddress(string address);
    void SetPlannedFlats(int PlannedFlats);
    void SetPlannedEnters(int PlannedEnters);
    void SetBuildFlats(int BuildFlats);
    void SetBuildEnters(int BuildEnters);


    Buildings operator+(int number);
    friend Buildings operator+(int number, Buildings& buildings);

    friend istream &operator>>(istream &input, Buildings& building);
    friend ostream &operator<<(ostream &output, Buildings& building);

private:

    string address;
    int PlannedFlats{};
    int PlannedEnters{};
    int BuildFlats{};
    int BuildEnters{};

};


#endif //BUILDINGS_BUILDINGS_H
