// Calcular la suma de la serie 1/1 + 1/2 + 1/3 + ... + 1/N donde N es un numero que se introduce por teclado

#include <stdio.h>

int main(){
    int N;
    float suma = 0.0;

    printf("Ingrese N: ");
    scanf("%d", &N);

    for (int i = 1; i <=  N; i++){
        suma += (1.0/(float)i);
    }
    printf("El calculo de la seria para %d terminos es: %.2f", N, suma);
}