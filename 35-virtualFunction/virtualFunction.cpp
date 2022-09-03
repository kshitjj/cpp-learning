#include <iostream>
using namespace std;

class Enemy
{
	public: 
		virtual void attack(){
			cout << "enemy attack!" << endl;
		}
};

class Ninja: public Enemy
{
	public:
		void attack(){
			cout << "ninja attack!" << endl;
		}
};

class Monster: public Enemy 
{
	public:
		void attack(){
			cout << "Monster Attack!" << endl;
		}
};

int main(){
	Ninja n;
	Monster m;
	Enemy e;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;
	Enemy *enemy3 = &e;
	enemy1 -> attack();
	enemy2 -> attack();
	enemy3 -> attack();
}
