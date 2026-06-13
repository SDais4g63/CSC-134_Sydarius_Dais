/*
@author Sydarius Dais
@date 2024-06-01
@purpose: This program calculates the product of two numbers entered by the user and displays the result.
*/


#include <iostream>//include the iostream library for input and output

using namespace std; //use the standard namespace to avoid typing std:: before every standard library object

int main(){
    int num1 = 5; //initial first number is 5
    int num2 = 10; //initial second number is 10
    int product = num1 * num2; //calculate the product of the two numbers
    cout << "The product of " << num1 << " and " << num2 << " is " << product << endl; //display the result
    return 0;
}

