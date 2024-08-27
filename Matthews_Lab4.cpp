/*
Duncan Matthews
CSC134
Lab 4
*/

// INCLUDE STATEMENTS
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

/*
FUNCTIONS RULES AND THINGS OF NOTE
main()
    should display all statistics
    will call functions and assign return values
    will output percentages to 2 decimal points

getAttemptsAndCompletions(_,_, int yards=26)
    void returning, default yardage
    ASK for number of passing attempts and completions (0-15, 16-25, >25 yards) (aka run this 3 times)
    Validate with getValidInput function

getValidInput(_,_)
    void returning, ensure data is read successfully, ENSURE ATTEMPTS>COMPLETIONS
    Prompt "Please re-enter valid values." if attempts<completions

calcPercent(_,_)
    pass in attempt and completion values for each range
    value returning function, calculates percentage (completions/attempts) % should be a double
    will need a converting statement for either the numerator or denominator for the double value (Example: double dPercent = static_cast<double>(completions)/attempts)
    count for cases that prevent division by zero
    
Important things
    Attempts and completions will be input on the same line for each ask - do in one step without endl before
    Should be 3 input steps, each step inputing both attempts and completions, then 3 output steps
    Easiest place to catch divide by Zero would be to have a check during input and label as invalid
    INPUT STATEMENTS WILL BE
        "Enter number of attempts followed by completes from # - # yards: " for >25 change to "Enter number of attempts followed by completes from more than 25 yards: "
*/


void getAttemptsAndCompletions(int n, int m, int yards=26);

void getValidInput(int& iAttempts, int& iCompletions);

double calcPercent(int iAttemptsForPercent, int iCompletionsForPercent);

int iCompletions, iAttempts, n, m;

int main() {
    double dPercent1, dPercent2, dPercent3;


// Call functions for 0-15 yards
    getAttemptsAndCompletions(0, 15);
    dPercent1 = calcPercent(iAttempts, iCompletions);

// Call functions for 16-25 yards
    getAttemptsAndCompletions(16, 25);
    dPercent2 = calcPercent(iAttempts, iCompletions);

// Call functions for >25 yards
    getAttemptsAndCompletions(26, 27);
    dPercent3 = calcPercent(iAttempts, iCompletions);
    
// Output of percentages
    cout << endl;
    cout << setprecision(2) << fixed << showpoint;
    cout << "Percentage of passing between 0 - 15 yards is " << dPercent1 << endl;
    cout << "Percentage of passing between 16 -25 yards is " << dPercent2 << endl;
    cout << "Percentage of passing more than 25 yards is " << dPercent3 << endl;


}  // END OF MAIN


void getAttemptsAndCompletions(int n, int m, int yards){
    if(m < yards){
        cout << "Enter number of attempts followed by completions from " << n << " - " << m << " yards: ";
        cin >> iAttempts >> iCompletions;
        cout << endl;
        getValidInput(iAttempts, iCompletions);
    }
    else if(m >= yards){
        cout << "Enter number of attempts followed by completions from more than 25 yards: ";
        cin >> iAttempts >> iCompletions;
        cout << endl;
        getValidInput(iAttempts, iCompletions);
    }

} // END OF GETATTEMPTSANDCOMPLETIONS


void getValidInput(int& iAttepmts, int& iCompletions){
    int i = 0;
    while (i == 0){
        if (iCompletions > iAttepmts){
            cout << "Please re-enter valid values. ";
            cin >> iAttepmts >> iCompletions;
            cout << endl;
        }
        else if (iAttepmts == 0){
            cout << "Please re-enter valid values. ";
            cin >> iAttepmts >> iCompletions;
            cout << endl;
        }
        else{
            i = i + 1;
        }
    }


} // END OF GETVALIDINPUT


double calcPercent(int iAttemptsForPercent, int iCompletionsForPercent){
    double dPercent = static_cast<double>(iCompletionsForPercent) / iAttemptsForPercent;
    return dPercent;


} // END OF CALCPERCENT
