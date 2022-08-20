#include <iostream>
#include <string>
using namespace std;


int main(){
	// here, we need to specify the size of the array.
	string cars[4] = {"Volvo", "Audi", "BMW", "Toyota"};
		
	// here, we get the size of the array with the help of sizeof().
	// But, instead of getting the size in numbers we get it in bytes.
	for (int i = 3; i >= 0; i--) {
		cout << cars[i] << endl;
	}
}
