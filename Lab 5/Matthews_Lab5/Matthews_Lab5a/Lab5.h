
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

namespace myStd {

	enum rating{EXCELLENT, GOOD, OK, NOT_GOOD, BAD};
	rating Rating;

	enum flavors{VANILLA, CHOCOLATE, STRAWBERRY, BANANA, OREO};
	flavors favFlav;

	int iFavV = 0;
	int iFavC = 0;
	int iFavS = 0;
	int iFavB = 0;
	int iFavO = 0;

	//Functions
	rating getRating(double vScore, double cScore, double sScore, double bScore, double oScore) { /* determines average score */
		double totSco;
		totSco = (vScore + cScore + sScore + bScore + oScore) / 5;

		if (totSco < 3) {
			Rating = BAD;
		}
		else if (totSco >= 3 && totSco <= 4.9999) {
			Rating = NOT_GOOD;
		}
		else if (totSco >= 5 && totSco <= 6.9999) {
			Rating = OK;
		}
		else if (totSco >= 7 && totSco <= 8.9999) {
			Rating = GOOD;
		}
		else {
			Rating = EXCELLENT;
		}
		return Rating;
	}

	flavors getFavoriteFlavor(double vScore, double cScore, double sScore, double bScore, double oScore) { /* determines the favFlavor */ /* Theres definitely a function for this but im too far in to stop this hell chain at this point ;-; */
		if (vScore >= cScore) {
			if (vScore >= sScore) {
				if (vScore >= bScore) {
					if (vScore >= oScore) {
						favFlav = VANILLA;
					}
					else {
						favFlav = OREO;
					}
				}
				else {
					if (bScore >= oScore) {
						favFlav = BANANA;
					}
					else {
						favFlav = OREO;
					}
				}
			}
			else {
				if (sScore >= bScore) {
					if (sScore >= oScore) {
						favFlav = STRAWBERRY;
					}
					else {
						favFlav = OREO;
					}
				}
				else {
					if (bScore >= oScore) {
						favFlav = BANANA;
					}
					else {
						favFlav = OREO;
					}
				}
			}
		}
		else {
			if (cScore >= sScore) {
				if (cScore >= bScore) {
					if (cScore >= oScore) {
						favFlav = CHOCOLATE;
					}
					else {
						favFlav = OREO;
					}
				}
				else {
					if (bScore >= oScore) {
						favFlav = BANANA;
					}
					else {
						favFlav = OREO;
					}
				}
			}
			else {
				if (sScore >= bScore) {
					if (sScore >= oScore) {
						favFlav = STRAWBERRY;
					}
					else {
						favFlav = OREO;
					}
				}
				else {
					if (bScore >= oScore){
						favFlav = BANANA;
					}
					else {
						favFlav = OREO;
					}
				}
			}
		}
		return favFlav;


	}

	void incrementFavoriteCounter(flavors favFlavor) { /* records # of favorites for each score */
		if (favFlavor == 0) {
			iFavV = iFavV + 1;
		}
		else if (favFlavor == 1) {
			iFavC = iFavC + 1;
		}
		else if (favFlavor == 2) {
			iFavS = iFavS + 1;
		}
		else if (favFlavor == 3) {
			iFavB = iFavB + 1;
		}
		else {
			iFavO = iFavO + 1;
		}

	}

	string convertRateToMessage(rating rate, flavors favFlavor) { /* creates output string from other data */
		string numRate, FavF, totStr;

		switch (rate) {
		case 0:
			numRate = "excellent";
			break;
		case 1:
			numRate = "good";
			break;
		case 2:
			numRate = "ok";
			break;
		case 3:
			numRate = "not good";
			break;
		case 4:
			numRate = "bad";
			break;
		}

		switch (favFlavor) {
		case 0:
			FavF = "vanilla.";
			break;
		case 1:
			FavF = "chocolate.";
			break;
		case 2:
			FavF = "strawberry.";
			break;
		case 3:
			FavF = "banana.";
			break;
		case 4:
			FavF = "oreo.";
			break;
		}
		totStr = "Customer rating is " + numRate + ". Favorite: " + FavF;

		return totStr;


	}


} //END NAMESPACE


