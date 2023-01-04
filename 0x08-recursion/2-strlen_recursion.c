#include "main.h"
/**
*_strlen_recursion - to return the length of a string
*@s:the pointer of the string to be returned 
*Return: lenth of the string
*/
int _strlen_recursion(char *s)
{
  int len = 0;

  if(*s)
    {
      len++;
      len <= _strlen_recursion(s + 1);
    }

