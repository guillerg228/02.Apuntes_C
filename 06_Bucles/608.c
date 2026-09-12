/* Aproximacion del numero e^{x} tomando un x dado*/

#include <stdio.h>

int main() {
    int x;
    double exp = 1.0;   // término i = 0
    double termino = 1.0;

    printf("Ingrese un numero x para calcular e^x: ");
    scanf("%d", &x);

    for (int i = 1; i <= 100; i++) {
        termino = termino * x / i;
        exp += termino;
    }

    printf("\n-> Aproximacion: e^%d = %.10f\n", x, exp);

    return 0;
}
