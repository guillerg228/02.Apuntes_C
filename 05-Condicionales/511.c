/* Determinar el mennor número de billetes y monedas de curso legal equivalentes a cierta cantidad
de pesos*/

#include <stdio.h>

int main(){

    int monedas_1, monedas_2, monedas_5, monedas_10;
    int billetes_20, billetes_50, billetes_100, billetes_200, billetes_500, billetes_1000;
    int cantidad;

    printf("Ingrese la cantidad que desea: ");
    scanf("%d", &cantidad);

    billetes_1000 = cantidad/1000; cantidad -= billetes_1000*1000;
    billetes_500 = cantidad/500; cantidad -= billetes_500*500;
    billetes_200 = cantidad/200; cantidad -= billetes_200*200;
    billetes_100 = cantidad/100; cantidad -= billetes_100*100;
    billetes_50 = cantidad/50; cantidad -= billetes_50*50;
    billetes_20 = cantidad/20; cantidad -= billetes_20*20;

    monedas_10 = cantidad/10; cantidad -= monedas_10*10;
    monedas_5 = cantidad/5; cantidad -= monedas_5*5;
    monedas_2 = cantidad/2; cantidad -= monedas_2*2;
    monedas_1 = cantidad/1; cantidad -= monedas_1*1;

    printf("\n *** Resultado ***");
    printf("\n\n --> Billetes 1000: %d", billetes_1000);
    printf("\n --> Billetes 500: %d", billetes_500);
    printf("\n --> Billetes 200: %d", billetes_200);
    printf("\n --> Billetes 100: %d", billetes_100);
    printf("\n --> Billetes 50: %d", billetes_50);
    printf("\n --> Billetes 20: %d", billetes_20);

    
    printf("\n --> Monedas 10: %d", monedas_10);
    printf("\n --> Monedas 5: %d", monedas_5);
    printf("\n --> Monedas 2: %d", monedas_2);
    printf("\n --> Monedas 1: %d", monedas_1);
}
//Este código se puede optimizar usando arreglos.