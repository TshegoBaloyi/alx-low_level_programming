#include <stdio.h>
/**
 * main - prints alphabets
 * Return: always 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; 1 < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
