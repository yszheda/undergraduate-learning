/*
 * =====================================================================================
 *
 *       Filename:  MergeSort.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/16/2013 04:56:09 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef MERGESORT_HPP
#define MERGESORT_HPP 
#include <vector>
#include <functional>

template <typename T>
void MergeSort( std::vector<T>& elems );

template <typename T, typename Comparator>
void MergeSort( std::vector<T>& elems, Comparator comp );

namespace
{
		template <typename T, typename Comparator>
		void Merge( std::vector<T>& elems, std::vector<T>& tmp, int LeftPos, int RightPos, int RightEnd )
		{
				int tmpPos = LeftPos;
				int LeftEnd = RightPos - 1;		// end of the first part
				while(LeftPos <= LeftEnd && RightPos <= RightEnd) {
//						if (elems[LeftPos] < elems[RightPos])
						if ( comp(elems[LeftPos] < elems[RightPos]) )
						{
								tmp[ tmpPos++ ] = elems[ LeftPos++ ];
						}
						else
						{
								tmp[ tmpPos++ ] = elems[ RightPos++ ];
						}
				}
				while(LeftPos <= LeftEnd) {
						tmp[ tmpPos++ ] = elems[ LeftPos++ ];
				}
				while(RightPos <= RightEnd) {
						tmp[ tmpPos++ ] = elems[ RightPos++ ];
				}
		}

		template <typename T, typename Comparator>
		void MSort( std::vector<T>& elems, std::vector<T>& tmp, int Left, int Right )
		{
				if (Left < Right)
				{
						int Center = (Left + Right) / 2;
						MSort(elems, tmp, Left, Center);
						MSort(elems, tmp, Center+1, Right);
						Merge(elems, tmp, Left, Center+1, Right);
				}
		}

}

template <typename T, typename Comparator>
void MergeSort( std::vector<T>& elems, Comparator comp )
{
		int elem_num = elems.size();
		vector<T> tmp(elem_num);
		MSort(elems, tmp, 0, elem_num-1);
}

template <typename T>
void MergeSort( std::vector<T>& elems )
{
		MergeSort( elems, std::less<T>() );
}

#endif /* MERGESORT_HPP */
