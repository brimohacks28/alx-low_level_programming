#include "main.h"
/**
 * main - code Execution  begins
 * commandline - whats my name
 * @argc: the no of commmand line args
 * @argv: An array of command line arguments
 *
 * Return: 0 is sucess
 */

int commandline(int argc, char *argv[])
{
	if (argc > 0 && argv[0] != NULL)
       	{
		printf("%s\n", argv[0]);
	}
	return(0);
}

int main(int argc, char *argv[])
{
	return commandline(argc, argv);
}
