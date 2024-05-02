#include <stdio.h>

//Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu  valor correspondente em Fahrenheit e em Kelvin.

int main(){
    float temp;
    printf("Informe a temperatura em Celsius:");
    scanf("%f",&temp);
    float fah = (temp*1.8)+32;
    float kel = temp+273;
    printf("\n%.2f C em:\nFahrenheit: %.2f F\nKelvin: %.2f K.", temp, fah, kel);
    return 0;
}