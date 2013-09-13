/*
 * =====================================================================================
 *
 *       Filename:  a.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/12/2013 11:07:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;
class A
{
		protected:
				int m_data;
		public:
				A(int data=0) { m_data = data; }
				int GetData() { return doGetData(); }
				virtual int doGetData() { return m_data; }
};
class B: public A
{
		protected:
				int m_data;
		public:
				B(int data=0) { m_data = data; }
				int doGetData() { return m_data; }
}

