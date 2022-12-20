#include "main.h"
#include <stdio.h>
/**
* puts_half -print half of a string
*@str: print half of the string and if its odd print last n
*/
void puts_half(char *str);
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;

		J = i / 2;
	if (j % 2 == 1)
		j++;

		while (j < i)
		{
			_putchar (str[j]);
			j++;
		}

	_putchar ('\n')


}
