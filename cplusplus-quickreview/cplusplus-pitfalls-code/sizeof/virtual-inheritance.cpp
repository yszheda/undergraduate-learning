/*
 * =====================================================================================
 *
 *       Filename:  virtual-inheritance.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/05/2013 08:45:42 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

class A
{
		char k[3];
		public:
		virtual void aa() {};
};

class B: public virtual A
{
		// virtual inheritance
		// an additional vptr to class A
		char j[3];
		public:
		virtual void bb() {};
};

class C: public virtual B
{
		char i[3];
		public:
		virtual void cc() {};
};

int main()
{
		cout << "sizeof(A):" << sizeof(A) << endl;
		cout << "sizeof(B):" << sizeof(B) << endl;
		cout << "sizeof(C):" << sizeof(C) << endl;
		return 0;
}
