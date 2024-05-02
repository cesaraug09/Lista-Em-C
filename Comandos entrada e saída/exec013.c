#include <stdio.h>

//EEscreva um programa que leia um valor em KB e calcule o seu valor correspondente  em bits, bytes, MB e GB.

int main(){
    float KB;
    printf("Informe o valor em KB:");
    scanf("%f",&KB);
    float bits = KB*8000;
    float bytes = KB*1000;
    float MB = KB*0.001;
    float GB = MB*0.001;
    printf("\n%.1fKb sao:\n%.1f bits.\n%.1f bytes.\n%.1f Megabytes.\n%.1f Gigabytes.", KB, bits, bytes, MB, GB);
}