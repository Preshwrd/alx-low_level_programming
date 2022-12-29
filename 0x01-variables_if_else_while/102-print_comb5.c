#include <stdio.h>
/**
*main- print all combination of two digits
*ranging from 0 to 99
*seperated by comma and space
*Return: Always 0
*/
int main(void)
{
	int n;

	int j;

	for (n = 0; n < 100; n++)
	{
		for (j = 0; j < 100; j++)
		{
			if (j > n)
			{
				putchar (n / 10 + '0');
				putchar (n % 10 + '0');
				putchar (' ');
				putchar (j / 10 + '0');
				putchar (j % 10 + '0');

				if (n * 100 + j != 9899)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
