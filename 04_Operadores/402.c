/* Una temperatura Celcius puede ser convertida a una temperatura equivalente F de acuerdo con la siguiente fórmula:
f = 9/5C+32
Escribir un programa que lea la temperatura en celucius y la escriba en F
*/

#include <stdio.h>

int main(){
    float celcius;
    printf("Ingrese la temperatura en celcius: ");
    scanf("%f",&celcius);
    printf("La temperatura en F es: %.2f", ((celcius*(9.0/5.0))+32));

}