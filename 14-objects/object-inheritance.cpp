#include <iostream>
#include <string>
using namespace std;
// Content in this cpp file
// 1. inheritance
// 2. multilevel inheritance
// 3. multiple inheritance
// 4. access specifiers

class myClass
{
	public:
	void someFunction(){
		cout << "This is a function of myClass" << endl;
	}
};

class myOtherClass 
{
	public:
	void myOtherFunction(){
		cout << "This is a Function of myOther class" << endl;
	}
};

// 1. inheritance
// 3. multiple inheritance
class myChildClass: public myClass, public myOtherClass
{
	protected:
	int salary;	
	
	public:
	void someChildFunction(){
		cout << "this function is of myChildClass" << endl;
	}
};

// 2. multilevel inheritance action
// 4. access indentifiers
class myGrandChildClass: public myChildClass
{
	public:
	void someGrandChildFunction(){
		cout << "this function is of myGrandChildClass" << endl;
	}
	void setSalary(int x){
		salary = x;
	}
	void getSalary(){
		cout << "Your salary is " << salary << endl;
	}
};

int main()
{
	myGrandChildClass myObj;
	myObj.someFunction();
	myObj.someChildFunction();
	myObj.someGrandChildFunction();
	myObj.myOtherFunction();
	myObj.setSalary(500);
	myObj.getSalary();	
	return 0;
}

