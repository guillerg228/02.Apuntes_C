/* Un carácter es un espacio en blanco si es un blanco ( ), una tabulación (\t), un carácter de nueva línea (\n) o un avance de 
    página (\f). Diseñar y construir un programa que cuente el número de espacios en blanco de la entrada de datos.
*/

#include <stdio.h>

int main() {
    int c;
    int contador = 0;

    printf("Ingrese texto (Ctrl+D para terminar en Linux / Ctrl+Z en Windows):\n");

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n' || c == '\f') {
            contador++;
        }
    }

    printf("\nNumero de caracteres en blanco: %d\n", contador);

    return 0;
}
