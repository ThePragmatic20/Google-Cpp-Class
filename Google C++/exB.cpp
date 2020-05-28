// exB.cpp  Rafael Moura
// Description: exercice from google class

/* 
* Your program should ask the user for the four assignment scores, the midterm, 
* final and section grades. Then, the final score is calculated and printed. 
* To do the calculations, you average the four assignment scores together and then 
* multiply it by 0.4 (40%). You then multiply the midterm score by 0.15, the final 
* by 0.35 and the participation grade by 0.1. Then you add all the results of these 
* multiplications together.
* Use functions wherever you can in this program. You can create a function to get the input
* by passing in as a parameter the string to be displayed in an explanatory cout. Here is an example run:
*/

/* Output
*   Enter the score for the first assignment. 75
*   Enter the score for the second assignment. 85
*   Enter the score for the third assignment. 82
*   Enter the score for the fourth assignment. 94
*   Enter the score for the midterm. 81
*   Enter the score for the final. 89
*   Enter the score for the section grade. 100
*   The final grade is: 86.9
*/

#include <iostream>
using namespace std;


float getInput() 
{
    // variables
    float asgmt1;
    float asgmt2;
    float asgmt3;
    float asgmt4;
    float avr;
    float mid;
    float final;
    float section;
    float avr2;

    // data input for the assignment
    cout << "\nEnter the score for the first assignment: ";
    cin >> asgmt1;
    cout << "\nEnter the score for the second assignment: ";
    cin >> asgmt2;
    cout << "\nEnter the score for the third assignment: ";
    cin >> asgmt3;
    cout << "\nEnter the score for the fourth assignment: ";
    cin >> asgmt4;

    // sum all 4 assingments and divide by 4
    avr = (asgmt1 + asgmt2 + asgmt3 +asgmt4)/4;

    // data input for the assignment
    cout << "\nEnter the score for the midterm: ";
    cin >> mid;
    cout << "\nEnter the score for the final: ";
    cin >> final;
    cout << "\nEnter the score for the section grade: ";
    cin >> section;
    
    /* TODO: Calculations
    *   you average the four assignment scores together and then 
    *   multiply it by 0.4 (40%).
    *   You then multiply the midterm score by 0.15.
    *   he final by 0.35.
    *   participation grade by 0.1.
    */
    avr2 = ( (avr*0.40) + (mid*0.15) + (final*0.35) + (section*0.1));
    return avr2;
}


int main()
{
    float result;
    result = getInput();

    cout << "\nThe final grade is: " << result << endl;
    return 0;
}
