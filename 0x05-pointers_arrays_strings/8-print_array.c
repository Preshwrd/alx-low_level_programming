#include "main.h"
#include <stdio.h>
/**
* print array -print n element
*@a: pointer to a
*@n: print element of n
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(',');
			printf(' ');
		}
	}
	printf('\n');
}
