#include "main.h"
#include <stdio.h>
/**
*print_to_98- print all natural numbers from
*n to 98
*seperated by comma and space
*last number should b 98
*@n: number to b printed out
*Return: all natural numbers
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n--);
		}
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
			printf("%d\n", n);
		}
	}
}

