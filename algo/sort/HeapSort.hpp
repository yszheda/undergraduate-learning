/*
 * =====================================================================================
 *
 *       Filename:  HeapSort.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/16/2013 04:11:21 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef HEAPSORT_HPP
#define HEAPSORT_HPP 
#include <vector>
#include <functional>

template <typename T>
void HeapSort( std::vector<T>& elems );

template <typename T, typename Comparator>
void HeapSort( std::vector<T>& elems, Comparator comp );

namespace 
{
		inline int LeftChild(i) { return (2*i+1); }
		template <typename T, typename Comparator>
		void PercDown( std::vector<T>& elems, int start_idx, int heap_size )
		{
				int Child;
				T tmp;
				int i = start_idx;
				for (tmp = elems[i]; LeftChild(i) < heap_size; tmp = Child)
				{
						Child = LeftChild(i);
						// Find the child to be swapped
						if (Child != heap_size && comp(elems[Child], elems[Child+1]) )
						{
								Child ++;
						}
						if ( comp(elems[Child], tmp) ) {
								elems[i] = elems[Child];
						} else {
								break;
						}
				}
				elems[i] = tmp;
		}
		template <typename T, typename Comparator>
		void Swap( std::vector<T>& elems, int idx_left, int idx_right )
		{
				T tmp = elems[idx_left];
				elems[idx_left] = elems[idx_right];
				elems[idx_right] = tmp;
		}
}

template <typename T, typename Comparator>
void HeapSort( std::vector<T>& elems, Comparator comp )
{
		int elem_num = elems.size();
		// build heap
		// max-heap for decrement sort
		// min-heap for increment sort
		for (int i = elem_num/2; i > 0; --i)
		{
				PercDown(elems, i, elem_num);
		}
		for (int i = elem_num - 1; i > 0; --i)
		{
				Swap(elems, 0, i);
				PercDown(elems, 0, i);
		}
}

template <typename T>
void HeapSort( std::vector<T>& elems )
{
		HeapSort( elems, std::less<T>() );
}
#endif /* HEAPSORT_HPP */
