
// Data member: ID of student, count of exams taken, array of exam obj with max of 5
// member functions: constructor with parameter (ID), creatobj function that takes an exam obj and returns a bool value (=5 exams returns true, else false), display average function to calc average exams and return average


#ifndef OVERALL_H
#define OVERALL_H
#include <string>
#include "Exam.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class Overall
{
public:
	//constructors
	Overall();
	Overall(string _sStudID);

	//setters/getters
	void setcYN(char _cYN);
	char getcYN();

	void setStudID(string _sStudID);
	string getStudID();

	void setExamsTaken(int _n);
	int getExamsTaken();

	void setExamArray(Exam examArray[], int _n);
	Exam getExamArray();

	//functions
	void createExamArray();
	double calcAverage();
	bool entExam();
	bool numExam();

private:
	//data members
	int i=0;
	char cYN;
	int n=0;
	string sStudID;
	Exam examArray[5];
};

#endif