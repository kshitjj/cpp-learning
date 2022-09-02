#include <iostream>
using namespace std;

class normalClass
{
	public:
		normalClass(int a, int b);
		void print();
	private:
		int regVar;
		const int constVar;
};

normalClass::normalClass(int a, int b) // the regVar(a) and constVar(b) sets a to regVar and b to constVar
: regVar(a), constVar(b)
{
}

void normalClass::print()
{
	cout << "regular variable is " << regVar << ", and const variable is " << constVar << endl;
}

int main(){
	normalClass myObj(2, 4);
	myObj.print();
	return 0;
}
