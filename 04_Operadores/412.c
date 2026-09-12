/* Construir un programa para obtener la hipotenusa y los ángulos agudos de un triángulo rectángulo a partir de las
    longitudes de los catetos.
*/

#include <math.h>
#include <stdio.h>
#define PI 3.141592

int main(){
    
    float cateto1, cateto2, hipotenusa, angulo1, angulo2;
    printf("*** Obtencion de hipotenusa y angulos ***");
    printf("\nIngrese el tamanio del cateto 1: ");
    scanf("%f",&cateto1);
    printf("Ingrese el tamanio del cateto 2: ");
    scanf("%f",&cateto2);

    hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
    angulo1 = atan(cateto1 / cateto2) * 180 / PI;
    angulo2 = 90 - angulo1;

    printf("\n\tHipotenusa: %.2f", hipotenusa);
    printf("\n\tAngulo opuesto a cateto a: %.2f", angulo1);
    printf("\n\tAngulo opuesto a cateto b: %.2f\n", angulo2);
    
}