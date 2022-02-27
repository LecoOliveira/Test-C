#include<stdio.h>
#include<string.h>

void troca(char *vet) {
    int i, tam;
    tam = strlen(vet);

    for (i = 0; i < tam; i ++){

        switch (*vet)
        {
        case 'a':
            *vet = 'u';
            break;
        case 'e':
            *vet = 'o';
            break;
        case 'i':
            *vet = 'u';
            break;
        case 'o':
            *vet = 'a';
            break;
        case 'u':
            *vet = 'e';
            break;  
        }
    vet++;
    }
}

void imprime (char *vet){
    int i;
    char *ptr;
    ptr = vet;

    for (i = 0; i < strlen(vet); i++){
        printf("%c", *ptr);
        ptr++;
    }
}

int main(){
    char vet [100];
    
    printf("\nDigite uma frase: ");
    
    fgets(vet, 100, stdin);
    troca(vet);
    imprime(vet);

    return 0;
}