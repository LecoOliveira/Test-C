#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void inicializa (int *num){
    int i;

    for (i = 0; i < 100; i++){
        *num = 0;
        num++;
    }
}

void preenche (int *num){
    int i;

    for (i = 0; i < 100; i++){
        *num = 99 -i;
        num++;
    }
}

int main(){
    int numero[10][10];
    int i, j;

    inicializa(numero);
    preenche(numero);

    for (i = 0; i < 10; i++){
        printf("\n");
        for (j = 0; j < 10; j++)
            printf("%d%d = %.2d ", i, j, numero[i][j]);
    }
    printf("\n");
}