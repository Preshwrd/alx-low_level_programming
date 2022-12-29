#include "main.h"
/**
*print_alphabet_x10- print 10 times the
*alphabet in lower case
*Return: void
*/
void print_alphabet_x10(void)
{
	char l;
	int n = 0;

	while (n++ <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar (l);
		}
	_putchar ('\n');
	}
}
