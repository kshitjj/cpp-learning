# template with multiple parameter
template allows us to work with multiple generic data types, we do this by doing the following
``` cpp
template <class FIRST, class SECOND>
FIRST smaller(FIRST a, SECOND b){
	return (a<b?a:b);
}
```
here, as put `FIRST` as the functional data type, the function then converts everything to FIRST's datatypes and then does the operation. If we put in SECOND instead of FIRST, it would have converted it to second's datatype.
