/* Se desea redondear un entero positico a la centena más proxima y visualizar la salida. Para ello 
la entrada de datos debe ser los cuatro digitos A, B, C, D del entero N*/

#include <stdio.h>

int main(){

    int a, b, c, d, num=10;

    printf("Ingrese A: ");
    scanf("%d", &a);
    printf("Ingrese B: ");
    scanf("%d", &b);
    printf("Ingrese C: ");
    scanf("%d", &c);
    printf("Ingrese D: ");
    scanf("%d", &d);

    printf("Numero ingresado: %d%d%d%d", a, b, c, d);
    
    num = c*10 + d;
    num = 100-num;   
    if (num<=50) num = (b+1)*100;//si es menor a 50 redondeamos hacia arriba
    else num = b*100;  //Sino, solo multiplicamos por 100 y asignamos en b
    if (num==1000) num = 10000;  // Si las centenas redondean a 1000 en 90000
    else num = (a*1000) + num;  //Sino solo multiplicamos a por 1000 y sumamos el valor que teníamos de num

    printf("\nResultado de redondeo: %d", num);

    int N = a*1000 + b*100 + c*10 + d;  //Se arma el número entero
    if (c*10 + d >= 50)    //Se determina si se redondea hacia arriba
        N = ((N / 100) + 1) * 100;  // redondea hacia arriba
    else
        N = (N / 100) * 100;        // redondea hacia abajo
    printf("\nResultado de redondeo: %d", N);
}