#include <stdio.h>
#include <string.h>

typedef struct  island {
    char *name;
    char *opens;
    char *closes;
    struct island *next;    
} island;

void display(island *start)
{
    island *i = start;
    for (; i != NULL; i = i->next) {
        printf("Название: %s открыт: %s-%s\n", i -> name, i -> opens, i -> closes);
    }
}


int main()
{
    island amity = {"остров Дружбы", "09:00", "17:00", NULL};
    island craggy = {"остров Скалистый", "09:00", "17:00", NULL};
    island isla_nublar = {"остров Туманный", "09:00", "17:00", NULL};
    island shutter = {"остров Проклятых", "09:00", "17:00", NULL};
    amity.next = &craggy;
    craggy.next = &isla_nublar;
    isla_nublar.next = &shutter;
    island skull = {"остров Черепа", "09:00", "17:00", NULL};
    isla_nublar.next = &skull;
    skull.next = &shutter;
    display(&amity);
    return (0);
}



