#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structures dog
 * @name: attribute pointer to char name's dog
 * @age: Represent age of dog
 * @owner: attribute for the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

