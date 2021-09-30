#include "../std_lib_facilities.h"

int area(int lenght, int width) {

	if(lenght <= 0 || width <= 0){
		return -1;
	}


	return lenght * width;
}

int main() {

	int x = -7;
	int y = 2;

	int area1 = area(x, y);

	cout << "area1==" << area1 << '\n';





}