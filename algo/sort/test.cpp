/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/16/2013 03:47:36 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include "InsertionSort.hpp"
using namespace std;

int main(int argc, char *argv[])
{
		int myints[] = {32,71,12,45,26,80,53,33};
		std::vector<int> elems (myints, myints+8);
		InsertionSort(elems);
		for (auto& elem : elems)
		{
				cout << elem << " ";
		}
		cout << endl;
		return 0;
}

