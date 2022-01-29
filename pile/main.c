#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

int main(){
    Pile* pile = initPile();
    push(pile, 10);
    push(pile, 20);
    push(pile, 30);
    push(pile, 40);
    push(pile, 50);
    printValue(pile);

    pop(pile);
    printValue(pile);

    resetPile(pile);
    printValue(pile);
    
    return 0;
}