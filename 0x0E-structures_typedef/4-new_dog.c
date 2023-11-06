#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: dog owner
 * Return: newdog is sucess
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a = 0, j = 0, k;
	dog_t *doge;

	while (name[a] != '\0')
		a++;
	while (owner[j] != '\0')
		j++;
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->name = malloc(a * sizeof(doge->name));
	if (doge->name == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (k = 0; k <= a; k++)
		doge->name[k] = name[k];
	doge->age = age;
	doge->owner = malloc(j * sizeof(doge->owner));
	if (doge->owner == NULL)
	{
		free(doge->owner);
		free(doge->name);
		free(doge);
		return(NULL);
	}
	for (k = 0; k <= j; k++)
	       doge->owner[k] = owner[k];
	return (doge);
}
