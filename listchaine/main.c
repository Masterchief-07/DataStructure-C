#include<stdio.h>
#include <stdlib.h>
#include "listChaine.h"

int main(int argc, char* argv[]){

    list *tableau = malloc(sizeof(list));
    initList(tableau);
    push(tableau, 10);
    push(tableau, 20);
    push(tableau, 30);
    push(tableau, 40);
    push(tableau, 50);

    printValue(tableau);

    insertCell(tableau, 0, 90);
    printValue(tableau);

    removeCell(tableau, 5);
    printValue(tableau);

    pop(tableau);
    printf("apres le pop\n");
    printValue(tableau);

    printf("apres le reset\n");
    reset(tableau);
    printValue(tableau);

    return 0;
}