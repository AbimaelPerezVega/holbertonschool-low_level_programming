#include <stdlib.h>
#include "dog.h"
#include <string.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 *new_dog - ...
 *@name: ...
 *@age: ...
 *@owner: ...
 *
 *Return: ...
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *max_dog;
int name_l = 0, own_l = 0;

if (name != NULL && owner != NULL)
{
name_l = strlen(name) + 1;
own_l = strlen(owner) + 1;
max_dog = malloc(sizeof(dog_t));

if (max_dog == NULL)
	return (NULL);

max_dog->name = malloc(sizeof(char) * name_l);

if (max_dog->name == NULL)
{
free(max_dog);
return (NULL);
}
max_dog->owner = malloc(sizeof(char) * own_l);

if (max_dog->owner == NULL)
{
free(max_dog->name);
free(max_dog);
return (NULL);
}
max_dog->name = _strcpy(max_dog->name, name);
max_dog->owner = _strcpy(max_dog->owner, owner);
max_dog->age = age;
return (max_dog);
}
return (NULL);
}
/**
 *_strlen - Return the length of the string
 *@s: strign to count
 *
 *Return: string length
 *
*/
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
s++;
}
return (length);
}
/**
 *_strcpy - copy a string
 *@dest: destination value
 *@src: sorce value
 *
 *Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}
