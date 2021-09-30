#include "../std_lib_facilities.h"

int main(){
	
	vector<int> v;

	for(int x; cin >> x; )
		v.push_back(x);

	for(int i = 0; i < v.size(); ++i)
		cout << "v[" << i << "]==" << v[i] << ' ';
	cout << '\n';

	return 0;
}