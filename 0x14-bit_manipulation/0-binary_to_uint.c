#include "main.h"
/**
 * binary_to_uint - convert a binary number to an unsigned integer
 * @b: pointer to string of 0 and 1 chars
 *
 * The binary_to_uint function converts a binary number to an unsigned integer.
 *
 * Return: the converted number, or 0 if there is one or more chars in the string
 *		 b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return 0;

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			result = (result << 1) | 0;
		else if (b[i] == '1')
			result = (result << 1) | 1;
		else
			return 0;
	}

	return result;
}
