
#include <stdio.h>

struct exercise {
    const char *description;
    float duration;
};

struct meal {
    const char *ingrediens;
    float weight;
};

struct preferens {
    struct meal food;
    struct exercise exercise;
};

struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferens care;
};

void catalog(struct fish f)
{
    printf("%s - это %s c %i зубами. Ему %i года.\n", 
    f.name, f.species, f.teeth, f.age);
}

void label(struct fish f)
{
    printf("Кличка:%s\nРазновидность:%s\n%i года, %i зубов.\n", 
    f.name, f.species, f.age, f.teeth);
    printf("Давать %2.2f кг %s и разрешать %s на протяжении %2.2f часов\n",
    f.care.food.weight, f.care.food.ingrediens, 
    f.care.exercise.description, f.care.exercise.duration);
}

int main()
{
    struct fish snappy = {"Зубастик", "пиранья", 69, 4, 
    {{"мясо", 0.09}, {"купатьcя в джакузи", 7.5}}};
    catalog(snappy);
    label(snappy);
    return (0);
}

