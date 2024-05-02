#include <stdio.h>

//Escreva um programa que leia três números e seus respectivos pesos e calcule a sua  média ponderada.

int main(){
    float n1,n2,n3;
    printf("Informe tres numeros:");
    scanf("%f%f%f",&n1,&n2,&n3);
    float peso1,peso2,peso3;
    printf("\nAgora informe os respectivos pesos:");
    scanf("%f%f%f",&peso1,&peso2,&peso3);
    float mediaP = ((n1*peso1)+(n2*peso2)+(n3*peso3))/3;
    printf("\nA media ponderada eh %.2f",mediaP);

    return 0;
}