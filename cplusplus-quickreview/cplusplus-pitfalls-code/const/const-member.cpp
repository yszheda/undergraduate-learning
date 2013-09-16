/*
 * =====================================================================================
 *
 *       Filename:  const-member.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/16/2013 08:00:20 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
class A
{
		// warning: non-static data member initializers only available with -std=c++11 or -std=gnu++11 [enabled by default]
		const int size = 0;
		// change to
		// static const int size = 0;
		// or add a constructor
		// A(): size(0) { }
};

int main()
{
		A a;
		return 0;
}
