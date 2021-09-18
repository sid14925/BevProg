#include "../std_lib_facilities.h"

int main() {

	constexpr double cm_per_inch = 2.54;

	double lenght = -1;
	char unit = 0;

	cout << "Please enter a lenght in cm or in (c/i)\n";
	cin >> lenght >> unit;

	/*
	if(unit == 'i')
		cout << "lenght is " << lenght*cm_per_inch << "\n";
	else if(unit == 'c')
		cout << "lenght is " << lenght/cm_per_inch << "\n";
	else
		cout << "Unsupported unit!\n";
	*/

	switch(unit){
		case 'i':
			cout << "lenght is " << lenght*cm_per_inch << "\n";
			break;
		case 'c':
			cout << "lenght is " << lenght/cm_per_inch << "\n";
			break;
		default:
			cout << "Unsupported unit!\n";
			break;		
	}




	return 0;
}