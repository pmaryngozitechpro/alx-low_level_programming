#include <stdio.h>

/**
 * main - prints numbers between 0 to 9 and letter a to f
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; 1++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
