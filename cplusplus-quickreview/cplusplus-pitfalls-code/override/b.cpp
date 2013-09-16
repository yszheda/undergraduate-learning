/*
 * =====================================================================================
 *
 *       Filename:  b.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/12/2013 11:10:24 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;
class A
{
		public:
				virtual void f() { cout << "A" << endl; }
};
class B: public A
{
		public:
				virtual void f() { cout << "B" << endl; }
};
int main() 
{
		A *pa = new A();
		pa->f();
		B* pb = (B*) pa;
		pb->f();

		delete pa, pb;
		pa = new B();
		pa->f();
		pb = (B*) pa;
		pb->f();

		return 0;
}
