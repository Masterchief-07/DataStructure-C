#include <stdio.h>
#include <stdlib.h>
#include "hashtable.h"

int main(){

    char hello[] = "hel";
    int helloHash = hashage(hello);
    printf("%d\n", helloHash);

    return 0;
}