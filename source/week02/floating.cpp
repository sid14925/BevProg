#include "../std_lib_facilities.h"

int main()
{
	
	cout << "Please enter real number:\n";

	double n;
	cin >> n;

	cout << "n==" << n 
		<< "\nn+1==" << n+1
		<< "\n3*n==" << 3*n
		<< "\nn squared==" << n*n
		<< "\nn/2==" << n/2
		<< "\nsquare root of n==" << sqrt(n)
		<< "\n";

	return 0;
}