#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);
//what is difference between passing by value and by reference

int main(){
	int betty = 13; 
	int sandy = 13;

	passByValue(betty);
	passByReference(&sandy);
	cout << betty << " : betty" << endl;
	cout << sandy << " : sandy" << endl;
}

void passByValue(int x){
	// here, the copy of the x is passed.
	x = 99;
}

void passByReference(int *x){
	// here, the memory address of x is passed. thus direct access.
	*x = 66;
}
