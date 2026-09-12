//Determinar si un numero dado leido del teclado es primo o no

#include <stdio.h>

int main(){
    int numIng, esPrimo = 1;
    printf("Ingrese un numero para determinar si es primo o no: ");
    scanf("%d", &numIng);

    if (numIng <= 1) {
        esPrimo = 0;  //Si el numero es negativo o 1, no es primo. Se salta el else y entra en el while
    } else {
        for (int i = 2; i < numIng; i++) {
            if (numIng % i == 0) { // Si encuentra un divisor diferente al numero ingresado no es primo
                esPrimo = 0;
                break;  // Se rompe el for.
            }
        }
    }if (esPrimo == 1) printf("%d SI es primo", numIng);
    else printf("%d NO es primo", numIng);
}