//exA.cpp   Rafael Moura
// Description: Write a program that takes as input the number of chirps
// in a minute and prints the current temperature.
/* 
*   steps:
*   take a input od chirps in minutes
*   and print a temperature.
*   Rules:
*   the number of inputs n divide by 4 and this is the temperature in the field
*/
#include <iostream>
using namespace std;

int CricketsPerMinute(float input) {
    // Variables
    float result;
    // Rules: a = b/4
    result = input /4;
    cout << " The Temperature in the field is " << result  << " Degrees" << endl;
}

int main(int argc, char const *argv[])
{
    // Variables 
    float chirps;
    // Data input
    cout << "How the number of Chirps per minutes: " << endl;
    if (!(cin >> chirps)) {
    cout << "You entered a non-numeric." << endl;
    return 0;
    } else
    {
        CricketsPerMinute(chirps);
    }
    
    
    return 0;
}
