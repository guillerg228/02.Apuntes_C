//Escribir un programa para mostrar, mediate bucles, los codigos ASCII de la letras mayusculas y minusculas

#include <stdio.h>

int main() {
    char c;

    printf("Letras mayusculas y sus codigos ASCII:\n");
    for (c = 'A'; c <= 'Z'; c++) {  // Se toma desde el valor numerico de 'A' hasta el valor numerico de 'Z'
        printf("%c -> %d\n", c, c);
    }

    printf("\nLetras minusculas y sus codigos ASCII:\n");
    for (c = 'a'; c <= 'z'; c++) {  // Se toma desde el valor numerico de 'a' hasta el valor numerico de 'z'
        printf("%c -> %d\n", c, c);
    }

    return 0;
}