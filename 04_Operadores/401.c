// Escribir un programa que lea dos enteros de tres digitos y calcule e imprima su producto, su cociente y el 
// resto cuando el primero se divide por el segundo. La salida será justificada a la derecha

#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    
    printf("\nIngrese el primer numero: "); scanf("%d", &numero1);
    printf("\nIngrese el segundo numero: "); scanf("%d", &numero2);
    
    (numero1<100)&&(numero2<100) ? printf("Producto: %d\nCosiente: %d\nResto: %d", numero1*numero2, numero1/numero2, numero1%numero2): printf("Los numeros no son de 3 cifras");
}