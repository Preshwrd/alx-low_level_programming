#include <stdio.h>
/**
* main -print all single digit num of base 10 from 0
*
*Return: Always 0
*/
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar (n + '0');
		n++;
	}

		putchar ('\n');
		return (0);
}
