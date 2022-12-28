#include <stdio.h>
/**
*main - all possible combination of single digit
*number should be seperated with ","
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

		if (n <= 9)
		putchar (',');
	}
	putchar ('\n');
	return (0);
}
