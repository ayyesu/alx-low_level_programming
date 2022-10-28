#include "main.h"


/**
*_strlen - function to calculate length of a string
*@b: the string
*Return: Returns length of the string
*/

int _strlen(const char *b)
{
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; *(b + i) != '\0'; i++)
		;
	return (i);
}




/**
*_pow - function to calculate number to power
*@n: the number
*@p: the power
*Return: Returns n^p
*/

int _pow(int n, int p)
{
	int r, i;

	r = n;
	if (n == 0)
		return (0);
	else if (p == 0)
		return (1);
	for (i = 1; i < p; i++)
		r *= n;
	return (r);
}



/**
*binary_to_uint - function that converts binary to decimal
*@b: pointer to the string of binary number to convert
*Return: the convert number if successfull or 0 if fail
*/


unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int num;
	char c;

	num = 0;
	if (b == NULL)
		return (0);
	len = _strlen(b);
	for (i = 0; len >= 0; i++)
	{
		c = *(b + i);
		if (c == '\0')
			break;
		if (c != '0' && c != '1')
			return (0);
		if (c == '1')
		{
			num += (1 * _pow(2, --len));
		}
		else
		{
			--len;
		}
	}
	return (num);
}
