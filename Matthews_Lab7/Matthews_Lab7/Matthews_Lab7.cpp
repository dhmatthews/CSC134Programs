/*
Duncan Matthews
CSC134
Lab 7
*/

// INCLUDE STATEMENTS
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;


//STRUCTURE
struct Superhero {
	string name;
	double strength;
	double intelligence;
	double speed;
	double durability;
	double fighting;
	string superpower = "";
};

//FUNCTION FOR SUPERPOWER
string getSuperPower(Superhero newSuperhero);

int main() {

	ifstream heroFile;
	Superhero hero[6];
	int i = 0;

	heroFile.open("Superheros.txt");

	if (!heroFile) {
		cout << "No File Found!" << endl;
		return 1;
	}

	for (i = 0; i < 6; i++) {
		heroFile >> hero[i].name >> hero[i].strength >> hero[i].intelligence >> hero[i].speed >> hero[i].durability >> hero[i].fighting;
		hero[i].superpower = getSuperPower(hero[i]);
	}

	heroFile.close();
	i = 0;
	
	for (i = 0; i < 6; i++) {
		cout << hero[i].name << "'s greatest power is " << hero[i].superpower << endl;
	}

}//END OF MAIN

string getSuperPower(Superhero newSuperhero) {

	if (newSuperhero.strength > newSuperhero.intelligence) {
		if (newSuperhero.strength > newSuperhero.speed) {
			if (newSuperhero.strength > newSuperhero.durability) {
				if (newSuperhero.strength > newSuperhero.fighting) {
					newSuperhero.superpower = "Strength";
					return newSuperhero.superpower;
				}
				else {
					newSuperhero.superpower = "Fighting";
					return newSuperhero.superpower;
				}
			}
			else if(newSuperhero.durability > newSuperhero.fighting){
				newSuperhero.superpower = "Durability";
				return newSuperhero.superpower;
			}
			else {
				newSuperhero.superpower = "Fighting";
				return newSuperhero.superpower;
			}
		}
		else if (newSuperhero.speed > newSuperhero.durability) {
			if (newSuperhero.speed > newSuperhero.fighting) {
				newSuperhero.superpower = "Speed";
				return newSuperhero.superpower;
			}
			else {
				newSuperhero.superpower = "Fighting";
				return newSuperhero.superpower;
			}
		}
		else if (newSuperhero.durability > newSuperhero.fighting) {
			newSuperhero.superpower = "Durability";
			return newSuperhero.superpower;
		}
		else {
			newSuperhero.superpower = "Fighting";
			return newSuperhero.superpower;
		}
	}
	else if(newSuperhero.intelligence > newSuperhero.speed) {
		if (newSuperhero.intelligence > newSuperhero.durability) {
			if (newSuperhero.intelligence > newSuperhero.fighting) {
				newSuperhero.superpower = "Intelligence";
				return newSuperhero.superpower;
			}
			else {
				newSuperhero.superpower = "Fighting";
				return newSuperhero.superpower;
			}
		}
		else if (newSuperhero.durability > newSuperhero.fighting) {
			newSuperhero.superpower = "Durability";
			return newSuperhero.superpower;
		}
		else {
			newSuperhero.superpower = "Fighting";
			return newSuperhero.superpower;
		}
	}
	else if (newSuperhero.speed > newSuperhero.durability) {
		if (newSuperhero.speed > newSuperhero.fighting) {
			newSuperhero.superpower = "Speed";
			return newSuperhero.superpower;
		}
		else {
			newSuperhero.superpower = "Fighting";
			return newSuperhero.superpower;
		}
	}
	else if (newSuperhero.durability > newSuperhero.fighting) {
		newSuperhero.superpower = "Durability";
		return newSuperhero.superpower;
	}
	else {
		newSuperhero.superpower = "Fighting";
		return newSuperhero.superpower;
	}
}//END OF GETSUPERPOWER