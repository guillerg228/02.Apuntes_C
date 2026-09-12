/* Problema5.2
Escribir un programa que lea la hora de un día de notacion 24hrs y la respuesta en
notacion de 12 hrs. El programa pedira que al usuario que ingrese exactamente 5 caracteres
*/

#include <stdio.h>

int main(){
    int horas, minutos;
    printf("Ingrese la hora en notacion de 24hrs. Ejemplo: '15:00'\n");
    scanf("%d:%d",&horas, &minutos);

    if (horas > 12){
        horas -= 12;
        printf("Formato 12hrs ---> %d:%d pm",horas,minutos);
    }
    else printf("Formato 12hrs ---> %d:%d am",horas,minutos);
    
}