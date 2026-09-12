/* Para encontrar el mcd de dos numeros a y b (a>b), se divide a entre b, obteniendo el cosiente q1 y el resto r1, si r1!=0, se divide r1 emtre b1 obteniendo el 
cosiente q2y el resto r2, este proceso se continua hasta que el resto es 0. Escriba un programa que calcule el mcd de dos numeros ingresados por el usuario*/

#include <stdio.h>

int main(){

    int a, b, r, mcd;
    do{
        printf("Ingrese dos numeros, a y b (a>b): ");
        scanf("%d %d", &a, &b);
    } while (b >= a);
    
    int auxb = b;
    int auxa = a;
    do{
        mcd = auxb;
        r = auxa%auxb;
        auxa = auxb;
        auxb = r;
    } while (r!= 0);
    printf("MCD(%d,%d) = %d", a, b, mcd);
    
}