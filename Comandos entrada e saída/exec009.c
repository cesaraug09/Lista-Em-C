#include <stdio.h>

//Escreva um programa que leia o valor de uma distância percorrida em km e o tempo  gasto em horas e calcule a velocidade média em m/s.

float KmMetros(float dist){
    return dist*1000;
}

float horasMinutos(float temp){
    return temp*3600;
}

int main(){
    float dist, temp;
    printf("Informe a distancia percorrida em KM:");
    scanf("%f",&dist);
    printf("\nInforme o tempo gasto em HORAS:");
    scanf("%f",&temp);
    float metros = KmMetros(dist);
    float segundos = horasMinutos(temp);
    float velMedia = metros/segundos;
    printf("\nA velocidade media foi de %.2f M/s", velMedia);
    return 0;
}