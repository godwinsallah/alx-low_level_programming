#include "main.h"
#include <cmath.h>

/**
 * binary_to_uint -program to convert binary to unsigned int
 * @b: bit to be manipulated
 * Return: always an int
 */

unsigned int binary_to_uint(const char *b)
{
	int c = 0;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (; b[c]; c++)
	{
		if (b[c] < '0' || b[c] > '1')
			return (0);
		result = 2 * result + (b[c] - '0');
	}
	return (result)
}
