# C++/C QA #

## C ##
### Pointer ###
```
// an integer
int a;
// a pointer to an integer
int* a;
// a pointer to a pointer to an integer
int** a;
// an array of 10 integers
int a[10];
// an array of 10 pointers to integers
int* a[10];
// a pointer to an array of 10 integers
int (*a)[10];
// a pointer to a function that takes an integer argument and returns an integer
int (*a)(int);
// an array of 10 pointers to functions that take an integer argument and return an integer
int (*a[10])(int);
```


## Pointer vs Reference ##


## Polymorphism & Virtual Functions ##

The virtual mechanism doesn't work with the constructor.
If you call a virtual function inside a constructor, only the local version of the function is used.


## Operator Overloading ##
### Assignment ###
Check self-assignment!
```
class Byte
{
	unsigned char b;
public:
	Byte(unsigned char bb = 0): b(bb) {}
	Byte(const Byte& other) { this.b = other.b }
	Byte& operator=(const Byte& right)
	{
		if( this == &right )
		{
			return *this;
		}
		b = right.b;
		return *this;
	}
}
```

### Increment & Decrement ###
- prefix ++/-- : unary

- postfix ++/-- : binary
```
class Byte
{
	unsigned char b;
public:
	Byte(unsigned char bb = 0): b(bb) {}
	Byte(const Byte& other) { this.b = other.b }
	Byte& operator=(const Byte& right)
	{
		if( this == &right )
		{
			return *this;
		}
		b = right.b;
		return *this;
	}
	// prefix: ++Byte
	const Byte& operator++()
	{
		b ++;
		return *this;
	}
	// postfix: Byte++
	const Byte& operator++(int)
	{
		Byte before(b);
		b ++;
		return before;
	}
}
```

### Operator Conversion ###
No return type!
```
class A {};
class B
{
	public:
		operator A() const { return A(); }
};
```

