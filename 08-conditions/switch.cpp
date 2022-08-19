#include <iostream>
using namespace std;

int main(){
	int day;
	cout << "What's the day today?(1,2,3,4,5,6,7): ";
	cin >> day;
	
	switch(day){
		case 6:
		case 7:
			cout << "It's a Weekend" << endl;
			break;
		default:
			cout << "It's a Weekday" << endl;
	}	
	return 0;

}
