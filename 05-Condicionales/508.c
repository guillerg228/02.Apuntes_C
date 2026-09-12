/* Escribir un programa que determine su un año es bisiest. Un año es bisiesto si es multiplo de cuatro,
sin embargo los años multiplos de 100 solo son bisiestos si también son multiplos de 400*/

#include <stdio.h>

int main(){

    int anio;
    printf("Ingrese un a%co para determinar si es bisiesto: ",164);
    scanf("%d", &anio);

    if ((anio%100 != 0 && anio%4 == 0) || anio%400 == 0) printf("%d es un a%co bisiesto",anio,164);
    else printf("%d no es un a%co bisiesto",anio,164);
}