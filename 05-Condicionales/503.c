/*Escribir un programa acepte fecjas escritas de modo usual y las visualice como tres números
*/
#include <stdio.h>
#include <string.h>

int main(){
    int d,a,m;
    char mes[11];

    printf("Ingrese la fecha con el siguiente formato: 'dia mes anio' \n");
    scanf("%d %s %d",&d,mes,&a);

    if (strcmp(mes, "enero") == 0) m = 1;
    else if (strcmp(mes, "febrero") == 0) m = 2;
    else if (strcmp(mes, "marzo") == 0) m = 3;
    else if (strcmp(mes, "abril") == 0) m = 4;
    else if (strcmp(mes, "mayo") == 0) m = 5;
    else if (strcmp(mes, "junio") == 0) m = 6;
    else if (strcmp(mes, "julio") == 0) m = 7;
    else if (strcmp(mes, "agosto") == 0) m = 8;
    else if (strcmp(mes, "septiembre") == 0) m = 9;
    else if (strcmp(mes, "octubre") == 0) m = 10;
    else if (strcmp(mes, "noviembre") == 0) m = 11;
    else if (strcmp(mes, "diciembre") == 0) m = 12;
    else {
        printf("Mes no válido\n");
    }

    printf("%d/%d/%d",d,m,a);
    
}