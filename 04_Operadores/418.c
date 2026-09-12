/* Escribir un programa que lea la hora de un día en notación de 24 horas y la respuesta en noracion de 12 horas
*/

#include <stdio.h>

int main() {
    int hora24, minuto;
    int hora12;
    char sufijo;

    printf("Introduce la hora en formato 24h (HH:MM): ");
    scanf("%d:%d", &hora24, &minuto);

    // Determinar AM o PM usando operador ternario
    sufijo = (hora24 <= 12) ? 'A' : 'P';

    // Convertir a formato 12 horas
    hora12 = hora24 % 12;
    hora12 = (hora12 == 0) ? 12 : hora12;

    printf("La hora en formato 12h es: %02d:%02d %cM\n", hora12, minuto, sufijo);

    return 0;
}