// Escribir un programa que utilice una función para convertir coordenadas polares a rectangulares 
#include <math.h>
#include <stdio.h>
#define PI 3.141592653589793


void coordPolares(double r, double a);

int main(){
    double angulo, longitud;
    printf("Ingrese las coordenadas polares de un punto: ");
    scanf("(%lf, %lf)", &longitud, &angulo);
    coordPolares(longitud, angulo);
}


void coordPolares(double r, double a){
    double x, y;
    double rad;

    rad = a * PI / 180.0;  // Conversión a radianes

    x = r * cos(rad);
    y = r * sin(rad);

    printf("Punto cartesiano: (%.2f, %.2f)\n", x, y);
}