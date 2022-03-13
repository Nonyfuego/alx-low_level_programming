#include <stdio.h>

/**
* main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int current_num = 0;

	while (current_num < 10)
	{
		printf("%d", current_num);
		current_num++;
	}
	printf("\n");
	return (0);
}
