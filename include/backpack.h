#ifndef BACKPACK_H
#define BACKPACK_H
#include "item.h"

#define MAX_ITEMS 10

void initBackpack();
int addBackpack(Item newitem);
void listBackpack();
void sortBackpackPerID();

#endif