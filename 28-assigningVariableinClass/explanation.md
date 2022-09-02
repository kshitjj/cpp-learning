# constVariable
This is not even about const variable but we can declare const variable by using `const` before the variable.
and we can set the values passed at the time of initializing object as the value we declare in class.

We can do this by using the following syntax.

```cpp
class randomClass
{
	public:
		randomClass(int a)
		: someVar(a)
		{}
	private:
		const int someVar;
};

int main(){
	randomClass myObj(2349); // So, here the someVar becomes 2349
	return 0;
}
