/*  creation d'une LIFO(LastInFirstOut)
    une pile 
*/
#ifndef __PILE__
#define __PILE__

#include <stdio.h>
#include <stdlib.h>

typedef struct Pile Pile;
typedef struct Cell Cell;

struct Pile
{
    int size;
    Cell *lastCell;
};
Pile* initPile();
void push(Pile *pile, double value);
double pop(Pile *pile);
double value(Pile* pile);
void printValue(Pile* pile);
void resetPile(Pile* pile);

struct Cell{
    double value;
    Cell *nextCell;
};

Cell* initCell(double value);

#endif