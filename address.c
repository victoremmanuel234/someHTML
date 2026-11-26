#include <stdio.h>
#include <stdlib.h>
 int main(void){
    int *i = malloc(3 * sizeof(int));
    i[0] = 100;
    i[1] = 20;
    i[2] = 30;

    free(i);
 }