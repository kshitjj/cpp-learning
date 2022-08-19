#include <iostream>
#include <string> //This includes the string library.
using namespace std;

int main(){
	//string type data
	string greet = "hello good sir";
	cout << greet << endl;
	
	// boolean
	bool isAlive = false;
	cout << "Is he alive? " << isAlive << endl;

	// charaters(single character)
	char a = 65; // converted to the letter A, using the ACII values
	char letter = 'B';
	cout << a << letter << endl;

	// numbers
	int number = 2342;
	float decimals = 123.4; // low precision
	double moreDecimals = 123.4243432; // high precision
	
	return 0;//important to stop the function 
}
