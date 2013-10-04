/*
 * =====================================================================================
 *
 *       Filename:  static.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/04/2013 09:03:37 PM
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

class A1
{
		public:
				int a;
				static int b; // not included in sizeof

				A1();
				~A1();
};

int main()
{
		cout << sizeof(A1) << endl;
}

