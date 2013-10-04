/*
 * =====================================================================================
 *
 *       Filename:  shift.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/04/2013 08:24:04 PM
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
		unsigned char a = 0xA5;	// 1010 0101
		unsigned char b = ~a>>4+1; 
		// + has higher priority than >> 
		// equivalent to ~a>>5
		// ~a=(1111 1111)0101 1010
		printf("b=%d\n", b);
}
