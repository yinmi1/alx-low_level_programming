#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments in a program
 * @agrc: number of arguments
 * @agrv: array of arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);

}

