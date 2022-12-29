#include "main.h"
/**
*_isalpha- check for alphabetic character
*
*@c: to check if its lowar case or not
*
*Return: 1 if its lower or upper case else 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}
