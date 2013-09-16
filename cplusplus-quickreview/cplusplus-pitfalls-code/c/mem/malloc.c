/*
 * =====================================================================================
 *
 *       Filename:  malloc.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/16/2013 09:56:02 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai YUAN (galoisplusplus), yszheda@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

void GetMemory( char *p, int num )
{
		// mem leak!
		p = (char*)malloc( sizeof(char) * num );
}

char* GetMemoryFixed( int num )
{
		char* p;
		p = (char*)malloc( sizeof(char) * num );
		return p;
}

void GetMemoryCorrect( char **p, int num )
{
		*p = (char*)malloc( sizeof(char) * num );
}

int main(int argc, char *argv[])
{
		char* str = NULL;
		GetMemory(str, 100);
		// fix
		GetMemoryCorrect(&str, 100);
		// or
		str = GetMemoryFixed(100);
		strcpy(str, "Hello");
		
		return 0;
}
