/*
    ne pas confondre files a fichier
    creation d'un FIFO(FirstInFirstOut)
    c'est comme une file d'attente le premier venue le premier sortie
*/
#ifndef __FILES__
#define __FILES__

#include <stdio.h>
#include <stdlib.h>

typedef struct Files Files;
typedef struct Cell Cell;

struct Files
{
    int size;
    Cell *firstCell;
    Cell *lastCell;
};

Files* initFiles();
void push(Files *files, double value);
double pop(Files *files);
double value(Files const *files);
void printFiles(Files *files);
void resetFiles(Files *files);

struct Cell
{
    double value;
    Cell *nextCell;
};

Cell* initCell();



#endif