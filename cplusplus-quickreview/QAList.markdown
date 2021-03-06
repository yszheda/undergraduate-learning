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
// a function that takes an integer argument and returns a pointer to an integer
int *a(int);
// an array of 10 pointers to functions that take an integer argument and return an integer
int (*a[10])(int);
```

### Character Constant ###
In C, the type of a character constant like 'a' is actually an int, with size of 4. In C++, the type is char, with size of 1. 

### References ###
http://david.tribble.com/text/cdiffs.htm

## Const ##
- C++: a const that is outside all functions has file scope (default to *internal linkage*)

- C defaults to external linkage for consts, while C++ defaults to internal linkage for consts.

- In C++, a const doesn't necessarily create storage, while in C a const always creates storage.

```
// pointer to const
const int* p;
int const* p;
// const pointer
int * const p;
// const pointer to const
const int* const p;
int const* const p;
// const reference
const int& ref;
```

- Temporary objects are always const -> use const references as function arguments to receive temporary objects.

- static const member: compile-time constant
```
class A
{
	static const int size = 100;
	int i[size];
}
```
"enum hack" for old compiler
```
class A
{
	enum { size = 100 };
	int i[size];
}
```

- _mutable_ variable: can be changed inside a const object

## Pointer vs Reference ##

- A reference must always be initialized because the object it refers to already exists; a pointer can be initialized at any time.

- Once a reference is initialized to an object, it cannot be changed to refer to another object; a pointer can be pointed to another object at any time.

- There is no NULL references.


## Polymorphism & Virtual Functions ##

- The virtual mechanism doesn't work with the constructor and destructor.
If you call a virtual function inside a constructor, only the local version of the function is used.
If you call a virtual function inside a destructor, only the local version of the function is used.


## Operator Overloading ##
### Cannot be overloadded ###
- . (Member Access or Dot operator)

- ?: (Ternary or Conditional Operator )

- :: (Scope Resolution Operator)

- .* (Pointer-to-member Operator )

- sizeof (Object size Operator)

- typeid (Object type Operator)

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

## C++ vs Java ##
1. Java runs in a virtual machine.
2. C++ natively supports unsigned arithmetic.
3. In Java, parameters are always passed by value (or, with objects, their references are passed by value). In C++, parameters can be passed by value, pointer, or by reference.
4. Java has built-in garbage collection.
5. C++ allows operator overloading.
6. C++ allows multiple inheritance of classes.
