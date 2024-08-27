/*
Duncan Matthews
CSC134
Lab 8
*/

// INCLUDE STATEMENTS
#include "ClassRoom.h"
#include "Student.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

	ClassRoom ClassObj("CSC-134");
	ClassObj.readAndCreateStudentArray();
	ClassObj.displayAllStudents();

	cout << endl;
	cout << "The average score of all students is: " << setprecision(1) << ClassObj.calcStudentAvg() << endl;
	cout << endl;
	cout << "Total students in this class: " << ClassObj.getNumStudent() << endl;

}  //END OF MAIN