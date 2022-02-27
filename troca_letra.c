#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){

    char frase[100];
    char i;

    printf("\nDigite uma frase qualquer: ");
    fgets(frase, 100, stdin);

    for (i = 0; i < strlen(frase); i++){
        if (frase[i] == 'a')
            frase[i] = 'u';
        else if (frase[i] == 'e')
            frase[i] = 'o';
        else if (frase[i] == 'i')
            frase[i] = 'u';
        else if (frase[i] == 'o')
            frase[i] = 'a';
        else if (frase[i] == 'u')
            frase [i] = 'a';
    }

    printf ("\n%s", frase);
    

    return(0);
}