/*
 * =====================================================================================
 *
 *       Filename:  QuickSort.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/24/2013 11:21:09 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP 
#include <vector>
#include <functional>

template <typename T>
void QuickSort( std::vector<T>& elems );

template <typename T, typename Comparator>
void QuickSort( std::vector<T>& elems, Comparator comp );

namespace 
{
		const int CutOff = 3;
		
		template <typename T>
		inline void Swap( T* a, T* b )
		{
				T* tmp = a;
				a = b;
				b = tmp;
		}
		
		template <typename T, typename Comparator>
		void Median3( std::vector<T>& elems, int Left, int Right, Comparator comp )
		{
				int Center = Left + ( Right - 1 ) / 2;
				if ( comp(elems[Center], elems[Left]) )
				{
						Swap( &elems[Center], elems[Left] );
				}
				if ( comp(elems[Right], elems[Left]) )
				{
						Swap( &elems[Right], elems[Left] );
				}
				if ( comp(elems[Right], elems[Center]) )
				{
						Swap( &elems[Right], elems[Center] );
				}

				// Invariant: elems[Left] <= elems[Center] <= elems[Right]
				// hide pivot
				Swap( &elems[Center], &elems[Right - 1] );
				return elems[Right - 1];
		}

		template <typename T, typename Comparator>
		void Qsort( std::vector<T>& elems, int Left, int Right, Comparator comp )
		{
				int i, j;
				T Pivot;
				if (Left + CutOff <= Right)
				{
						Pivot = Median3( elems, Left, Right );
						i = Left;
						j = Right - 1;
						while( true )
						{
								while( comp( elems[ ++i ], Pivot) ) {}
								while( comp( Pivot, elems[ --j ]) ) {}
								if (i < j)
								{
										Swap( &elems[i], &elems[j] );
								}
								else
								{
										break;
								}
						}
						Swap( &elems[i], &elems[Right - 1] );

						Qsort( elems, Left, i - 1, comp );
						Qsort( elems, i + 1, Right, comp );
				}
				else
				{
						InsertionSort( elems );
				}
		}

}

template <typename T, typename Comparator>
void QuickSort( std::vector<T>& elems, Comparator comp )
{
		int elem_num = elems.size();
		Qsort( elems, 0, elem_num - 1 );
}

template <typename T>
void QuickSort( std::vector<T>& elems )
{
		QuickSort( elems, std::less<T>() );
}

#endif /* QUICKSORT_HPP */
