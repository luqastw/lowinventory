#include <stdio.h>
#include "item.h"
#include "backpack.h"

int main(){
    initBackpack();

    Item i1 = createItem(10, "Poção", 0.5);
    Item i2 = createItem(5, "Cajado", 5.0);
    Item i3 = createItem(23, "Espada", 7.2);

    addBackpack(i1);
    addBackpack(i2);
    addBackpack(i3);

    printf("Before:\n");
    listBackpack();

    sortBackpackPerID();

    printf("After:\n");
    listBackpack();

    return 0;
}