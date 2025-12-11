#ifndef ITEM_H
#define ITEM_H

typedef struct {
    int id;
    char name[30];
    float weight;
} Item;

Item createItem(int id, char* name, float weigth);
void listItem(Item item);

#endif