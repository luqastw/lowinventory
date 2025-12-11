#include <stdio.h>
#include <string.h>
#include "item.h"

Item createItem(int id, char* name, float weight){
    Item new;

    new.id = id;
    new.weight = weight;
    strncpy(new.name, name, 29);
    new.name[29] = '\0';

    return new;
}

void listItem(Item item){
    printf("ID: %d | Name: %-15s | Weight: %.2f kg\n", item.id, item.name, item.weight);
}