#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 *  Return: 0 is sucesss
 */

int main(void)
{
	struct dog my_dog;

	my_dog.name = "poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - woof!\n", my_dog.name, my_dog.age);
	return (0);
}
