// Escribir un programa mediante una funcion que acepte un numero de dia , mes y año y lo visualice de la forma dd/mm/aa

#include <stdio.h>

void visualizacion(int d, int m, int a);

int main(){
    int dia, mes, anio;
    printf("Ingrese el dia, mes y anio con el formato (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &anio);
    visualizacion(dia, mes, anio);
    return 0;
}

void visualizacion(int d, int m, int a){
    a = a%100;
    printf("\n%02d/%02d/%02d", d, m, a);
    
    /*if (d<10){
        if (m<10) printf("\n  0%d/0%d/%d", d, m, a);
        else printf("\n  0%d/%d/%d", d, m, a);
    }else{
        if (m<10) printf("\n  %d/0%d/%d", d, m, a);
        else printf("\n  %d/%d/%d", d, m, a);
    }*/
}
