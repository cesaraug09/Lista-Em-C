#include <stdio.h>

// Escreva um programa que leia um número inteiro e informe o seu antecessor e o seu  sucessor.

int main(){
    int n;
    printf("Informe um numero inteiro:");
    scanf("%d",&n);
    int ant = n-1;
    int suc = n+1;
    printf("O antecessor do numero %d eh %d e o sucessor eh %d", n, ant, suc);
    return 0;
}