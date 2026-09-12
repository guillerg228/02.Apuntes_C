/*Escribir un programa que lea un entero positivo y a continuacion llame una
funcion que visualice sus factores primos*/

#include <stdio.h>

int factoresPrimos(int num);

int main(){
	int numIng;
	do{
		printf("Ingrese un entero positivo: ");
		scanf("%d", &numIng);
	} while (numIng > 0);

	printf("%d", factoresPrimos(numIng));
}

int factoresPrimos(int num){


	if (num = 1) {
        return num;
    } else {
        for (int i = 2; i < num; i++){ //Desde 2 hasta num-1 verifica que no tenga divisores 
            if (num % i == 0) { 
                num /= i;
                printf("%d",factoresPrimos(num));
                break;  //no es primo
            }
        }return num;
    }
}