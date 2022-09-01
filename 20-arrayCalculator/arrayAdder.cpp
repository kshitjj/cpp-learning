#include <iostream>
using namespace std;

int main(){
	int calculator[5] = {12, 3, 4, 4, 4};
	int sum = 0;

	for(int i = 0; i < 5; i++){
		sum += calculator[i];

		if(i == 0){
			cout << "Sum of " << calculator[i];
		} else if(i == 4) {
				cout << ", " << calculator[i] << " is " << sum << endl;
		} else {
			cout << ", " << calculator[i];
		}
		
	}
	return 0;
}
