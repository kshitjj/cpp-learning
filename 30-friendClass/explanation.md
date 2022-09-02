# friendFunction
using the `friend` keyword we can make a function it's friend and allow the function to access the object's class's variable. 
Basically we create a normal function which can work with the class's variable. We need to declare their "friendship" only within the class.

## how it looks
```cpp
friend someFunction(className &sfo);
```
rest of the class behaves pretty similarly
