#include <stdio.h>
/**
*main - print lower case alphabet in reverse 
*
*Return: Always 0
*/
int main(void)
{
	char a,
	
	l = 'z';
	while (l >= 'a')
	{
		putchar (l);
		--l;
	}
	putchar ('\n');
	return (0);
}
