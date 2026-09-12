/* Se quiere calcular la edad de un individuo; para ello se va a tener como entrada dos fechas en el formato
dia mes año, correspondientes a la fecha de nacimiento y a la fecha actual, respectivamente. Escribir un 
programa que calcule y visulalice la edad de un individuo, si la fecha es de un bebé (menor a un año) 
la edad se debe dar en meses y años, de lo contrario la edad d¿se calculará en años*/

#include <stdio.h>

int main(){

    int dia_n, mes_n, anio_n, dia_a, mes_a, anio_a;
    printf("\nIngrese la fecha de nacimiento (dia/mes/anio): ");
    scanf("%d/%d/%d", &dia_n, &mes_n, &anio_n);
    printf("\nIngrese la fecha actual (dia/mes/anio): ");
    scanf("%d/%d/%d", &dia_a, &mes_a, &anio_a);

    int edad_total;

    if (anio_a-anio_n >=1){
        if (mes_a<mes_n) edad_total = anio_a-anio_n-1;
        if (mes_a == mes_n && dia_a < dia_n) edad_total = anio_a-anio_n-1;
        else edad_total = anio_a-anio_n;
    }else{
        if (mes_a>mes_n) edad_total = mes_a-mes_n;
    }


}