#include <stdio.h>

long fibonacci(int n){
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 2) + fibonacci (n - 1);
}


int main( ){
    int n;

    do { //Comprueba que el número ingresado sea mayor o igual que 1 para poder operar sobre él
        printf("Introduzca el numero de terminos: ");
        scanf("%d", &n);
    }while (n < 1);

    puts("\tSerie numeros de fibonacci");
    printf("0 1 "); /* componente base de la serie */

    for (int k = 2; k <= n; k++){   //La iteración inicializa en 2 para que se tenga un número operable
        printf("%ld %s", fibonacci(k), (k%7==0 ? "\n" : " ") );
    }
    
    return 0;
}