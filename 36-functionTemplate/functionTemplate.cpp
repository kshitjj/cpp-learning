#include <iostream>
using namespace std;

template <class bucky>
bucky addNum(bucky a, bucky b){
	return a + b;
}

int main() {
	int x = 7, y = 43, z;
	z = addNum(x, y);
	cout << z << endl;
	return 0;
}
