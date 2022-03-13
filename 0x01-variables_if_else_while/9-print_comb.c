#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int combination;

	combination = '0';
	while (combination < '9')
	{
		putchar(combination);
		putchar(',');
		combination++;
	if (combination == '9')
		putchar(combination);
	}
	putchar('\n');
	return (0);
}
