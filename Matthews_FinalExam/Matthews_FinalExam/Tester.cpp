/*
Duncan Matthews
CSC134
Final Exam part 2
*/

// create an overall object(pass in any student ID), define a sentinel while loop (ask for y/n, then exam name, and score)(end if n or 5 total)(create exam obj using input name and score, call the overall createobj function to add exam obj to the examArray obj
// and an if statement checking for 5 exam names and scores, if true exit the loop), after user enters all exam objs, call overall DisplayAverage function to calculate and return the average and then display the average on screen

#include "Exam.h"
#include "Overall.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	bool numExam;
	bool YN;
	double average;
	Overall StuObj("Student");
	YN = StuObj.entExam();
	numExam = StuObj.numExam();
	while (numExam == true && YN == false) { //exit the loop if either is wrong
		StuObj.createExamArray();
		numExam = StuObj.numExam();
		YN = StuObj.entExam();
	}
	if (numExam == true) { //less than 5 classes entered
		cout << endl;
		average = StuObj.calcAverage();
	}
	else { //5 classes entered
		cout << endl;
		cout << "You have your 5 exam scores entered. Now exiting program." << endl;
		average = StuObj.calcAverage();
	}
	cout << average;
}