/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/05/2013 10:44:09 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include "Morris_Pratt.h"
#include "Knuth_Morris_Pratt.h"
using namespace std;


int main()
{
		string t = "AABZABZABCZ";
		string p = "ABZABC";
		cout << "Morris_Pratt" << endl;
		Morris_Pratt(t, p);
		cout << "Knuth_Morris_Pratt" << endl;
		Knuth_Morris_Pratt(t, p);
}

