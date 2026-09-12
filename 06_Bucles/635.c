//Escribir y ejecutar un programa que invierta los digitos de un numero positivo dado

#include <stdio.h>

int main(){

    int num, invertido = 0;

    do {
        printf("Ingrese un numero entero positivo: ");
        scanf("%d", &num);
    } while (num <= 0);

    while (num > 0) {
        invertido = invertido * 10 + (num % 10);
        num /= 10;
    }

    printf("Numero invertido: %d\n", invertido);

    return 0;
}