

#include "ClassRoom.h"
#include "Student.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;



//Constructors
ClassRoom::ClassRoom() {
	iNumStu = 0;
}

ClassRoom::ClassRoom(string _sClassName) {
	sClassName = _sClassName;
	iNumStu = 0;
}

//Setters Getters
void ClassRoom::setNumStu(int _iNumStu) {
	iNumStu = _iNumStu;
}
int ClassRoom::getNumStu() {
	return iNumStu;
}
void ClassRoom::setStudentArray(Student students[], int _iNumStu) {
	students[i] = students[_iNumStu];
}
Student ClassRoom::getStudentArray() {
	return students[i];
}

void ClassRoom::readAndCreateStudentArray() {
	ifstream open;
	string lname, fname, sID;
	double gpa1, gpa2;
	//iNumStu = 0;
	open.open("studentInfo.txt");
	
	if (!open) {
		cout << "No file found!" << endl;
	}

	for (i = 0; i < 10; i++) {
		open >> lname >> fname >> sID >> gpa1 >> gpa2;
		Student StudentObj(lname, fname, sID, gpa1, gpa2);
		students[i] = StudentObj;
		iNumStu++;
	}
	open.close();
}

void ClassRoom::displayAllStudents() {
	
	cout << setw(15) << left << "Last Name" << setw(15) << "First Name" << setw(17) << "Student ID" << setw(10) << right << "GPA 1" << setw(10) << "GPA 2" << setw(15) << "Average GPA" << endl;
	cout << std::setw(90) << std::setfill('-') << "-" << endl;

	for (i = 0; i < iNumStu; i++) {
		double StudentAverage;
		StudentAverage = students[i].calcAvgGpa();
		students[i].displayStudent(StudentAverage);
	}

}

int ClassRoom::getNumStudent() {
	return iNumStu;
}

double ClassRoom::calcStudentAvg() {
	i = 0;
	double total = 0;
	for (i = 0; i < iNumStu; i++) {
		total = total + students[i].calcAvgGpa();
	}
	total = (total / iNumStu);
	return total;
}