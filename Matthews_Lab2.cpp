/*
Duncan Matthews
CSC134
Lab 2
*/

// INCLUDE STATEMENTS
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;


int main() {

// VARIABLE DECLARATION STATEMENTS

    char cLocCode;
    string sLastName;
    int iCurSalary = 0;
    double iNewSalary = 0;

// OUTPUT AND INPUT STATEMENTS TO GET VARIABLE INPUT

    // Name input statements

    cout << "Please enter your last name: ";
    
    getline(cin, sLastName);

    // Location Code input statements
    
    cout << "Please enter your Region Code: ";
    cin >> cLocCode;

    // Current Salary input statements

    cout << "Please enter your current salary: ";
    cin >> iCurSalary;
    cout << endl;

// OUTPUT STATEMENTS FOR LAST NAME AND REGION CODE

    cout << "Employee last name: " << sLastName << endl;
    cout << "Region Code: " << cLocCode << endl;

// IF/ELSE STATEMENTS TO DETERMINE REGION LOCATION AND CALCULATE SALARY CHANGE

    if (cLocCode == 'R') {
        cout << "Region Location: RTP" << endl;
        iNewSalary = iCurSalary * 1.05;
    }
    else if (cLocCode == 'W') {
        cout << "Region Location: Western Carolina" << endl;
        iNewSalary = iCurSalary * 1.03;
    }
    else if (cLocCode == 'P') {
        cout << "Region Location: Piedmont" << endl;
        iNewSalary = iCurSalary * 1.02;
    }
    else if (cLocCode == 'B') {
        cout << "Region Location: Outer Banks" << endl;
        iNewSalary = iCurSalary * 1.03;
    }
    else if (cLocCode == 'S') {
        cout << "Region Location: Sandhills" << endl;
        iNewSalary = iCurSalary * 1.10;
    }
    else {
        cout << "Building code error" << endl;
        iNewSalary = iCurSalary;
    }
// OUTPUT NEW AND OLD SALARY

    cout << "Current Salary: " << iCurSalary << endl;
    cout << "New Salary: " << iNewSalary << endl;


} // end of Main