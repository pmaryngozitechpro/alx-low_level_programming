#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Sixe of a char: %lu byte(s)\n",(unsigned long)sizeof(a));
printf("Sixe of a int: %lu byte(s)\n",(unsigned long)sizeof(b));
printf("Sixe of a long int: %lu byte(s)\n",(unsigned long)sizeof(c));
printf("Sixe of a long long int: %lu byte(s)\n",(unsigned long)sizeof(d));
printf("Sixe of a float: %lu byte(s)\n",(unsigned long)sizeof(f));

return (0);
}
