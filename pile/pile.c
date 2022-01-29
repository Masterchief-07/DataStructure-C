#include "pile.h"

Pile* initPile(){
    Pile *pile = malloc(sizeof(Pile));
    pile->size = 0;
    pile->lastCell = NULL;
    return pile;
}

void push(Pile *pile, double value){
    if(pile->size == 0){
        pile->lastCell = initCell(value);
    }
    else{
        Cell *cell = initCell(value);
        cell->nextCell = pile->lastCell;
        pile->lastCell = cell;
    }
    pile->size++;
}

double value(Pile *pile){
    return pile->lastCell->value;
}

double pop(Pile *pile){
    if (pile->size > 0){
        double value = pile->lastCell->value;
        Cell *cellp = pile->lastCell;
        pile->lastCell = cellp->nextCell;
        free(cellp);
        pile->size--;
        return value;
    }
    else{
        exit(EXIT_FAILURE);
        return 0;
    }
}

void printValue(Pile* pile){
    Cell *cellp = pile->lastCell;
    while(cellp != NULL){
        printf("%f -> ", cellp->value);
        cellp = cellp->nextCell;
    }
    printf(" NULL  (size:%d)\n", pile->size);
}

void resetPile(Pile* pile){
    while(pile->size!=0){
        pop(pile);
    }
}

Cell* initCell(double value){
    Cell *cell = malloc(sizeof(Cell));
    cell->value = value;
    cell->nextCell = NULL;
    return cell;
}