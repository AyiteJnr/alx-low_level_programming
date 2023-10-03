#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program entry point
 *
 * @ac: Number of command-line arguments
 * @av: Array of command-line arguments
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int result;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	result = create_file(av[1], av[2]);
	printf("-> %i)\n", result);
	return (0);
}
