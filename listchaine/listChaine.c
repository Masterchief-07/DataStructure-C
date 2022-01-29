#include "listChaine.h"
typedef struct list list;
typedef struct cell cell;


//list functions
void initList(struct list* liste){
    int size =0;
    liste->firstCell = NULL;
}

void push(struct list* liste, double value){
    cell *newcell = malloc(sizeof(cell));
    initCell(newcell, value);
    if(liste->firstCell == NULL){
        liste->firstCell = newcell;
    }
    else{
        newcell->nextCell = liste->firstCell;
        liste->firstCell = newcell;
    }
    liste->size++;
}

void pop(list* liste){
    cell *point = liste->firstCell;
    liste->firstCell = liste->firstCell->nextCell;
    free(point);
    liste->size--;
}

void printValue(list* liste){
    cell *point = liste->firstCell;
    while(point != NULL){
        printf("%f ->", point->m_value);
        point = point->nextCell;
    }
    printf("NULL  (size=%d) \n", liste->size);
}

void reset(list* liste){
    while(liste->firstCell != NULL){
        pop(liste);
    }
}

//cell functions
void initCell(struct cell* celle, double value){
    celle->m_value =value;
    celle->nextCell = NULL;
}

void insertCell(list* liste, int pos, double value){
    if(pos==0){
        push(liste, value);
    }
    else if(pos<=liste->size){
        cell* cellp = liste->firstCell;
        for(int i=1; i<pos; i++){
            cellp = cellp->nextCell;
        }
        cell* newCell = malloc(sizeof(cell));
        initCell(newCell, value);
        newCell->nextCell = cellp->nextCell;
        cellp->nextCell = newCell;
        liste->size++;
    }
    else{
        exit(EXIT_FAILURE);
    }
}

void removeCell(list* liste, int pos){
    if(pos==0){
        pop(liste);
    }
    else if(pos<liste->size){
        cell* cellp = liste->firstCell;
        for (int i=1; i<pos; i++){
            cellp = cellp->nextCell;
        }
        cellp->nextCell = cellp->nextCell->nextCell;
        liste->size--;   
    }
    else{
        exit(EXIT_FAILURE);
    }
}

