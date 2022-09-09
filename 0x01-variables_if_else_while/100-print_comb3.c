#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different combinations of two digits
 *Numbers must be separated by ,, followed by a space
 *The two digits must be different
 *01 and 10 are considered the same combination of the two digits 0 and 1
 *Print only the smallest combination of two digits
 *Numbers should be printed in ascending order, with two digits
 *You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 *You can only use putchar five times maximum in your code
 *You are not allowed to use any variable of type char
 *All your code should be in the main function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num1 = 0, num2;

	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar(num1 + 48);
				putchar(num2 + 48);

				if (num1 + num2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++num2;
		}
		++num1;
	}
	putchar('\n');

	return (0);
}
