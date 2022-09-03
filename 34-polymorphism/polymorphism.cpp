#include <iostream>
using namespace std;

class Enemy{
	protected:
		int attackDamage;
	public:
		void setAttackDamage(int a){
			attackDamage = a;
		}
};

class Ninja: public Enemy{
	public:
		void attack()
		{cout << "I am a ninja, KACHOWW!!! -" << attackDamage << endl;}
};

class Monster: public Enemy{
	public:
		void attack()
		{cout << "MONSTER EAT!! - " << attackDamage << endl;}
};

int main(){
	Ninja n;
	Monster m;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;
	enemy1->setAttackDamage(20);
	enemy2->setAttackDamage(50);
	n.attack();
	m.attack();
	return 0;
}
	
