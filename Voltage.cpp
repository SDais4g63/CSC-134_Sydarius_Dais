/*
@author Sydarius Dais
@date 2026-06-12
@purpose This program calculates voltage using the equation V = I * R
*/

//include the required directives/libraries for this program
#include <iostream>
using namespace std;

int main()
{
    //declare the variables for this program
    double voltage, current, resistance;

    //assign the current and resistance values
    current = 10;
    resistance = 2;

    //calculate the voltage using the equation V = I * R
    voltage = current * resistance;

    //print the result to the user
    cout << "Voltage Calculation" << endl;
    cout << "Current: " << current << " amps" << endl;
    cout << "Resistance: " << resistance << " ohms" << endl;
    cout << "Voltage: " << voltage << " volts" << endl;

    return 0;
}