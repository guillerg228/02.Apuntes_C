/* Escribir un programa que encuentre los pirmeros tres numeros perfectos pares y los primeros tres numeros perfectos impares. 
Un numero perfecto es aquel que es la suma de todos los enteros positivos (excluido el mismo) que son divisores de dicho numero*/

#include <stdio.h>

int main(){
    int flag = 0;
    int numAct=0, suma;

    while (flag < 3){  // flag se incrementa cada que encuentra un numero que es perfecto par
        numAct++;  //Numero actual a verificar si es perfecto par
        suma = 0;
        for (int i = 1; i < numAct; i++){   // Busca los enteros divisores de numAct
            if ((numAct%i) == 0 ){ //si i es divisor de numAct
                suma += i;
            }
        }
        if (suma == numAct && (numAct%2)==0 ){// Si la suma de los numeros divisores de numAct es igual a numAct, y numAct es par es PP
            printf("Numero perfecto par: %d\n", numAct);
            flag++;
        }
    }
/*
    numAct = 0;   // Los numeros perfectos nunca son impares
    flag = 0;
    while (flag < 3){  // flag se incrementa cada que encuentra un numero que es perfecto impar
        numAct++;  //Numero actual a verificar si es perfecto par
        suma = 0;
        for (int i = 1; i < numAct; i++){   // Busca los enteros divisores de numAct
            if ((numAct%i) == 0 ){ //si i es divisor de numAct
                suma += i;
            }
        }
        if (suma == numAct && (numAct%2)!= 0){// Si la suma de los numeros divisores de numAct es igual a numAct, y numAct es par es PI
            printf("Numero perfecto impar: %d\n", numAct);
            flag++;
        }
    }*/
}