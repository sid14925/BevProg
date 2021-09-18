#include "../std_lib_facilities.h"

int square(int x) {

	return x*x;
}
void print_square(int x) {
	cout << x << '\t' << square(x) << '\n';
}


int main() {

	for(int i = 0; i < 100; ++i){
		//cout << i << '\t' << square(i) << '\n';
		print_square(i);
	}

	return 0;
}