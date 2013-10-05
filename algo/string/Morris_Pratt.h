/*
 * =====================================================================================
 *
 *       Filename:  Morris_Pratt.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/05/2013 10:11:35 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef MORRIS_PRATT_H
#define MORRIS_PRATT_H 
#include <iostream>
#include <string>
#include <vector>
#include <cassert>
// void MP_prefix_func(std::string& p, std::vector<int>& MP_failure)
void MP_prefix_func(std::string& p, int* MP_failure)
{
		MP_failure[0] = 0;
		MP_failure[1] = 0;
		for (int i = 2; i <= p.size(); ++i)
		{
				int j = MP_failure[i - 1];
				while(j > 0 && p[i - 1] != p[j]) {
						j = MP_failure[j];
				}
				if (p[i - 1] == p[j])
				{
						MP_failure[i] = j + 1;
				}
				else if (j == 0)
				{
						MP_failure[i] = 0;
				}
		}
}

void Morris_Pratt(std::string& t, std::string& p)
{
		int text_size = t.size();
		int pattern_size = p.size();
		assert(t.size() >= p.size());
//		vector<int> MP_failure(p.size() + 1);
		int MP_failure[pattern_size + 1];
		MP_prefix_func(p, MP_failure);
		for (int i = 1, j = 1; i <= text_size - pattern_size + 1; )
		{
				// window [i, i+pattern_size-1]
				if(t[i+j-1 - 1] != p[j - 1]) {
						i = i+(j-1)-MP_failure[j-1];
						j = MP_failure[j-1] + 1;
				}
				else if (j < pattern_size)
				{
						j ++;
				}
				else
				{
						std::cout << "Found on [" << i << ", " << i+pattern_size-1 << "]" << std::endl; 
						i = i+pattern_size-MP_failure[pattern_size];
						j = MP_failure[pattern_size] + 1;
				}
		}

}

#endif /* MORRIS_PRATT_H */
