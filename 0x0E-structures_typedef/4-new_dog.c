#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - prints the length of a string
 * @s: string to be evaluated
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}

/**
 * *_strcpy - function that copies a string
 * including the terminating null byte
 * to a buffer
 * @dest: pointer to the buffer to which we copy the string
 * @src: string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int m, n;

	m = 0;

	while (src[m] != '\0')
	{
		m++;
	}

	for (n = 0; n < m; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return (dest);
}

/**
 * new_dog - functin that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), otherwise return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int m1, m2;

	m1 = _strlen(name);
	m2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (m1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (m2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
