#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct representing a dog
 * @name: The name of the dog
 * @age: The age of the dog in years
 * @owner: The name of the dog's owner
 *
 * Description: This struct is used to store basic information
 * about a dog, including its name, age, and owner.
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

void free_dog(dog_t *d);

dog_t *new_dog(char *name, float age, char *owner);
#endif
