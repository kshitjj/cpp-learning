#include <iostream>
using namespace std; 

class mother
{
	public:
	protected:
		int protectedV = 10;
};

class daughter: public mother
{
	public:
		void doSomething()
		{
			cout << protectedV << endl;
		}
};

int main(){
	daughter myObj;
	myObj.doSomething();
	return 0;
}
