//Escribir un programa que encuentre todos los numeros perfectos hasta un numero dado leido por el teclado

#include <stdio.h>

int main(){
    int numIng;
    int numAct=0, suma;

    printf("Ingrese un numero limite para encontrar numeros perfectos: ");
    scanf("%d", &numIng);

    while (numAct <= numIng){
        numAct++;
        suma = 0;
        for (int i = 1; i < numAct; i++){  //Busca los divisores del numero
            if ((numAct%i) == 0 ){ //si i es divisor de numAct
                suma += i; // los suma para verificar si es perfecto
            }
        }
        if (suma == numAct){ //Verifica que la suma de los divisores sea igual al numero
            printf("Numero perfecto par: %d\n", numAct);
        }
    }
}