/* Escribir un programa que calcule y visualice el mas grande, el mas pequeño y la mediade N numeros. El valor de N se 
solicitara el principio del programa, y los numeros seran introducidos por el usuario*/

#include <stdio.h>

int main(){
    int N;
    float prom, max, min, numIng;
    printf("Ingrese la cantidad de numeros que desea: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++){
        printf(" Ingrese el numero %d: ", i+1);
        scanf("%f", &numIng);
        prom += numIng;
        if(i == 0){
            max = numIng;
            min = numIng;}
        if (numIng >= max) max = numIng;
        if (numIng <= min) min = numIng;
    }
    prom /= N;
    printf(" -> El numero minimo ingresado es: %.1f\n", min);
    printf(" -> El numero maximo ingresado es: %.1f\n", max);
    printf(" -> El promedio de los numero ingresados es: %.1f\n", prom);
}