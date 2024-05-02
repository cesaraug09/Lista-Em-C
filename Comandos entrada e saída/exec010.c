#include <stdio.h>
#include <math.h>

//Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e  calcule o valor da hipotenusa.

int main(){
    float cat1,cat2;
    printf("Informe o primeiro cateto:");
    scanf("%f",&cat1);
    printf("\nInforme o segundo cateto:");
    scanf("%f",&cat2);
    float hipQuad = (pow(cat1,2))+(pow(cat2,2));
    float hip = sqrt(hipQuad);
    printf("\nO valor da hipotenusa eh %.1f",hip);
    return 0;
}