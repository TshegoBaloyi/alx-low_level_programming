#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
int w, z;
	if (argc == 3)
{
	w = atoi(argv[1]);
	z = atoi(argv[2]);
	printf("%d\n", w * z);
	return (0);
}
	printf("Error\n");
return (1);
}
