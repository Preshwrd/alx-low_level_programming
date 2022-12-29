#include "main.h"
/**
*print_sign- prints the sign of a number
*
*@n: the int to be printed
*
*Return: 1 if is greater than 0,
*return 0 if its 0, and return -1 if its less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	}
	else if (n == 0)
	{
		_putchar (0);
		return (0);
	}
	else
	{
		_putchar(-);
		return (-1);
}
