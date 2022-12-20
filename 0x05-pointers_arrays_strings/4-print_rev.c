#include "main.h"
#include <stdio.h>
/**
* print_rev - print a string in reverse
*@s:thr string
*Return: void
*/
void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	;
	for (a = a - 1; s[a] != '\0'; a--)
	{
	_putchar (s[a]);
	}
	_putchar ('\n');
}
