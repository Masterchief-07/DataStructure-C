#include "hashtable.h"

int hashage(const char* charactere){
    int i=0;
    while(*charactere != '\0'){
        //printf("%c", *charactere);
        i+=(int)*charactere;
        charactere++;
    }
    return i%100;
}
