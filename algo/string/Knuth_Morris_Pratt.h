/*
 * =====================================================================================
 *
 *       Filename:  Knuth-Morris-Pratt.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/05/2013 11:20:33 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef KNUTH_MORRIS_PRATT_H
#define KNUTH_MORRIS_PRATT_H 
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cassert>
#include "Morris_Pratt.h"

void KMP_prefix_func(std::string& p, int* MP_failure, int* KMP_failure)
{
		KMP_failure[0] = -1;
		for (int j = 1; j <= p.size(); ++j)
		{
				int t = MP_failure[j - 1];
				if (t == 0)
				{
						if (p[j] == p[1])
						{
								KMP_failure[j] = -1;
						}
						else
						{
								KMP_failure[j] = 0;
						}
				}
				else
				{
						while (p[j] == p[t+1])
						{
								t = MP_failure[t];
						}
						KMP_failure[j] = MP_failure[j - 1];
				}
		}
}

void Knuth_Morris_Pratt(std::string& t, std::string& p)
{
		int text_size = t.size();
		int pattern_size = p.size();
		assert(t.size() >= p.size());
		int MP_failure[pattern_size + 1];
		int KMP_failure[pattern_size + 1];
		MP_prefix_func(p, MP_failure);
		KMP_prefix_func(p, MP_failure, KMP_failure);

		for (int i = 1, j = 1; i <= text_size - pattern_size + 1; )
		{
				// window [i, i+pattern_size-1]
				if(t[i+j-1 - 1] != p[j - 1]) {
						i = i+(j-1)-KMP_failure[j-1];
						j = std::max(KMP_failure[j-1] + 1, 1);
				}
				else if (j < pattern_size)
				{
						j ++;
				}
				else
				{
						std::cout << "Found on [" << i << ", " << i+pattern_size-1 << "]" << std::endl; 
						i = i+pattern_size-KMP_failure[pattern_size];
						j = KMP_failure[pattern_size] + 1;
				}
		}

}

#endif /* KNUTH_MORRIS_PRATT_H */
