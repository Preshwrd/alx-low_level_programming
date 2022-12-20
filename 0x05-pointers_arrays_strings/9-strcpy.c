#include "main.h"
#include <stdio.h>
/**
*_strcpy - copy sting src to dest
*@dest: location to be copied to
*@src: source of the string to be copied
* Return: copy
*/
char *_strcpy(char *dest, char *src)
{
	char *tmp = dest

	while (*src != '\0')

	{
		*dest = *src
		dest++;
		src++;
	}
		*dest = '\0';
		return (tmp);
}
