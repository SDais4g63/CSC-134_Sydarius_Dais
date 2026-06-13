/*
@author Sydarius Dais
@date 2026-06-12
@purpose This program calculates distance traveled and velocity using x = v * t
*/

//include the required directives/libraries for this program
#include <iostream>
using namespace std;

int main()
{
    //declare the variables for this program
    double x, v, t;

    //calculate the distance traveled when velocity is 80 mph and time is 2 hours
    v = 80;
    t = 2;
    x = v * t;

    //print the distance traveled to the user
    cout << "Distance Traveled" << endl;
    cout << "Velocity: " << v << " mph" << endl;
    cout << "Time: " << t << " hours" << endl;
    cout << "Distance: " << x << " miles" << endl;
    cout << endl;

    //calculate the velocity when distance is 400 miles and time is 4 hours
    x = 400;
    t = 4;
    v = x / t;

    //print the velocity to the user
    cout << "Velocity Calculation" << endl;
    cout << "Distance: " << x << " miles" << endl;
    cout << "Time: " << t << " hours" << endl;
    cout << "Velocity: " << v << " mph" << endl;

    return 0;
}
