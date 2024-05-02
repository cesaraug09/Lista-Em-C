#include <stdio.h>
#include <math.h>

//Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua  área e o seu comprimento.
const float pi = 3.14;

int main(){
    float raio;
    printf("Informe o raio da circunferencia:");
    scanf("%f",&raio);
    float area = (pow(raio,2))*pi;
    float comprimento = (pi*2)*raio;
    printf("\nA area eh %.2f.\nO comprimento eh %.2f", area, comprimento);
    return 0;
}