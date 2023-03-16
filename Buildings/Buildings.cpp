
#include "Buildings.h"
#include<string>
#include<iostream>
#include <utility>

using std::string;
using std::istream;
using std::ostream;

Buildings::Buildings(){
    address = "";
    PlannedEnters=0;
    PlannedFlats=0;
    BuildEnters=0;
    BuildFlats=0;
}

Buildings::Buildings(string address, int PlannedFlats, int PlannedEnters, int BuildFlats, int BuildEnters) {
    this-> SetAddress(std::move(address));
    this-> SetPlannedFlats(PlannedFlats);
    this->SetPlannedEnters(PlannedEnters);
    this->SetBuildFlats(BuildFlats);
    this->SetBuildEnters(BuildEnters);
}

string Buildings::GetAddress() {
    return address;
}

int Buildings::GetPlannedFlats() const {
    return PlannedFlats;
}

int Buildings::GetPlannedEnters() const {
    return PlannedEnters;
}

int Buildings::GetBuildFlats() const {
 return BuildFlats;
}

int Buildings::GetBuildEnters() const {
    return BuildEnters;
}

void Buildings::SetAddress(string address){
    this->address = std::move(address);
}

void Buildings::SetPlannedFlats(int PlannedFlats){
    this->PlannedFlats = PlannedFlats;
}


void Buildings::SetPlannedEnters(int PlannedEnters){
    this->PlannedEnters = PlannedEnters;
}

void Buildings::SetBuildFlats(int BuildFlats){
    this->BuildFlats = BuildFlats;
}

void Buildings::SetBuildEnters(int BuildEnters){
    this->BuildEnters = BuildEnters;
}

Buildings Buildings::operator+(int flats){
    BuildFlats = BuildFlats + flats;
    return Buildings(address, PlannedFlats, PlannedEnters, BuildFlats, BuildEnters);
}

Buildings Buildings::operator+(int enters, Buildings& buildings){
    BuildEnters = BuildEnters + enters;
    return Buildings(address, PlannedFlats, PlannedEnters, BuildFlats, BuildEnters);
}

istream &operator>>(istream &input, Buildings& building){

    input>>building.address
    >>building.PlannedFlats
    >>building.PlannedEnters
    >>building.BuildFlats
    >>building.BuildEnters;

    return input;

}

ostream &operator<<(ostream &output, Buildings& building){

    output<<building.GetAddress()
         <<building.GetPlannedFlats()
         <<building.GetPlannedEnters()
         <<building.GetBuildFlats()
         <<building.GetBuildEnters();

    return output;

}


