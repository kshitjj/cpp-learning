#include <iostream>
using namespace std;

class basicClass
{
	public:
	basicClass(){
		cout << " I am a constructor " << endl;
	}
	~basicClass(){
		cout << " I am a deconstructor " << endl;
	}
};

int main (){
	basicClass myObj;
	cout << "This is kinda stupid" << endl;
}
