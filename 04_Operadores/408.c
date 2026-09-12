/*
Teniendo como datos de entrada la altura y el radio de un cilindro queremos calcular: el área lateral y el
volumen del cilindro.*/

#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(){
    printf("\n *** Calculo de el volumen de un cilindro. ***\n");

    float radio, altura, areaB, areaL, volumen;
    printf("Ingrese el radio: ");
    scanf("%f",&radio);
    printf("Ingrese la altura: ");
    scanf("%f",&altura);

    areaB = (pow(radio,2))*PI;
    volumen = altura*areaB;
    areaL = 2*PI*radio*altura;

    printf("\n\t-Area Base: %.2f\n\t-Area Lateral: %.2f\n\t-Volumen: %.2f", areaB, areaL, volumen);
}