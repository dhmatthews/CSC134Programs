/*
Duncan Matthews
CSC134
Lab 5
*/

// INCLUDE STATEMENTS
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

#include "Lab5.h"
using namespace myStd;

/*
Read from flavors.txt
cin >> Lastname >> Firstname >> vanilla >> chocolate >> strawberry >> banana >> oreo
store name values for each person
calculate each persons favorite flavor and average score
store those values
get next persons values
define customer rating: 0-2.9 bad, 3-4.9 not good, 5-6.9 ok, 7-8.9 good, 9-10 Excellent
Generate flavors_report.txt (name in First Last format. Customer rating is "x". Favorite: "y".)

FUNCTIONS
    IN HEADER FILE
        namespace icecream
            counter variables for each flavor, set to 0
            enum rating {EXCELLENT, GOOD, OK, NOT_GOOD, BAD};
            enum flavors {VANILLA, CHOCOLATE, STRAWBERRY, BANANA, OREO};
            defines the functions:
            rating getRating(double vScore, double cScore, double sScore, double bScore, double oScore);  returns avg score rating type
            flavors getFavoriteFlavor(double vScore, double cScore, double sScore, double bScore, double oScore);  returns favorite flavor
            void incrementFavoriteCounter(flavors favorite);  pass by value a flavors type, increments the favorite
            string convertRateToMessage(rating rate, flavors favFlavor);  request rating average and favFlavor, add strings together to make the output statements, return output statement

            rating getRating(double vScore, double cScore, double sScore, double bScore, double oScore);
            flavors getFavoriteFlavor(double vScore, double cScore, double sScore, double bScore, double oScore);
            void incrementFavoriteCounter(flavors favorite);
            string convertRateToMessage(rating rate, flavors favFlavor);

    IN MAIN
        call the namespace
        call the functions
        output to flavors_report.txt
*/
// GLOBAL VARIABLES

string First1, Last1, First2, Last2, First3, Last3, First4, Last4, First5, Last5, First6, Last6, First7, Last7, First8, Last8, First9, Last9, First10, Last10;
double vSco, cSco, sSco, bSco, oSco;
rating eRating;
flavors favFlavor;
string string1, string2, string3, string4, string5, string6, string7, string8, string9, string10;

int main() {

    ifstream icecream;
    icecream.open("flavors.txt");

    icecream >> Last1 >> First1 >> vSco >> cSco >> sSco >> bSco >> oSco; //First person's data
    eRating = getRating(vSco, cSco, sSco, bSco, oSco);
    favFlavor = getFavoriteFlavor(vSco, cSco, sSco, bSco, oSco);
    incrementFavoriteCounter(favFlavor);
    string1 = convertRateToMessage(eRating, favFlavor);

    icecream >> Last2 >> First2 >> vSco >> cSco >> sSco >> bSco >> oSco; //Second person's data
    eRating = getRating(vSco, cSco, sSco, bSco, oSco);
    favFlavor = getFavoriteFlavor(vSco, cSco, sSco, bSco, oSco);
    incrementFavoriteCounter(favFlavor);
    string2 = convertRateToMessage(eRating, favFlavor);

    icecream >> Last3 >> First3 >> vSco >> cSco >> sSco >> bSco >> oSco; //Third person's data
    eRating = getRating(vSco, cSco, sSco, bSco, oSco);
    favFlavor = getFavoriteFlavor(vSco, cSco, sSco, bSco, oSco);
    incrementFavoriteCounter(favFlavor);
    string3 = convertRateToMessage(eRating, favFlavor);

    icecream >> Last4 >> First4 >> vSco >> cSco >> sSco >> bSco >> oSco; //Fourth person's data
    eRating = getRating(vSco, cSco, sSco, bSco, oSco);
    favFlavor = getFavoriteFlavor(vSco, cSco, sSco, bSco, oSco);
    incrementFavoriteCounter(favFlavor);
    string4 = convertRateToMessage(eRating, favFlavor);

    icecream >> Last5 >> First5 >> vSco >> cSco >> sSco >> bSco >> oSco; //Fifth person's data
    eRating = getRating(vSco, cSco, sSco, bSco, oSco);
    favFlavor = getFavoriteFlavor(vSco, cSco, sSco, bSco, oSco);
    incrementFavoriteCounter(favFlavor);
    string5 = convertRateToMessage(eRating, favFlavor);

    icecream >> Last6 >> First6 >> vSco >> cSco >> sSco >> bSco >> oSco; //Sixth person's data
    eRating = getRating(vSco, cSco, sSco, bSco, oSco);
    favFlavor = getFavoriteFlavor(vSco, cSco, sSco, bSco, oSco);
    incrementFavoriteCounter(favFlavor);
    string6 = convertRateToMessage(eRating, favFlavor);

    icecream >> Last7 >> First7 >> vSco >> cSco >> sSco >> bSco >> oSco; //Seventh person's data
    eRating = getRating(vSco, cSco, sSco, bSco, oSco);
    favFlavor = getFavoriteFlavor(vSco, cSco, sSco, bSco, oSco);
    incrementFavoriteCounter(favFlavor);
    string7 = convertRateToMessage(eRating, favFlavor);

    icecream >> Last8 >> First8 >> vSco >> cSco >> sSco >> bSco >> oSco; //Eighth person's data
    eRating = getRating(vSco, cSco, sSco, bSco, oSco);
    favFlavor = getFavoriteFlavor(vSco, cSco, sSco, bSco, oSco);
    incrementFavoriteCounter(favFlavor);
    string8 = convertRateToMessage(eRating, favFlavor);

    icecream >> Last9 >> First9 >> vSco >> cSco >> sSco >> bSco >> oSco; //Ninth person's data
    eRating = getRating(vSco, cSco, sSco, bSco, oSco);
    favFlavor = getFavoriteFlavor(vSco, cSco, sSco, bSco, oSco);
    incrementFavoriteCounter(favFlavor);
    string9 = convertRateToMessage(eRating, favFlavor);

    icecream >> Last10 >> First10 >> vSco >> cSco >> sSco >> bSco >> oSco; //Tenth person's data
    eRating = getRating(vSco, cSco, sSco, bSco, oSco);
    favFlavor = getFavoriteFlavor(vSco, cSco, sSco, bSco, oSco);
    incrementFavoriteCounter(favFlavor);
    string10 = convertRateToMessage(eRating, favFlavor);

    icecream.close();

    ofstream out;

    out.open("flavors_report.txt");

    out << std::setw(11) << std::left << First1 << std::setw(11) << std::left << Last1 << string1 << endl;
    out << std::setw(11) << std::left << First2 << std::setw(11) << std::left << Last2 << string2 << endl;
    out << std::setw(11) << std::left << First3 << std::setw(11) << std::left << Last3 << string3 << endl;
    out << std::setw(11) << std::left << First4 << std::setw(11) << std::left << Last4 << string4 << endl;
    out << std::setw(11) << std::left << First5 << std::setw(11) << std::left << Last5 << string5 << endl;
    out << std::setw(11) << std::left << First6 << std::setw(11) << std::left << Last6 << string6 << endl;
    out << std::setw(11) << std::left << First7 << std::setw(11) << std::left << Last7 << string7 << endl;
    out << std::setw(11) << std::left << First8 << std::setw(11) << std::left << Last8 << string8 << endl;
    out << std::setw(11) << std::left << First9 << std::setw(11) << std::left << Last9 << string9 << endl;
    out << std::setw(11) << std::left << First10 << std::setw(11) << std::left << Last10 << string10 << endl;
    out << endl;
    out << "Totals for each flavor:" << endl;
    out << "Vanilla count: " << iFavV << endl;
    out << "Chocolate count: " << iFavC << endl;
    out << "Strawberry count: " << iFavS << endl;
    out << "Banana count: " << iFavB << endl;
    out << "Oreo count: " << iFavO << endl;

    out.close();


} // END OF MAIN