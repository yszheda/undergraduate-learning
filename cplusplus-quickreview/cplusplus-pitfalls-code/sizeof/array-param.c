/*
 * =====================================================================================
 *
 *       Filename:  array-param.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/04/2013 09:06:42 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

char var[10];

// pass the address of var[0]
// var[] is equivalent to *var
int test(char var[])
{
		return sizeof(var);
}

int main()
{
		printf("%d\n", test(var));
}
