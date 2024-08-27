

#ifndef CLASSROOM_H
#define CLASSROOM_H

#include "Student.h"
#include<string>
using namespace std;




class ClassRoom
{
public:
	//Constructors
	ClassRoom(); //NULL
	ClassRoom(string _sClassName);

	//setters getters
	void setNumStu(int _iNumStu);
	int getNumStu();

	void setStudentArray(Student students[], int _iNumStu);
	Student getStudentArray();

	void readAndCreateStudentArray(); //will call other get functions to fill in array

	void displayAllStudents(); //will output header and then loop call the other displayStudent function for each student

	double calcStudentAvg(); //will use array of averages to calc total average and return value

	int getNumStudent(); //will return the number of student objects


private:
	int iNumStu;
	int i;
	string sClassName;
	Student students[10];

};

#endif