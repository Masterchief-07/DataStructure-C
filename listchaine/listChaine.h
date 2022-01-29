#ifndef __LISTCHAINE__
#define __LISTCHAINE__

#include <stdio.h>
#include <stdlib.h>

//creation d'une liste chaine 
//c'est un array dinamique qui permet de relier les elements les uns aux autres

typedef struct list list;
typedef struct cell cell;


struct list{
    int size;
    cell* firstCell;
};

void initList(struct list*);

void push(struct list*, double value);

void pop(list *liste);

void printValue(list* liste);

void reset(list* liste);

void insertCell(list* liste, int pos, double value);
 
void removeCell(list* liste, int pos);

struct cell{
    double m_value;
    cell* nextCell;
};

void initCell(struct cell*, double);



#endif