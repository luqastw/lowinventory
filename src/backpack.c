#include <stdio.h>
#include "backpack.h"

static Item backpack[MAX_ITEMS];
static int count = 0;

void initBackpack(){
    count = 0;
}

int addBackpack(Item newItem){
    if (count >= MAX_ITEMS){
        printf("Error: Backpack full! Limit: %d.\n", MAX_ITEMS);
        return 0;
    }

    backpack[count] = newItem;
    count++;
    return 1;
}

void listBackpack(){
    printf("\n--- Backpack: (%d/%d) ---\n", count, MAX_ITEMS);
    if (count == 0){
        printf("Empty backpack.\n");
        return;
    }

    for (int i = 0; i < count; i++){
        listItem(backpack[i]);
    }
    printf("\n");
}

void sortBackpackPerID(){
    if (count < 2) return;
    Item temp;

    for (int i = 0; i < count -1; i++){
        for (int j = 0; j < count - i - 1; j++){
            if (backpack[j].id > backpack[j+1].id){
                temp = backpack[j];
                backpack[j] = backpack[j+1];
                backpack[j+1] = temp;
            }
        }
    }
    printf("Backpack sorted by Bubble Sort.\n");
}
