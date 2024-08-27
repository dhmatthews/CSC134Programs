/*
Duncan Matthews
CSC134
Midterm
*/

// INCLUDE STATEMENTS
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//define functions
void getNameAndHours(string& sFullName, string& sLastName, double& dTimePark);
bool isCommercial();
double calcCharges(double dTimeParkCalc);

int main(){

    // call getnameandhours, call iscommercial, call calccharges
    // check if 24hr total is over 60, change to 60 if it is.
    // Output to file named report.txt will have 4 columns (customer, hours, charge, commercial)
    string sFirstName, sLastName;
    double dTimePark;
    double dSubTotalCost;
    double dTotalCost;
    bool bCommercial;
    int i = 0;
    string sFullName1, sFullName2, sFullName3;
    double dTotalCost1, dTotalCost2, dTotalCost3, dTimePark1, dTimePark2, dTimePark3;
    char bCommercial1, bCommercial2, bCommercial3;

    for(int i = 0 ; i < 3 ; i = i+1){
        getNameAndHours(sFirstName, sLastName, dTimePark);
        bCommercial = isCommercial();
        dSubTotalCost = calcCharges(dTimePark);
        
        // Add 10 for commercial tax
        if(bCommercial == 1){
            dTotalCost = dSubTotalCost + 10.00;
        }
        else{
            dTotalCost = dSubTotalCost;
        }

        // Ensure not over $60
        if(dTotalCost >= 60.00){
            dTotalCost = 60.00;
        }
        else{
            dTotalCost = dTotalCost;
        }

        // Assign to person 1/2/3
        if(i==0){
            sFullName1 = sFirstName + " " + sLastName;
            dTotalCost1 = dTotalCost;
            dTimePark1 = dTimePark;
            if(bCommercial == 1){
                bCommercial1 = 'Y';
            }
            else{
                bCommercial1 = 'N';
            }
        }
        else if(i==1){
            sFullName2 = sFirstName + " " + sLastName;
            dTotalCost2 = dTotalCost;
            dTimePark2 = dTimePark;
            if(bCommercial == 1){
                bCommercial2 = 'Y';
            }
            else{
                bCommercial2 = 'N';
            }
        }
        else{
            sFullName3 = sFirstName + " " + sLastName;
            dTotalCost3 = dTotalCost;
            dTimePark3 = dTimePark;
            if(bCommercial == 1){
                bCommercial3 = 'Y';
            }
            else{
                bCommercial3 = 'N';
            }
        }
    }// end of for loop

    // Output to file
    ofstream outFile;

    outFile.open("report.txt");

    outFile << setprecision(2) << fixed << showpoint;
    outFile << std::setw(30) << std::left << "Customer" << std::setw(10) << std::right << "Hours" << std::setw(10) << std::right << "Charge" << std::setw(10) << std::right << "Commercial\n";
    outFile << std::setw(30) << std::left << sFullName1 << std::setw(10) << std::right << dTimePark1 << std::setw(10) << std::right << dTotalCost1 << std::setw(10) << std::right << bCommercial1 << "\n";
    outFile << std::setw(30) << std::left << sFullName2 << std::setw(10) << std::right << dTimePark2 << std::setw(10) << std::right << dTotalCost2 << std::setw(10) << std::right << bCommercial2 << "\n";
    outFile << std::setw(30) << std::left << sFullName3 << std::setw(10) << std::right << dTimePark3 << std::setw(10) << std::right << dTotalCost3 << std::setw(10) << std::right << bCommercial3 << "\n";

    outFile.close();


} // END OF MAIN

void getNameAndHours(string& sFirstName, string& sLastName, double& dTimePark){

    // Ask for full name and #hours parked. Will be passby for three variables (string and double)
    cout << "Enter Customer Name: ";
    cin >> sFirstName >> sLastName;
    cout << endl;
    cout << "Enter Hours Parked: ";
    cin >> dTimePark;
    cout << endl;

} // END OF GETNAMEANDHOURS

bool isCommercial(){

    // Ask if car is commercial, return true/false bool value
    char bCommercialyn;
    bool bCommercialtf;
    cout << "Is vehical commercial? (Y / N): ";
    cin >> bCommercialyn;
    cout << endl;
    if(bCommercialyn == 'Y'){
        bCommercialtf = 1;
    }
    else{
        bCommercialtf = 0;
    }
    return bCommercialtf;

} // END OF ISCOMMERCIAL

double calcCharges(double dTimeParkCalc){

    // Calculates charge, returns double, 2 decimal place charge to main;
    double dCalcCharge;
    if(dTimeParkCalc < 4.00)
        dCalcCharge = 8.00;
    else{
        dCalcCharge = 8.00 + ((dTimeParkCalc - 4.00) * 2.50);
    }
    return dCalcCharge;

} // END OF CALCCHARGES