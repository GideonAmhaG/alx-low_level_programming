#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - dog data
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: details about dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* #ifndef DOG_H_ */
