

#ifndef STUDENT_H
#define STUDENT_H


#include<string>
using namespace std;




class Student
{
public:
	//CONSTRUCTORs
	Student(); //NULL
	Student(string _sLastName, string _sFirstName, string _sStudID, double _dFirstGPA, double _dSecondGPA);

	//SETTERS GETTERS
	void setLastName(string _sLastName);
	string getLastName();

	void setFirstName(string _sFirstName);
	string getFirstName();

	void setStudID(string _sStudID);
	string getStudID();

	void setFirstGPA(double _dFirstGPA);
	double getFirstGPA();

	void setSecondGPA(double _dSecondGPA);
	double getSecondGPA();

	//Other Functions
	double calcAvgGpa();
	void displayStudent(double _AvgGPA);


private:
	//DATA MEMBERS
	string sLastName;
	string sFirstName;
	string sStudID;
	double dFirstGPA;
	double dSecondGPA;
};

#endif