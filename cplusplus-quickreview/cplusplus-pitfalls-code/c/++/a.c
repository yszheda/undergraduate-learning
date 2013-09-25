/*
 * =====================================================================================
 *
 *       Filename:  a.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/25/2013 11:52:09 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main()
{
		int i = 1;
		int j = i++;
		if ( (i > j++) && (i++ == j) )
		{
				i+=j;
		}
		printf("i: %d, j: %d\n", i, j);
		return 0;
}
