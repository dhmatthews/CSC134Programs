/*
Duncan Matthews
CSC134
Lab 3
*/

// INCLUDE STATEMENTS
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;


int main() {

//VARIABLE DECLARATION
    int iOrderChoice = 0;
    int iOrderAmount = 0;
    float fOrderCost = 0;
    float fOrderSubtotal = 0;
    float fOrderTax = 0;
    float fOrderTotal = 0;



    

    //Loop for order
    while (iOrderChoice != -1) {
        //Initial output statements repeated after each order taken
        cout << endl;
        cout << "1) Meatball Sub [Price: $6.99]" << endl;
        cout << "2) Italian Sub [Price: $9.99]" << endl;
        cout << "3) Veggie Sub [Price: $5.99]" << endl;
        cout << "4) Special Belly Buster Sub [Price: $12.99]" << endl;
        cout << "Please enter your order number (1/2/3/4) or enter -1 to calculate total: ";

        //New order start
        cin >> iOrderChoice;
        
        //Meatball sub 6.99
        if (iOrderChoice == 1) {
            cout << endl;
            cout << "How many?: ";
            cin >> iOrderAmount;
            cout << endl;
            fOrderCost = 6.99 * iOrderAmount;
            fOrderSubtotal = fOrderSubtotal + fOrderCost;
        }
        //Italian sub 9.99
        else if (iOrderChoice == 2){
            cout << endl;
            cout << "How many?: ";
            cin >> iOrderAmount;
            cout << endl;
            fOrderCost = 9.99 * iOrderAmount;
            fOrderSubtotal = fOrderSubtotal + fOrderCost;
        }

        //Veggie sub 5.99
        else if (iOrderChoice == 3){
            cout << endl;
            cout << "How many?: ";
            cin >> iOrderAmount;
            cout << endl;
            fOrderCost = 5.99 * iOrderAmount;
            fOrderSubtotal = fOrderSubtotal + fOrderCost;
        }

        //Special sub 12.99
        else if (iOrderChoice == 4){
            cout << endl;
            cout << "How many?: ";
            cin >> iOrderAmount;
            cout << endl;
            fOrderCost = 12.99 * iOrderAmount;
            fOrderSubtotal = fOrderSubtotal + fOrderCost;
        }


    } //end while loop

    //TOTAL CALCULATION tax = 0.06
    //output subtotal
    cout << endl;
    cout << "Subtotal: $" << fOrderSubtotal << endl;

    //calc and output tax and showpoint
    fOrderTax = fOrderSubtotal * 0.06;
    cout << setprecision(2) << fixed << showpoint;
    cout << "Tax: $" << fOrderTax << endl;

    //calc and output total
    fOrderTotal = fOrderSubtotal + fOrderTax;
    cout << "Total: $" << fOrderTotal << endl;
    cout << endl;

} //End of main