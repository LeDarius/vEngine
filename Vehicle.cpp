#include <iostream>
using std::string;
using namespace std;
#include "Vehicle.h"

Vehicle::Vehicle(string mk, string md, int tc, int ecyl, int ehp, double eam)
{
    make = mk;
    model = md;
    tankcapacity = tc;
    EngineType.setEngine(ecyl, ehp, eam);
}
Vehicle::~Vehicle()
{

}
void Vehicle::PrintEngineType()
{
    cout << "Engine Data " << endl;
    EngineType.printEngine();
    cout << endl << endl;
}
string Vehicle::getMake()
{
    return make;
}
string Vehicle::getModel()
{
    return model;
}
int Vehicle::getTankcapacity()
{
    return tankcapacity;
}
double Vehicle::calculateRange()
{
    return (double) getTankcapacity() * EngineType.getAvgMpg();
}