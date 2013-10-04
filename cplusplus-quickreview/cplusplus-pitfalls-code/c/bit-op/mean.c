/*
 * =====================================================================================
 *
 *       Filename:  mean.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/04/2013 08:13:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int mean(int x, int y)
{
		return (x & y) + ((x ^ y) >> 1);
}

int main()
{
		int x = 729;
		int y = 271;
		printf("%d\n", mean(x, y));
}
