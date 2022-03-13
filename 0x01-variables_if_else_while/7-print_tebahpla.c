#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	char alpha;

	alpha = 'z';
	while (alpha <= 'z')
	{
		if (alpha >= 'a')
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
