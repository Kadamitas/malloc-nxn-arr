#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n =5;
    int ** arr_2D = (int** )malloc(sizeof(int*) * n);
    for(int i = 0; i<n;i++){
        arr_2D[i] = (int*) malloc(sizeof(int)*n);
    }
    return 0;
}