#include <stdio.h>
/**
 * * main - Entry point
 *
 * *
 *
 * * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i = 0;
	char c = '0';
	char h = 'a';

	while (i < 16)
	{
		if (i <= 9)
		{
			putchar(c);
		}
		else
		{
			putchar (h);
			h++;
		}
		c++;
		i++;
	}
	putchar ('\n');
	return (0);
}
