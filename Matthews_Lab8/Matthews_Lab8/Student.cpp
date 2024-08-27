
#include "ClassRoom.h"
#include "Student.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;


//CONSTRUCTORS
Student::Student() {
	sFirstName = "";
	sLastName = "";
	sStudID = "";
	dFirstGPA = 0.0;
	dSecondGPA = 0.0;
}

Student::Student(string _sFirstName, string _sLastName, string _sStudID, double _dFirstGPA, double _dSecondGPA) {
	sFirstName = _sFirstName;
	sLastName = _sLastName;
	sStudID = _sStudID;
	dFirstGPA = _dFirstGPA;
	dSecondGPA = _dSecondGPA;
}

//SETTERS GETTERS

void Student::setFirstName(string _sFirstName) {
	sFirstName = _sFirstName;
}

string Student::getFirstName() {
	return sFirstName;
}

void Student::setLastName(string _sLastName) {
	sLastName = _sLastName;
}

string Student::getLastName() {
	return sLastName;
}

void Student::setStudID(string _sStudID) {
	sStudID = _sStudID;
}

string Student::getStudID() {
	return sStudID;
}

void Student::setFirstGPA(double _dFirstGPA) {
	dFirstGPA = _dFirstGPA;
}

double Student::getFirstGPA() {
	return dFirstGPA;
}

void Student::setSecondGPA(double _dSecondGPA) {
	dSecondGPA = _dSecondGPA;
}

double Student::getSecondGPA() {
	return dSecondGPA;
}

//Other Functions
double Student::calcAvgGpa() {
	double AvgGPA;
	AvgGPA = ((dFirstGPA + dSecondGPA) / 2);
	return AvgGPA;
}

void Student::displayStudent(double _AvgGPA) {
	double AverageGpa;
	AverageGpa = _AvgGPA;
	cout << left << setw(15) << setfill(' ') << sLastName << setw(15) << sFirstName
		<< setw(17) << sStudID << setw(10) << right << setprecision(1) << fixed << dFirstGPA << setw(10)
		<< dSecondGPA << setw(15) << AverageGpa << endl;
}