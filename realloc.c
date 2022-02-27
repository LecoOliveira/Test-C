#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char lista[0];
    char nome[20];
    char *p_lista;
    p_lista = lista;
    
    printf("Digite um nome para acrescentar na lista:  ");
    fgets(nome, 20 ,stdin);
    //printf("%s", nome);

   

    return 0;
}