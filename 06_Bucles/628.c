// Encontrar y encontrar todos los numeros de cuatro cifras que cumplen con la condicion de que la suma de las cifras de orden impar
// es igual a la suma de las cifras de orden par

#include <stdio.h>

int main(){

    int m, c, d, aux, sumaP, sumaI;
    for (int i = 1000; i < 10000; i++){
        sumaI = 0;
        sumaP = 0;

        aux = i;
        m = aux/1000; aux -= (m*1000);
        c = aux/100; aux -= (c*100);
        d = aux/10; aux -= (d*10);

        sumaI = m + d;
        sumaP = c + aux;
        
        if (sumaI == sumaP) printf("\n%d", i);
    }
}