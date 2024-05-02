#include <stdio.h>
#include <math.h>

//Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e o  seu perímetro.

int main(){
    float lado;
    printf("Informe o lado do quadrado:");
    scanf("%f",&lado);
    float area = pow(lado, 2);
    float perimetro = lado*4;
    printf("\nA area eh:%.2f\nO perimetro eh %.2f", area, perimetro);
    return 0;
}