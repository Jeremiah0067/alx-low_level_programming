#include "main.h"
#include <stdio.h>

/**
 * main- just needed
 *
 * Return: Always returns 0
 */

int main(void)
{
	int n;

	n = 420;

	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
