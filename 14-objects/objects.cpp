#include <iostream>
#include <string>
using namespace std;


class college {
// note the donation amount(private attribute can only be accessed within the function)
private: 
	int donation = 1500000;

public:
string name;
int yearEstablished;
// 2.declaration of constructor
college(string x, int y);

// 1.declaring the introduction method
void introduction();

// 3.to get or set the donation amount within the college class we can use the following methods
void getDonation(){
cout << "Donation amount is " << donation << endl; 
}

void setDonation(int newDonation){
donation = newDonation;
}
};

// 2. definition of constructor
college::college(string x, int y){
name = x;
yearEstablished = y;
}

// 1. definition of the introduction method
void college::introduction(){
cout << "The name of the college is " << name << " And it was founded in the year " << yearEstablished << endl;
}


int main(){

// 1/2/3. using the constuctor and attendance function
college AISSMSCOE("AISSMSCOE", 2002);
AISSMSCOE.introduction();
AISSMSCOE.getDonation();
AISSMSCOE.setDonation(69);
AISSMSCOE.getDonation();
return 0;
}



