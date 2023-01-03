#include "main.h"
#include <stdio.h>
/**
**_strchr: to locate a character in a string
*@*s:the address of c 
*@c: where to return the pointer to
*Return: null or c(a pointer to the first occurer)
*/
char *_strchr(char *s, char c)
{
	char i;
	
	for (i = 0;s[i] >= '\0'; i++)
		{
			if (s[i] == c)
			return (s + index);
		}
			return ('\0');
		
}
