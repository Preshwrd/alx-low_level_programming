#include "main.h"
/**
*factorial -to get rhe factorial of a given number
*@n: the number to get the factorial
*Return 1 or -1 if there is an error 
*/
int factorial(int n)
{
  int result = n;

  if (n < 0)
    
     return (-1);
    
  else if (n >= 0 && n <= 1)
    
      return (1);
    
}
