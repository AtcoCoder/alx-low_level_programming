#ifndef DOG_H
#define DOG_H



/**
 * struct dog - short description
 *
 * @name: pointer to char
 * @age: float value
 * @owner: pointer to character
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog - short description
 *
 * @name: pointer to character
 * @age: float value
 * @owner: pointer to character
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


#endif
