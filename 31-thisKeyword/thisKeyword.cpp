#include <iostream>
using namespace std;

class someClass
{
	public: 
		someClass(int a)
			: num(a)
		{};
		void printNum(){
			cout << "h=" << num << endl;
			cout << "this->h=" << this->num << endl;
			cout << "(*this->h)=" << (*this).num << endl;
			cout << this << endl;
		}
	private: 
		int num;
};

int main(){
	someClass myObj(18);
	myObj.printNum();
	return 0;
}
