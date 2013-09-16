/*
 * =====================================================================================
 *
 *       Filename:  a.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/16/2013 10:41:52 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
		int a[] = {1 ,2, 3, 4, 5};
		// tricky part!
		int *ptr = (int *)(&a + 1);
		printf("%d %d\n", *(a + 1), *(ptr - 1));
		return 0;
}
