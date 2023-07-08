#include "main.h"
#include <cmath.h>

/**
 * binary_to_uint -program to convert binary to unsigned int
 * @b: bit to be manipulated
 * Return: always an int
 */

unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result = 2 * result + (b[i] - '0');
	}
	return (result)
}
