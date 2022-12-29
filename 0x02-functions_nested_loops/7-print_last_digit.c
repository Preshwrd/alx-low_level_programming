#include "main.h"
/**
*print_last_digit- to print thr last digit of a number
*
*@d: the last digit
*
*Return: last digit
*/
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
		return (l);
}
