// Encontrar el numero natural N mas pequeño tal que la suma de los N primeros numeros exceda de una cantidad inctroducida 
// por el teclado

#include <stdio.h>

int main(){
    
    int numIng, cont = 0;
    int suma = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &numIng);

    do{
        cont++;
        suma += cont;
    } while (suma <= numIng);  //Menor o igual para que la suma exceda forsozamente el numero ingresado

    printf("Numero final: %d", cont);
}