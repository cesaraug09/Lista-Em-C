#include <stdio.h>
#include <string.h>

//Escreva um programa que leia uma palavra e um número inteiro k e identifique a k ésima letra da palavra informada pelo usuário.

int main(){
    int n;
    char palavra[100];
    printf("Escreva uma palavra:");
    scanf("%s",palavra);
    printf("Agora digite a posicao da letra:");
    scanf("%d",&n);
    printf("\nA %d letra da palavra %s eh %c",n, palavra, palavra[n-1]);
    return 0;
}