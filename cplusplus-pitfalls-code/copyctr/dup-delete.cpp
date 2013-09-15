/*
 * =====================================================================================
 *
 *       Filename:  dup-delete.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/15/2013 09:36:31 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

class CDemo
{
		public:
				CDemo():str(NULL) {};
				// test copystr
//				CDemo(const CDemo& other)
//				{
//						this->str = new char[strlen(other.str) + 1];
//						strcpy(str, other.str);
//				}
				~CDemo()
				{
						if (str)
						{
								delete[] str;
						}
				}
				char* str;

}

int main()
{
		CDemo d1;
		d1.str = new char[32];
		strcpy(str, "test");
		vector<CDemo>* a1 = new vector<CDemo>();

		a1->push_back(d1);
		delete a1;

		return 0;
}
