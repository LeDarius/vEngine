#pragma once
#include <iostream>
using std::string;

class Engine
{
    private:
        int NumofCylinder;
        int HorsePower;
        double AvgMpg;

    public:
        Engine(int, int, double);
        Engine();
        void setEngine(int, int, double);
        void printEngine();
        int getCylinder();
        int getHorsePower();
        double getAvgMpg();
};