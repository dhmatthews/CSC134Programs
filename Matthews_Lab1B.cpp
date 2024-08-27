/*
Duncan Matthews
CSC134
Lab 1
*/

// INCLUDE STATEMENTS
#include <iostream>
#include <fstream>
using namespace std;




int main() {
    // STATEMENTS FOR INPUTS AND VARIABLES

    int number_wins = 0;
    int number_ties = 0;
    int number_losses = 0;
    int total_points = 0;

    cout << endl;
    cout << "Enter the number of wins: ";
    cin >> number_wins;
    cout << "Enter the number of ties: ";
    cin >> number_ties;
    cout << "Enter the number of losses: ";
    cin >> number_losses;
    cout << endl;

    
    // FUNCTION STATEMENTS FOR EQUATION

    total_points = (number_wins * 2) + (number_ties * 1) - (number_losses * 1);

    // OUTPUT STATEMENTS

    cout << "Number of wins: " << number_wins << endl;
    cout << "Number of ties: " << number_ties << endl;
    cout << "Number of losses: " << number_losses << endl;
    cout << "Total points: " << total_points << endl;
    cout << endl;

    // FILE OUTPUT STATEMENTS
    ofstream outFile;

    outFile.open("lab1exam.txt", ios::app);

    outFile << "Number of wins: " << number_wins << endl;
    outFile << "Number of ties: " << number_ties << endl;
    outFile << "Number of losses: " << number_losses << endl;
    outFile << "Total points: " << total_points << endl;

    outFile.close();

}