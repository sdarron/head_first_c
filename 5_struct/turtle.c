#include <stdio.h>

typedef struct {
    const char *name;
    const char *species;
    int age;
}turtle;

void happy_birthday(turtle *a)
{
    a->age = a->age + 1;
    printf("С днем родения, %s! Теперь тебе %i лет!\n", a->name, a->age);
}

int main()
{
    turtle myrtle = {"Тортилла", "Кожистая черепаха", 99};
    happy_birthday(&myrtle);
    printf("%s прожила %i лет.\n", myrtle.name, myrtle.age);
    return (0);
}