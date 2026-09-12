//Escribir un programa que encuentre el primer numero primo introducido por teclado

#include <stdio.h>

int main(){
    /*int flag = 1;
    int numIng, suma;
    do{
        printf("\nIntroduzca un numero: ");
        scanf("%d", &numIng);

        suma = 0;
        for (int i = 1; i < numIng+1; i++){  // Detecta todos los divisores del numero ingresado
            if ((numIng%i) == 0 ){ //si i es divisor de numIng
                suma += i; // los suma los divisores
            }
        }
        if (suma == numIng+1){
            printf(" %d es primo", numIng);
            flag = 0;
        }
    }while(flag);*/



    int num;
    int esPrimo;
    do {
        printf("Introduzca un numero: ");
        scanf("%d", &num);

        if (num <= 1) {
            esPrimo = 0;  //Si el numero es negativo o 1, no es primo. Se salta el else y entra en el while
        } else {
            esPrimo = 1;  // Suponemos que el numero ingresado es primo
            for (int i = 2; i < num; i++) {
                if (num % i == 0) { // Si encuentra un divisor diferente al numero ingresado no es primo
                    esPrimo = 0;
                    break;  // Se rompe el for. UNICAMENTE EL FOR
                }  // Si no se encuentra un divisor diferente al numero ingresado nunca se rompe el ciclo, por lo que la supocicion
            }      // es correcta y sale del ciclo while
        }
    } while (!esPrimo);

    printf("%d es primo\n", num);

    return 0;
}