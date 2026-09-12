// Cuadro magico

#include <stdio.h>

int main() {
    int n;

    do {
        printf("Ingrese un numero impar entre 3 y 11: ");
        scanf("%d", &n);
    } while (n < 3 || n > 11 || n % 2 == 0);

    int i, j, valor;

    printf("\nCuadrado magico de orden %d:\n\n", n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            valor = n * ((i + j + (n - 1) / 2) % n) + ((i + 2 * j + 1) % n) + 1;  //Esta es la formula, posteriormente lo hare con arreglos siguiendo el algoritmo
            printf("%4d", valor); 
        }
        printf("\n");
    }

    return 0;
}
