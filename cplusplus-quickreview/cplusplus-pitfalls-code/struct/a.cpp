/*
 * =====================================================================================
 *
 *       Filename:  a.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/12/2013 11:02:21 PM
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
struct Test
{
		Test(int) {}
		Test() {}
		void fun() {}
};
int main()
{
		Test a(1);
		a.fun();
		// ERROR: function declaration!
		Test b();
		// change to
		// Test b;
		// error: request for member ‘fun’ in ‘b’, which is of non-class type ‘Test()’
		// b.fun();
		// ^
		b.fun();
		return 0;
}
