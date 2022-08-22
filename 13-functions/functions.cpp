#include <iostream>
#include <string>
using namespace std;

// declaring the function
void greeter(string message = "Hey man! What's up");
// So, We can input the memory address as the function argument :).
void swapNums(int &x, int &y){
	int z = x;
	x = y;
	y = x;
}

// 3. here, we define 2 functions with same name but different types.
//    So, The function which will be used depends on the argument that
//    is passed through the function when it's called
double plusFunc(double x, double y){
return x + y;
};
int plusFunc(int x, int y){
return x + y;
};

int main(){
	// 1. We can declare the function up and write the definition below to make the code more readable;
	// 1. thought it is not possible to call the function before it has been declared(but can be called
	// 1. if the function is declared but not defined.)
	cout << "without default parameters, arguments defined" << endl;	
	greeter("Hello!, How are you?");
	// 2. here the default value is used as no argument is passed	
	cout << "No arguments passed, thus no default value is used" << endl;
	greeter();

	// 1. swapping numbs
	int myFirstNumber = 15;
	int mySecondNumber = 20;
	
	cout << "Before swap: " << endl;
	cout << myFirstNumber << mySecondNumber << endl;
	
	swapNums(myFirstNumber, mySecondNumber);
	cout << "After swap: " << endl;
	cout << mySecondNumber << myFirstNumber << endl;	

	// 3. calling different function with the type trick
	cout << "Sum of 2.3 and 5.9 = " << plusFunc(2.3, 5.9) << endl;
	cout << "Sum of 2 and 5 = " << plusFunc(2, 5) << endl;
}


// 1. definition of the functions
void greeter(string message){
	cout << message << endl;
}
