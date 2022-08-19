#include <iostream>
using namespace std;

int main(){
	//if, else if, and else statements
	int age;
	cout << "What's your age? ";	
	cin >> age;
	if(age > 30){
		cout << "Damn, you are out of your 20's" << endl;
	} else if (age < 30){
		cout << "What are you doing on this repository? Go Enjoy your life" << endl;
	} else {
		cout << "You 30, that's good I guess" << endl;	
	}

	// ternary operator
	int time;
	cout << "What's the time right now(hour)? ";
	cin >> time;
	string greeting = (time < 10) ? "Good morning" : "Good day!";
	cout << greeting << endl;	

	return 0;		
}
