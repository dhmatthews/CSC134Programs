/*
Duncan Matthews
CSC134
Lab 6
*/

// INCLUDE STATEMENTS
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;


/*
If loop to confirm that file is open
while loop that gets flavor [i] for string array
	while loop that gets scores [j] for double array
use scores to make while loop to get averages for each flavor and store in double array

cout flavor, 5 ratings, average
calc and display the lowest and highest average rating flavor
		void getHighLowRatings(double avgRatings[], string flavors[], int index);
*/

//function prototype
void getHighLowRatings(double avgRatings[], string flavors[], int index);


int main() {

	ifstream ice;
	string flavors[10];
	double ratings[10][5];
	double avgRatings[10];
	int i = 0; // index value for row
	int j = 0; // index value for column
	//double avgRating;

	ice.open("flavors.txt");
	
	if (!ice) {
		cout << "No File Found!" << endl;
		return 1;
	} 

	for (i = 0; i < 10; i++) {
		ice >> flavors[i];
		for (j = 0; j < 5; j++) {
			ice >> ratings[i][j];
		}
		avgRatings[i] = ((ratings[i][0] + ratings[i][1] + ratings[i][2] + ratings[i][3] + ratings[i][4]) / 5);
		j = 0;
		
	}
	i = 0;

	// Output statements
	cout << std::setw(25) << std::left << "Flavor" << std::setw(10) << std::right << "Rating 1" << std::setw(10) << std::right << "Rating 2" << std::setw(10) << std::right << "Rating 3" << std::setw(10) << std::right << "Rating 4" << std::setw(10) << std::right << "Rating 5" << std::setw(17) << std::right << "Average Rating" << endl;
	cout << std::setw(100) << std::setfill('-') << "-" << endl;
	
	for (i = 0; i < 10; i++) {
		cout << std::setw(25) << std::setfill(' ') << std::left << flavors[i];
		for (j = 0; j < 5; j++) {
			cout << std::setw(10) << std::right << ratings[i][j];
		}
		j = 0;
		cout << std::setw(17) << std::right << avgRatings[i] << endl;
	}
	i = 0;
	cout << endl;
	cout << endl;

	

	
	// Call High / Low Function
	getHighLowRatings(avgRatings, flavors, i);


} // END OF MAIN

void getHighLowRatings(double avgRatings[], string flavors[], int i) {
	int c;
	double hRating = 0;
	double lRating = 10;
	string hFlavor, lFlavor;

	//for loop finds highest
	for (i = 0; i < 10; i++) {
		if (avgRatings[i] > hRating) {
			hRating = avgRatings[i];
			hFlavor = flavors[i];
		}
	}
	i = 0;

	//for loop finds lowest
	for (i = 0; i < 10; i++) {
		if (avgRatings[i] < lRating) {
			lRating = avgRatings[i];
			lFlavor = flavors[i];
		}
	}
	i = 0;

	//output highest and lowest
	cout << "The flavor with the highest average rating: " << hFlavor << " with a rating of " << hRating << "." << endl;
	cout << "The flavor with the lowest average rating: " << lFlavor << " with a rating of " << lRating << "." << endl;


} // END OF GETHIGHLOWRATINGS