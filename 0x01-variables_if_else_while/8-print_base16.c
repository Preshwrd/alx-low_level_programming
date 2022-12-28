#include <stdio.h>
/**
*main -print numbers of base 16 in lowercase
*
*Return: Always 0
*/
int main(void)
{
	char l;

	int n;

	n = 0;
	while (n < 10)
	{
		putchar (n + '0');
		n++;
	}

		l = 'a';
	while (l <= 'f')
	{
		putchar (l);
		l++;
	}
	putchar ('\n');
	return (0);
}
