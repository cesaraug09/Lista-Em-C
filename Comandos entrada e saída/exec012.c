#include <stdio.h>

//Escreva um programa que leia um valor em polegadas e o converta para centímetros,  considerando que uma polegada equivale a 2.54 cm.
const float cent = 2.54;

int main(){
    float polegadas;
    printf("Informe o valor em polegadas:");
    scanf("%f",&polegadas);
    polegadas = polegadas*cent;
    printf("\n%.2f cm", polegadas);
    return 0;
}