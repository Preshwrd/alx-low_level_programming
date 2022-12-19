#include "main.h"
#include <stdio.h>
/**
* print rev -print a string in reverse
*@s:thr string
*Return: string
*/
void print_rev(char *s);
{
	int i, a;

	a = 0;

	while (s[a] != '\0')
		a++;

		for (i = a - 1; i >= 0; a-- ;)
	{
		_putchar (s[i]);
	}
		_putchar ('\n')

}
