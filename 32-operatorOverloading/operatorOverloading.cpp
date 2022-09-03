#include <iostream>
using namespace std;

class someClass
{
	public:
		int num;
		someClass(int n = 0)
			:num(n)
		{};
		someClass operator+(someClass &aso){
			someClass brandNew;
			brandNew.num = num + aso.num;
			return brandNew;
		}
};


int main(){
	someClass a(12), b(32);
	someClass c;
	c = a + b;
	cout << c.num << endl;
	return 0;
}
