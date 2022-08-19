#include <iostream> 
using namespace std;

//declaring integer, float, character, string, boolean
int myNum = 15;
double myFloatNum = 420.69;
char myLetter = 'D';
string myString = "Hello World";
bool myBoolean = true;

int main(){
    //printing variables
    cout << myNum << endl;
    cout << myFloatNum << endl;
    cout << myLetter << endl;
    cout << myString << endl;
    cout << myBoolean << endl;

    // displaying variables
    int myAge = 15;
    cout << "I am " << myAge << " Years Old" << endl;

    // adding variables
    int x, y;
    x = 10;
    y = 20;
    cout << x + y << endl;

    //Using Descriptive Identifiers
        int minutesPerHour = 60;
        cout << "minutesPerHour = " << minutesPerHour << endl;

    //Using Constants
        const float valueOfPi = 3.14;
        cout << "valueOfPi = " << valueOfPi << endl;
        return 0;
}
