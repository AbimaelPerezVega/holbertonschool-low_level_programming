#ifndef DOG_H
#define DOG_H
/**
 *struct dog - this is dog
 *@name: name of dog
 *@owner: owner of dog
 *@age: age of dog
 *
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner); 
#endif /* DOG_H */