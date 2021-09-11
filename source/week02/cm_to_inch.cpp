#include "../std_lib_facilities.h"

int main() {

	double cm_per_inch = 2.54;

	double lenght = 1;

	while(lenght != 0)
	{
		cout << "Please enter a value in inch:\n";
		cin >> lenght;
		cout << "Lenght in cm: " << lenght * cm_per_inch << "\n";
	}

	return 0;
}