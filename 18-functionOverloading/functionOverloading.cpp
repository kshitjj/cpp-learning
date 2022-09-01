#include <iostream> 
using namespace std;

void printNumber(int x){
	cout << "I am printing a integer " << x << endl;
}

void printNumber(float x){
	cout << "I am printing a float " << x << endl;
}

int main(){
	int a = 53;
	float b = 234.34;
	
	printNumber(a);
	printNumber(b);
}
