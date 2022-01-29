#include "files.h"

Files* initFiles(){
    Files *files = malloc(sizeof(Files));
    if(files==NULL){
        exit(EXIT_FAILURE);
    }
    files->size=0;
    files->firstCell=NULL;
    files->lastCell = NULL;
    return files;
}

void push(Files *files,double value){
    if(files==NULL){
        exit(EXIT_FAILURE);
    }
    Cell *cell = initCell(value);
    if(files->size ==0){
        files->firstCell = cell;
        files->lastCell = cell;
    }
    else{
        files->lastCell->nextCell = cell;
        files->lastCell = cell;
    }
    files->size++;
}

double value(Files const *files){
    return files->firstCell->value;
}

double pop(Files *files){
    if(files->size<=0 || files==NULL){
        exit(EXIT_FAILURE);
    }
    double val = value(files);
    Cell *cellp = files->firstCell;
    files->firstCell = cellp->nextCell;
    free(cellp);
    files->size--;
    return val;
}

void printFiles(Files* files){
    if(files==NULL){
        exit(EXIT_FAILURE);
    }
    Cell* cellp = files->firstCell;
    while(cellp!=NULL){
        printf("%f -> ", cellp->value);
        cellp = cellp->nextCell;
    }
    printf("NULL (size:%d)\n", files->size);
}

void resetFiles(Files* files){
    while (files->firstCell!=NULL){
        pop(files);
    }
}

Cell* initCell(double value){
    Cell* cell = malloc(sizeof(Cell));
    if(cell==NULL){
        exit(EXIT_FAILURE);
    }
    cell->value = value;
    cell->nextCell = NULL;
    return cell;
}


