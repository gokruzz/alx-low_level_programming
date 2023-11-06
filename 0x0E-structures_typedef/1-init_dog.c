#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - initialize a variable of type struct dog
  * @d: pointer to struct dog
  * @name: pointer to dog's name
  * @age: age of dog
  * @owner: pointer to dog's owner
  *
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
