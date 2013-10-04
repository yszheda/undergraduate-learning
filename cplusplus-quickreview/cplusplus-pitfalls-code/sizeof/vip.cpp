/*
 * =====================================================================================
 *
 *       Filename:  vip.cpp
 *
 *    Description:  CC -m32  
 *
 *        Version:  1.0
 *        Created:  10/04/2013 08:31:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct A
{
		short a1;
		short a2;
		short a3;
};

struct B
{
		long a1;
		short a2;
};

int main()
{
		char *ss1 = "0123456789";
		char ss2[] = "0123456789";
		char ss3[100] = "0123456789";
		int ss4[100];
		char q1[] = "abc";
		char q2[] = "a\n";
		char *q3 = "a\n";
		char *str1 = (char *)malloc(100);
		void *str2 = (void *)malloc(100);
		cout << sizeof(ss1) << " ";
		cout << sizeof(ss2) << " ";
		cout << sizeof(ss3) << " ";
		cout << sizeof(ss4) << " ";
		cout << endl;
		cout << sizeof(q1) << " ";
		cout << sizeof(q2) << " ";
		cout << sizeof(q3) << " ";
		cout << endl;
		cout << sizeof(A) << " ";
		cout << sizeof(B) << " ";
		cout << endl;
		cout << sizeof(str1) << " ";
		cout << sizeof(str2) << " ";

}

