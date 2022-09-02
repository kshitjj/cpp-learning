#include <iostream>
using namespace std;

class Sally
{
	public: 
		Sally(){
			cout << " I am a constructor " << endl;
		}
		void crapPrinter(){
			cout << "crap" << endl;
		}
};

int main(){
	Sally myObj;
	myObj.crapPrinter();
	return 0;
}
