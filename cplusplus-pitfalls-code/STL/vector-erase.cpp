/*
 * =====================================================================================
 *
 *       Filename:  vector-erase.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/15/2013 09:46:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
		cout << "\nvector size is: " << v.size() << endl;
		vector<int>::iterator p = v.begin();	
}

int main()
{
		vector<int> array;
		array.push_back(1);
		array.push_back(6);
		array.push_back(6);
		array.push_back(3);
		
		vector<int>::iterator itor;
		vector<int>::iterator itor2;
		itor = array.begin();

		for (itor = 0; itor != array.end(); )
		{
				if(6 == *itor)
				{
						itor2 = itor;
						array.erase(itor2);
				}
				itor ++;
		}

		// array.erase( remove(array.begin(), array.end(), 6), array.end() );

		print(array);
		return 0;
}

