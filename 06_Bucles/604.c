/*Escribir un programa que determine y escriba la descomposicion factorial de los
numeros enteros comprendidos entre 1900 y 2000 */

#include <stdio.h>

int main(){
    int un, dec, cent, mil;
    int inicio = 1900, fin = 2000;

    for (int i = inicio; i <= fin; i++){
        int numAct = i;
        mil = numAct/1000; numAct -= (mil*1000);
        cent = numAct/100; numAct -= (cent*100);
        dec = numAct/10; numAct -= (dec*10);
        un = numAct;
        printf("Num: %d -> Unidades: %d, Decenas: %d, Centenas: %d, Miles: %d\n", i, un, dec, cent, mil);
    }
    
    
}