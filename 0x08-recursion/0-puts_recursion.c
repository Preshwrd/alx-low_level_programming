#include "main.h"
#include <stdio.h>
/**
*_puts_recursion -to print a string
*@s:pointer of  the string
*Return: string
*/
void _puts_recursion(char *s)
{
    if (*s)
    {
        putchar (*s);
        _puts_recursion(s + 1);
    }
    else
        putchar('\n');
}
