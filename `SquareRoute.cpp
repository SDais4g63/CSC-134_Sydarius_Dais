/*
@author Sydarius Dais
@date 2026-06-12
@purpose This program calculates the square root of a real number
*/

//include the required directives/libraries for this program
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //declare the variables for this program
    double num, result;

    //ask the user for a number and store it in the variable num
    cout << "Enter a real number: ";
    cin >> num;

    //calculate the square root of the number and store it in the variable result
    result = sqrt(num);

    //print the result to the user
    cout << "The square root of " << num << " is " << result << endl;

    return 0;