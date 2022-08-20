#include <iostream>
using namespace std;

int main(){
	// creating a structure with "car" name and assigning to the structure variable 
	struct car {
		string model;
		string company;
		int year;
	};
	
	car myCar1;
	myCar1.model = "Amaze";
	myCar1.company = "Honda";
	myCar1.year = 2014;

	car myCar2;
	myCar2.model = "800";
	myCar2.company = "Maruti";
	myCar2.year = 2002;

	// assigning structure variables with struct at the time of declaration
	struct fruit{
		string color;
		string taste;
		string size;
	} Apple, Orange, Peach;

	Apple.color = "red";
	Apple.taste = "sweet";
    Apple.size = "medium";

	Orange.color = "orange";
	Orange.taste = "sour";
	Orange.size = "medium";	

	Peach.color = "peach";
	Peach.taste = "sweet";
	Peach.size = "medium";
	
	cout << "Color of the fruit is " << Peach.color << ", Taste of the fruit is " << Peach.taste << ", Size of the fruit is " << Peach.size;
	return 0;
}
