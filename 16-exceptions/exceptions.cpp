#include <iostream>
using namespace std;

int main(){
	bool isHoliday = true;

	try {
		if (isHoliday){
			cout << "WooHoo!" << endl;
		} else {
			throw(isHoliday);
		}
	}
	catch(bool isHoliday){
		 cout << "I mean, college is a social construct anyways" << endl;
		 cout << "Is it holiday? " << isHoliday;
	 }

}
