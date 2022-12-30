#include "main.h"
#include <stdio.h>
/**
*print _to_98- print all natural numbers from 
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
		printf ("%d, ", n--);
		printf ("%d/n", n);
	}
	while (n < 98) 
	{
		printf ("%d, ", n++);
		printf ("%d/n", n);
	}
		
	_putchar ('\n');
}

