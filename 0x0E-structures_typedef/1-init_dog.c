#include "dog.h"
#include <stdio.h>
/**
  * int_dog - initialize a variable of type struct dog
  * @d: pointer to struct dog
  * @name: pointer to dog's name
  * @age: age of dog
  * @owner: pointer to dog's owner
  *
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* check if the pointer is not NULL */
	if (d != NULL)
	{
		/* variables intializations using two ways of notation */
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	/* Void function , no need for return */
}
