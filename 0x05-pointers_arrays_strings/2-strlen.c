#include "main.h"
#include <stdio.h>

/**
* _strlen - Compute Length of string
*
* @s: string to find its length
* Return: lenght of string
*/

int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}
