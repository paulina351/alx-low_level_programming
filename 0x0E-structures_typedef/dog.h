#ifndef DOG_H
#define DOG_H

/**
 * struct dog - details of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Description: full details of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
