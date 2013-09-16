/*
 * =====================================================================================
 *
 *       Filename:  inline.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/16/2013 08:05:45 PM
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
		public:
				void foo() { cout << "A"; };
				~A();
}

inline A::~A()
{
		cout << "inline destructor";
}

int main()
{
		A *p = new A();
		p->foo();
		delete p;
		return 0;
}
