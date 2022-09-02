#include <iostream>
using namespace std;

class regularClass {
	public:
		void printShiz(){
			cout << "Shiz" << endl;
		}
		void constPrintShiz() const{
			cout << "Constant Shiz" << endl;
		}
};

int main(){
	regularClass normalObj;
	const regularClass constObj;
	normalObj.printShiz();
	constObj.constPrintShiz();
	return 0;
}
