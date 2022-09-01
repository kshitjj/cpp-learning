#include <iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main(){
	int myMarks[5] = {0, 0, 0, 0, 0};
	int myFuture[1] = {100000};

	printArray(myMarks, 5);
	printArray(myFuture, 1);
	return 0;
}

void printArray(int theArray[], int sizeOfArray){
	for(int x = 0; x < sizeOfArray; x++){
		cout << theArray[x] << endl;
	}
}
