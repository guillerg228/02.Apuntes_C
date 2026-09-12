//Calcular todos los numeros de tres cifras tales que la suma de los cubos de las cifras es igual al valor del numero

#include <stdio.h>
#include <math.h>

int main(){

    int aux, d, c,sum;
    for (int i = 100; i < 1000; i++){
        aux = i;
        c = aux/100; aux -= (c*100);
        d = aux/10; aux -= (d*10);

        c = pow(c,3);
        d = pow(d,3);
        aux = pow(aux,3);
        sum = c + d + aux;

        if (sum == i) printf("\n%d", i);       
    }
}