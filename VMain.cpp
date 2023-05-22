#include <iostream>
#include <conio.h>
#include "Vehicle.h"
using namespace std;

void main()
{
    Vehicle myvehicle("Toyota", "Corolla", 14, 4, 139, 36.0);

    cout << "Vehicle Make:          " << myvehicle.getMake() << endl;
    cout << "Vehicle Model:         " << myvehicle.getModel() << endl;
    cout << "Vehicle Tank Capacity: " << myvehicle.getTankcapacity() << endl;

    myvehicle.PrintEngineType();

    cout << "Vehicle Range (in miles): " << myvehicle.calculateRange() << endl << endl;

}