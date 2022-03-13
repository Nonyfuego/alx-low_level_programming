#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	num = '0';
	while (num < '9')
	{	
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
		if (num == '9')
		{
			putchar(num);
		}
	}

	return (0);
}
