#include <iostream>
using namespace std;

class birthday 
{
	public:
		birthday(int m, int d, int y)
		: month(m), day(d), year(y)
		{
		}
		void print(){
			cout << "birthday : " << day << "/" << month << "/" << year;
		}
	private:
		int month;
		int day;
		int year;
};

class people
{
	public:
		people(string x, birthday bo)
		: name(x), dateOfBirth(bo)
		{};
		void printInfo()
		{
			cout << "name : " << name << ", birthday : ";
			dateOfBirth.print();
			cout << endl;
		};
	private:
		string name;
		birthday dateOfBirth;
};

int main(){
	birthday birthObj(1, 8, 2004);
	people kshitijRajgude("Kshitij Rajgude", birthObj);
	kshitijRajgude.printInfo();
	return 0;
}
