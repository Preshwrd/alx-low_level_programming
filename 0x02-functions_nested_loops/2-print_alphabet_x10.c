#include "main.h"
/**
*print_alphabet_x10- print 10 times the
*alphabet in lower case
*Return: void
*/
void print_alphabet_x10(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if(l * 10)
		_putchar (l);
	}
	_putchar ('\n');
}
