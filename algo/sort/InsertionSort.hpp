/*
 * =====================================================================================
 *
 *       Filename:  InsertionSort.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/16/2013 03:33:55 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef INSERTIONSORT_HPP
#define INSERTIONSORT_HPP 
#include <vector>
#include <functional>

template <typename T>
void InsertionSort( std::vector<T>& elems );

template <typename T, typename Comparator>
void InsertionSort( std::vector<T>& elems, Comparator comp );

template <typename T, typename Comparator>
void InsertionSort( std::vector<T>& elems, Comparator comp )
{
		int elem_num = elems.size();
		T tmp;
		for (int i = 1; i < elem_num; ++i)
		{
				tmp = elems[i];
				int j;
				for (j = i; j > 0 && comp(tmp, elems[j-1]) ; --j)
				{
						// shift if elems[j-1] > tmp
						elems[j-1] = elems[j];
				}
				elems[j] = tmp;
		}
}

template <typename T>
void InsertionSort( std::vector<T>& elems )
{
		InsertionSort( elems, std::less<T>() );
}

#endif /* INSERTIONSORT_HPP */
