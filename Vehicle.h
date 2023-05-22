#pragma once
#include <iostream>
#include "VEngine.h"
using std::string;


class Vehicle
{
    private:
        string make;
        string model;
        int tankcapacity;

        Engine EngineType;
    public:
        Vehicle(string, string, int, int, int, double);
        void PrintEngineType();
        ~Vehicle();

        string getMake();
        string getModel();
        int getTankcapacity();
        double calculateRange();
};
