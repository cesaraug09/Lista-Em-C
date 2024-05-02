#include <stdio.h>

//Escreva um programa que leia um valor em real, a cotação atual do dólar e calcule o  valor informado pelo usuário em dólares.

int main(){
    float real;
    float dolar;
    printf("Informe um valor do real:");
    scanf("%f",&real);
    printf("\nInforme a cotacao do dolar:");
    scanf("%f",&dolar);
    float convert = real * dolar;
    printf("\n%.2f Reais em Dolar esta valendo: %.2f", real, convert);
}