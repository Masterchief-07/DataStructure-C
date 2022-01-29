#include <stdio.h>
#include <stdlib.h>
#include "files.h"

int main(){
    Files* files = initFiles();

    push(files, 10);
    push(files, 20);
    push(files, 30);
    push(files, 40);
    push(files, 50);
    push(files, 60);
    printFiles(files);

    pop(files);
    pop(files);
    pop(files);
    pop(files);
    pop(files);
    push(files, 30);
    push(files, 40);
    push(files, 50);
    printFiles(files);

    resetFiles(files);
    printFiles(files);
    return 0;
}