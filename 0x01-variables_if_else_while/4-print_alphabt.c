#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters except q and e
 *You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 *All your code should be in the main function
 *You can only use putchar twice in your code
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
			++alphabet;
		putchar(alphabet);
		++alphabet;
	}
	putchar('\n');

	return (0);
}
