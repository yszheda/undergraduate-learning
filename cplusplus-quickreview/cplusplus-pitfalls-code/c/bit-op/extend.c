/*
 * =====================================================================================
 *
 *       Filename:  extend.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/04/2013 08:10:10 PM
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
		unsigned int a = 0xFFFFFFF7;
		unsigned char i = (unsigned char)a;
		char* b = (char *)&a;

		printf("%08x, %08x\n", i, *b);
}
