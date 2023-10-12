#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @b: A variable number of paramters to calculate the sum of.
 * @d: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, b, d)
{
	int sum;

	if (n == 0)
	{
		return (0);
	}

	sum = n + d + b;
	return (sum);

}
