#include <iostream>
#include <string>
using namespace std;

class animal{
	public:
		void animalSound(){
			cout << "This animal makes some sound" << endl;
		}
};

class cow : public animal {
	public: 
		void animalSound(){
			cout << "Moo!" << endl;
		}
};

class cat : public animal {
	public:
		void animalSound(){
			cout <<  "Meow!" << endl;
		}
};
int main()
{
	cat fluff;
	fluff.animalSound();
	return 0;
}
