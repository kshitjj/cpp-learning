#include <iostream>
using namespace std;

int main(){
	// Creating a reference variable 
	string food = "Pizza";
	string &meal = food;
	cout << meal << endl;	

	// getting the memory addresses of the variable
	string greeting = "Hello!";
	cout << &greeting << endl;

	// storing the memory addresses using the pointer variable
	// pointer variables are memory are used to store addresses	
	// NOTE : use string if the address you want is of string type and int if it's of int type.
	string* ptr = &greeting;
	cout << ptr << endl;

	// accessing the memory address of food and editing it
	cout << "Accessing the value of Greeting with memory address " << *ptr << endl;
	*ptr = "Good Morning";
	cout << "Changing the value of ptr and outputting it: " << *ptr << endl;

}
