#include <stdio.h>
/**
 * main -Entry
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'a';
		while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
