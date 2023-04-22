#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - alphabet witout q and e
 * Return: always 0
 */
int (void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
