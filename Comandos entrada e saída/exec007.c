#include <stdio.h>

//Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a sua área.

int main(){
    float base, altura, area;
    printf("Informe a base e a altura do triangulo:");
    scanf("%f%f",&base,&altura);
    area = (base*altura)/2;
    printf("\nA area eh %.1f", area);
    return 0;
}