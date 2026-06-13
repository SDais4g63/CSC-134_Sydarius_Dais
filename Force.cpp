/*
@author Sydarius Dais
@date 2026-06-12
@purpose This program calculates force using the equation F = m * a
*/

//include the required directives/libraries for this program
#include <iostream>
using namespace std;

int main()
{
    //declare the variables for this program
    double force, mass, acceleration;

    //assign the mass and acceleration values
    mass = 10;
    acceleration = 9.81;

    //calculate the force using the equation F = m * a
    force = mass * acceleration;

    //print the result to the user
    cout << "Force Calculation" << endl;
    cout << "Mass: " << mass << " kg" << endl;
    cout << "Acceleration: " << acceleration << " m/s^2" << endl;
    cout << "Force: " << force << " newtons" << endl;

    return 0;
}