#include <iostream>
using std::string;
using namespace std;
#include "VEngine.h"

Engine::Engine(int c, int hp, double am)
{
    NumofCylinder = c;
    HorsePower = hp;
    AvgMpg = am;
}
Engine::Engine()
{
    NumofCylinder = 4;
    HorsePower = 200;
    AvgMpg = 30.0;
}

void Engine::setEngine(int c, int hp, double am)
{
    NumofCylinder = c;
    HorsePower = hp;
    AvgMpg = am;
}
void Engine::printEngine()
{
    cout << "Number of Cylinders: " << NumofCylinder << endl;
    cout << "Horse Power: " << HorsePower << endl;
    cout << "Average Miles / Gal: " << AvgMpg << endl;
}
int Engine::getCylinder()
{
    return NumofCylinder;
}
int Engine::getHorsePower()
{
    return HorsePower;
}
double Engine::getAvgMpg()
{
    return AvgMpg;
}