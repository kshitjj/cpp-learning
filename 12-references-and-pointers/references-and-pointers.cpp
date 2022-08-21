#include <iostream>
using namespace std;

int main(){
	// getting the memory addresses of the variable
	string greeting = "Hello!";
	cout << &greeting << endl;

	// storing the memory addresses using the pointer variable
	// pointer variables are memory are used to store addresses	
	// NOTE : use string if the address you want is of string type and int if it's of int type.
	string* ptr = &greeting;
	cout << ptr << endl;

}
