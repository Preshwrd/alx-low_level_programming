#include "main.h"
/**
* _pow_recursion - to return the value of x
* raised to power y
*@x:the power to used 
*@y: the power to look for 
*Returns: the value of x raise to power y 
*/
int _pow_recursion(int x, int y)
{

  if (y < 0)
	{
      return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	return (1);
}
