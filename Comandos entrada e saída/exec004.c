#include <stdio.h>
#include <math.h>

//Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu  triplo, o seu quadrado, o seu cubo e a sua raiz quadrada.

int main(){
    float n1;
    printf("Informe um numero inteiro positivo:");
    scanf("%f",&n1);
    while(n1<0){
        printf("\nPor favor, informe um numero positivo:");
        scanf("%f",&n1);
    }
    int dobro = n1*2;
    int triplo = n1*3;
    float quadrado = pow(n1,2);
    float cubo = pow(n1,3);
    float raiz = sqrt(n1);
    printf("\nO numero informado foi %f.\nO dobro eh %d.\nO triplo eh %d.\nO quadrado eh %.1f.\nO cubo eh %.1f.\nA raiz eh %.2f.", n1, dobro, triplo, quadrado, cubo, raiz);
    return 0;
}