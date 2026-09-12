/* El matematico italiano leonardo fibonacci propuso el siguiente problema: Suponga que un par de conejos tiene un par de crias
una vez al mes, y cada nueva pareja se hace fertil a la edad de un mes. Si se dispone de una pareja fertil y ninguno de los 
conejos muertos, cuantas parejas habra despues de un año? Mejorar el problema calculando el numero de meses necesario para 
producir un numero dado de parejas de conejos. */

#include <stdio.h>

int main(){
    //Fibonaccio con bucles hasta el mes 12
    int ant = 1;
    int act = 0;
    int sig = 0;

    for (int i = 1; i < 13; i++){
        sig = act + ant;
        ant = act;
        act = sig;
        printf("\n Mes: %d , Parejas: %d", i, act);
    }

    int numIng;
    printf("\nIngrese la cantidad de meses para la que desea calcular el numero de parejas: ");
    scanf("%d", &numIng);

    ant = 1;
    act = 0;
    sig = 0;

    for (int i = 1; i < numIng; i++){
        sig = act + ant;
        ant = act;
        act = sig;
        printf("\n Mes: %d , Parejas: %d", i, act);
    }
}