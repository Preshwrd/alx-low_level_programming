#include "main.h"

/**
*int _strspn -to get the length of a prefix
*@s:the number of byte in this segment
*@accept: where s is being pointed to 
*Return: bytes from segment s which consist of accepts
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int l;
	while(*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept [i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
			return (bytes);
		}
		s++;
	}
	return (bytes);
}
