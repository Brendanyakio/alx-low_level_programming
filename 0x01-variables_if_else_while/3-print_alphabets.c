#include <stdio.h>
/**
 * main - Both capital and small letters
 * Return: 0
 */
int main(void)
{
	char aplha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(aplha[i]);
	}
	putchar('\n');
	return (0);
}
