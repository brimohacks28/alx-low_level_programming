#include "main.h"
#include <stdio.h>
#define passive(y) (void)(x)
/**
 * main - Execution of code begins
 * @argc: offset count
 * @argv: offset value
 * Return: 0 is sucess
 *
 */

int main(int argc, char *argv[])
{
	passive(argc);
	printf("%s\n", argv[0]);
	return (0);
}
