/* Escribir un programa que desglose cierta cantidad de segundos introducida por teclado en su equivalente en
semanas, dias, horas, minutos y segundos
*/

#include <stdio.h>

int main(){

    long int segundos;
    int semanas, dias, horas, minutos;
    printf("Ingrese la cantidad de segundos: ");
    scanf("%ld",&segundos);

    semanas = segundos/604800; segundos -= (semanas*604800);
    dias = segundos/86400; segundos -= (dias*86400);
    horas = segundos/3600; segundos -= (horas*3600);
    minutos = segundos/60; segundos -= (minutos*60);

    printf("\n--> Semanas: %d", semanas);
    printf("\n--> Dias: %d", dias);
    printf("\n--> Horas: %d", horas);
    printf("\n--> Minutos: %d", minutos);
    printf("\n--> Segundos: %ld", segundos);
}