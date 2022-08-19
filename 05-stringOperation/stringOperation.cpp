#include <iostream>
#include <string>
using namespace std;

int main(){
	// accessing strings and changing them
	string greeting = "Hello";
	greeting[0] = 'J';
	cout << greeting << endl;

	// Why you should you use getline(cin, string) and how to use it?
	string glFullName;
	cout << "Hey, What's your full name?(gl): ";
	getline (cin, glFullName);
	cout << "Hello " << glFullName << " How are you?(gl)" << endl;

	// Cons of not using getline(cin, stringName)
	string fullName;	
	cout << "Hey, What's your full name?: ";
	cin >> fullName;
	cout << "Hello " << fullName << " How are you?" << endl;
	return 0;

}
