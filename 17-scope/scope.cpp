#include <iostream> 
using namespace std;

// global declartion of tuna
int tuna = 60;
int main(){
	int tuna = 3420;
	// uses the local tuna
	cout << tuna << endl;

	// uses the global tuna
	cout << ::tuna << endl;
}

