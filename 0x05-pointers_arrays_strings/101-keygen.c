#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - generate random valid password
*Return: 0
*/
int main(void)
{
	int p, s;

	srand(time(NULL));
	s = 0;
	while (s <= 2645)
	{
		p = (rand() % 128);
		s += p;
		printf("%c", p);
	}
	printf("%c", 2772 - sum);
	return (0); 
}
