/* Problema 5.1
Cuatro enteros entre 0 y 100 representan las puntuaciones de un estudiante de un curso de informática.
Escribir un programa para encontrar la media de estas puntuaciones y visualizar una tabla de notas de acuerdo con
    Media    Puntuación
    90-100    A
    80-89     B
    70-79     C
    60-69     D
    0-59      F    */

#include <stdio.h>

int main(){

    int notas[3];
    int promedio;
    char puntuacion;/*
    int nota1, nota2, nota3, nota4, promedio;
    printf("Ingrese las 4 notas requeridas: \n");
    scanf("%d %d %d %d", &nota1, &nota2, &nota3, &nota4);*/

    for (int i = 0; i < 4; i++){
        printf(" Ingrese la nota no.%d: ", i+1);
        scanf("%d",&notas[i]);
        if (notas[i]<0 || notas[i]>10){
            printf(" *** Nota invalida. Ingrese un número del 1 al 10. *** \n");
            i--;
        }
    }

    //promedio = (nota1+nota2+nota3+nota4)/4;
    promedio = (notas[0]+notas[1]+notas[2]+notas[3])/4;
    if (promedio>=90 && promedio <=100) puntuacion = 'A';
    else if (promedio>=80 && promedio <=89) puntuacion = 'B';
    else if (promedio>=70 && promedio <=79) puntuacion = 'C';
    else if (promedio>=60 && promedio <=69) puntuacion = 'D';
    else if (promedio>=0 && promedio <=59) puntuacion = 'E';

    printf("\n ->La media es: %d\n ->La puntuacion es: %c", promedio, puntuacion);
}