#include "main.h"
#include <stdio.h>
/**
* puts2 -print every other character
* @str: print first character and others
*/
void puts2(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{ _putchar(str[i]); }

	i++;
	}
		_putchar ('\n');
}
