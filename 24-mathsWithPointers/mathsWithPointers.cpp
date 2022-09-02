#include <iostream>
using namespace std;

int main(){
	int nums[5];
	int *num0 = &nums[0];
	int *num1 = &nums[1];
	int *num2 = &nums[2];

	cout << "num0 is at " << num0 << endl;
	cout << "num1 is at " << num1 << endl;
	cout << "num2 is at " << num2 << endl;

	num0 += 2;
	cout << "Address of num0 after adding 2 to it is " << num0 << endl;
	return 0;
}
