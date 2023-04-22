#include<stdio.h>
/**
 * main - prints reverse
 * Return: always zero
 */
int main(void)
{
	char ch;

	for (ch = 'z', ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

