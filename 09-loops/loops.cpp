#include <iostream>
using namespace std;

int main(){
	// while loop
	int i = 0;
	while(i < 5){
		cout << i << endl;
		i++;
	}

	// do-while loop (one loop happens no matter what.
	int j = 0;
	do {
		cout << j << endl;
		j++;
	} while(j < 5);

	// for loop
	for(int k = 0; k < 5; k++){
		cout << k << endl;
	}

	return 0;

}
