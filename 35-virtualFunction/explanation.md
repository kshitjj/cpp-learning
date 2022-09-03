# Virtual Function
## defining a virtual function 
a virtual function is basically a template for the child class that will inherit the base class's code. We define virtual function by simply doing the following `virtual void functionName()`. and that's about it.
## types of virtual function
Types of Virtual Function
1. Pure Virtual function
	a pure virtual function has no code inside virtual function which is inside the base class
	it looks something like this `virtual void attack()=0;` the only difference is equal to 0
2. abstract function 
	a non pure virtual has a code inside the virtual function so, if no code written for that virtual function in the child class, and the child class uses the virtual function. it will use the virtual function code that is written in the base class.
