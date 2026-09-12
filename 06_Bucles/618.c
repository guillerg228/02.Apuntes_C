// Encontrar el numero mayor de una serie de numero reales

#include <stdio.h>

int main(){
    float num, may;

    printf("\nIngrese un numero real: ");
    scanf("%f", &num);
    may = num;

    do{
        printf("\nIngrese un numero real: ");
        scanf("%f", &num);

        if (num > may) may = num;
    } while (num != -1);
}