#include <iostream>
using namespace std;
void isDivisibleByFive(int T){
    for(int i = 0; i < T; i++){
        int noOfDigit, Number;
        bool isDivisible = false;
        cin >> noOfDigit >> Number;
        string str = to_string(Number);
        for(int j = 0; j < noOfDigit; j++){
            char digit = str[j];
            if (digit == '0' || digit == '5'){
                isDivisible = true;
                break;
            }
        }
        
        if(isDivisible==true){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
int main() {
	// your code goes here
	int T;
	cin >> T;
	isDivisibleByFive(T);
	return 0;
}
