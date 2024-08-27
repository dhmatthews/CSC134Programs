#include "Exam.h"
#include "Overall.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//constructors
Exam::Exam() {
	sExamName = "";
	iExamScore = 0;
}

Exam::Exam(string _sExamName, int _iExamScore) {
	sExamName = _sExamName;
	iExamScore = _iExamScore;
}

//Setters/getters

void Exam::setExamName(string _sExamName) {
	sExamName = _sExamName;
}
string Exam::getExamName() {
	return sExamName;
}

void Exam::setExamScore(int _iExamScore) {
	iExamScore = _iExamScore;
}
int Exam::getExamScore() {
	return iExamScore;
}