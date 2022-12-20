#include "main.h"
#include <stdio.h>
/**
* string - reverse a string
* @s: reverse the string pointing to s
* Return: rev_string
*/
void rev_string(char *s)
{
	int i, j, k, temp;

	i = 0;

	while (s[i] != '\0')
{
		i++;
}
	k = 0;
	j = i - 1;
	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}