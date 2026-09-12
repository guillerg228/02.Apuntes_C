/* Escribir un programa que calcule el número de días de un mes, dado los valores numéricos del mes y
y del año*/

#include <stdio.h>

int main(){

    int anio, mes, es_bis,dias_t;

    printf("Ingrese el mes y a%co para determinar los dias del mes. (mm aaaa)",164);
    scanf("%d %d", &mes, &anio);

    if ((anio%100 != 0 && anio%4 == 0) || anio%400 == 0) es_bis=1; //Determinamos si el año es bisiesto o no
    else es_bis=0;

    if((mes<=7 && mes%2==1) || (mes>=8 && mes%2==0)) dias_t=31;
    else if(((mes>2&&mes<7)&&mes%2==0) || (mes>=8 &&mes%2==1)) dias_t=30;
    else if (mes == 2){
        if (es_bis==0) dias_t=28;
        else dias_t=29;
    }else return 1;
    printf("Numero de dias mes actual: %d", dias_t);
}