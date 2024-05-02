#include <stdio.h>
#include <string.h>

//Escreva um programa que leia uma palavra e calcule o seu comprimento.

int main(){
    char palavra[100];
    int cont=0;
    printf("Escreva uma palavra:");
    scanf("%s",&palavra);
    while(palavra[cont]!='\0'){
        cont++;
    }
    printf("\nA palavra %s tem %d letras.",palavra, cont);
    return 0;
}