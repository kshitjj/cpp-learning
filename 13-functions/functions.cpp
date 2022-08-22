#include <iostream>
#include <string>
using namespace std;

// declaring the function
void greeter(string message);
// So, We can input the memory address as the function argument :).
void swapNums(int &x, int &y){
	int z = x;
	x = y;
	y = x;
}


int main(){
	// We can declare the function up and write the definition below to make the code more readable;
	// Though, it's not possible to declare the function below where it's called. It'll result in error.
	greeter("Hello!, How are you?");
	
	// swapping numbs
	int myFirstNumber = 15;
	int mySecondNumber = 20;
	
	cout << "Before swap: " << endl;
	cout << myFirstNumber << mySecondNumber << endl;
	
	swapNums(myFirstNumber, mySecondNumber);
	cout << "After swap: " << endl;
	cout << mySecondNumber << myFirstNumber << endl;	
}


// definition of the functions
void greeter(string message){
	cout << message << endl;
}
