#include "Overall.h"
#include "Exam.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//constuctors
Overall::Overall() {
	n = 0;
	i = 0;
	cYN = ' ';
}
Overall::Overall(string _sStudID) {
	sStudID = _sStudID;
	n = 0;
	i = 0;
	cYN = ' ';
}

//setters/getters
void Overall::setcYN(char _cYN) {
	cYN = _cYN;
}
char Overall::getcYN() {
	return cYN;
}

void Overall::setStudID(string _sStudID) {
	sStudID = _sStudID;
}
string Overall::getStudID() {
	return sStudID;
}

void Overall::setExamsTaken(int _n) {
	n = _n;
}
int Overall::getExamsTaken() {
	return n;
}

void Overall::setExamArray(Exam examArray[], int _n) {
	examArray[i] = examArray[_n];
}
Exam Overall::getExamArray() {
	return examArray[i];
}

//functions

void Overall::createExamArray() {
	string sExamNames;
	string iExamScores;
	cout << "What is the name of the exam?: ";
	cin >> sExamNames;
	cout << endl;
	cout << "What is the score of the exam?: ";
	cin >> iExamScores;
	cout << endl;
	Exam StudentObj(sExamNames, stoi(iExamScores));
	examArray[i] = StudentObj;
	n++;
	i++;
}

double Overall::calcAverage() {
	double total = 0.0;
	if (n == 0) {
		cout << "You must enter at least one exam. The average of 0 exams is: ";
		return total;
	}
	else {
		cout << "The average of the exams is: ";
		i = 0;
		for (i = 0; i < n; i++) {
			total = total + examArray[i].getExamScore();
		}
		total = (total / n);
		return total;
	}
}

bool Overall::entExam() {
	cout << "Would you like to enter an exam name and score (y/n)?: ";
	cin >> cYN;
	if (cYN == 'y') {
		return false;
	}
	else {
		return true;
	}
}

bool Overall::numExam() {
	if (n < 5) {
		return true;
	}
	else {
		return false;
	}
}