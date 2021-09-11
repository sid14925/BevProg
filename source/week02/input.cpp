#include "../std_lib_facilities.h"


// read name and age:

int main()
{
	cout << "Please enter your first and last name and age:\n";

	string first_name;
	string last_name;
	int age;

	cin >> first_name >> last_name >> age;

	string name = first_name + " " + last_name;
	

	cout << "Hello, " << name << 
	", age is " << age <<"\n";

	return 0;
}