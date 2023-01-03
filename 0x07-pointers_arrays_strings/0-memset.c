#include "main.h"
#include <stdio.h>
/**
*_memset -fills memory with constant byte
*@char *s:where pointers should be returned 
*@char b: constant byte to fill memory pointed to by s
*@un int n: where to feel the constant byte
*Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned int *memory = s ,value = b;

	for (index = 0; index < n; index++)
			memory[index] = value;

			return (memory);
}
