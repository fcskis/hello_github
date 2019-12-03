#include <stdio.h>

int max(int a, int b)
{
	int retval=a;

	if (a <  b)
		retval = b;

	return retval;
}
