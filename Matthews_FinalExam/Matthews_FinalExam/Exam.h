
// Member declaration: name of exam, score of exam
// member function: default constructor, const with 2 parameters (name, score), setter/getter for name, setter/getter for score

#ifndef EXAM_H
#define EXAM_H
#include <string>
using namespace std;

class Exam
{
public:
	//constructors
	Exam();
	Exam(string _sExamName, int _iExamScore);

	//setter/getter
	void setExamName(string _sExamName);
	string getExamName();

	void setExamScore(int _iExamScore);
	int getExamScore();

private:
	//data members
	string sExamName;
	int iExamScore;

};


#endif