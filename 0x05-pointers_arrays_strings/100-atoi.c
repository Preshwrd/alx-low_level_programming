#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _atoi - convert a string to integer
* @s: pointing to the string to b converted
* Return: n * sign
*/
int _atoi(char *s)
{
	int sign;
	unsigned int n;
	char *temp;

	temp = s;
	n = 0;
	sign = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
		sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			n = n * 10 + (*temp - '0');
				temp++;
			} while (*temp >= '0' && *temp <= '9');
	}
	return (n * sign);
}
