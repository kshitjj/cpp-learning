#include <iostream>
using namespace std;

class FriendshipBoy
{
	public:
		FriendshipBoy(){friendVar = 0;};
	private: 
		int friendVar;
	
	friend void justAnotherFunction(FriendshipBoy &sfo);
};

void justAnotherFunction(FriendshipBoy &sfo)
{
	sfo.friendVar = 69;
	cout << sfo.friendVar << endl;
}

int main() {
	FriendshipBoy Kshitij;
	justAnotherFunction(Kshitij);
	return 0;
}
