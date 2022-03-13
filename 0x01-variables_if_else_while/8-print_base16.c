 #include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (success)
*/

int main(void)
{
	int num;
	char alpha;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	alpha = 'a';
	while (alpha >= 'a')
	{
		if (alpha <= 'f')
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
