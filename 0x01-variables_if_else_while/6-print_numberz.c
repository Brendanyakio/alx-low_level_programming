#include <stdio.h>
/**
 * main - other numbers but just use patchar dont use printf
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%d", i);
	}
	putchar('\n');
	return (0);
}
