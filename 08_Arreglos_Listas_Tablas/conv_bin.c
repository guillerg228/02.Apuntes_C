/* Escribe un programa que solicite llenar al usuario un arreglo de 10 elementos (unicamente 0 o 1)
para que despúes pueda elegir una codificación.

a) Binario puro
b) Float (6 bits entero, 4 decimal)
c) complemento a 2

La salida del programa es la converción decimal
*/

#include <stdio.h>
#include <math.h>

void binario(int bin[]);
float float_con(int bin[]);
int comp_2(int bin[]);

int main(){

    int bin[10], opcion;

    printf("\n");
    for (int i = 0; i < 10; i++){
        printf("Ingrese elemento[%d](0 o 1): ", i);
        scanf("%d", &bin[i]);
    }
    printf("\nBinario Ingresado: ");
    for (int i = 0; i < 10; i++){
        printf("%d ",bin[i]);
    }

    printf("\n\nIngrese la opcion deseada:\n\t1) Binario Puro\n\t2) Float(6 bits entero, 4 decimal)\n\t3)Complemento 2\n");
    scanf("%d", &opcion);

    switch (opcion){
    case 1:
    binario(bin);
        break;
    case 2:
    float_con(bin);
        break;
    case 3:
    comp_2(bin);
        break;
    
    default:
    printf("Opcion Invalida.");
        break;
    }
}

void binario(int bin[]){

    int result = 0;
    for (int i = 9; i >= 0; i--){
        if (bin[i] == 1){
            result += pow(2, i);
        }
    }printf("-> Convercion binaria a decimal: %d", result);
}

float float_con(int bin[]){
    float result=0;
    return result;
}

int comp_2(int bin[]){
    int result = 0;
    return result;
}