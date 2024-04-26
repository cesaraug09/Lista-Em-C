#include <stdio.h>

//Escreva um programa que leia três números inteiros e calcule a sua média aritmética.//
int main(){
    float n1, n2, n3;
    printf("Informe as tres notas:");
    scanf("%f%f%f", &n1, &n2, &n3);
    float media = ((n1+n2+n3)/3);
    printf("A média eh %.2f", media);
    return 0;
}