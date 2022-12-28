#include <stdio.h>
/**
*main- all possible combination of single digit
*number should be seperated with ","
* Return : Always 0
*/
int main(void)
{
	char n;
	
	n = 0;
	while (n < 10)
	{
		putchar (n + '0');

	if (n < 9)
		putchar (',');
		n++;
	}
	putchar ('\n');
	return (0);
}
