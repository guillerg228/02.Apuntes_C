/* Escribir un porgrama para convertir una medida dada en pies a sus equivalentes en 
a) Yardas         1yd = 3 fts
b) Pulgadas       1ft = 12pulg
c) Centimetros    1pul = 2.54cm
d) Metros         1 mt = 100cm

Leer el número en pies y mostrarlo en yardas, pulgadas centimetros y metros.
*/

#include <stdio.h>

int main(){

    float pies;
    printf("Ingrese el numero en pies: ");
    scanf("%f", &pies);

    float yardas = (1.0/3.0)*pies;
    float pulgadas = 12*pies;
    float centimetros = pulgadas/2.54;
    float metros = centimetros/100;

    printf(" *** Pies: %.2f\n\t-Yardas: %.2f\n\t-Pulgadas: %.2f\n\t-Centimetros: %.2f\n\t-Metros: %.2f", pies, yardas, pulgadas, centimetros, metros);
    
}