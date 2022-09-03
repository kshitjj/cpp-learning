#include <iostream>
using namespace std;

template <class FIRST, class SECOND>
FIRST smaller(FIRST a, SECOND b){
	return (a>b?b:a);
}


int main(){
	int x = 23;
	double y = 24.342;
	cout << smaller(x, y) << endl;
	return 0;
}
