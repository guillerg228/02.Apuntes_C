/* Escribir un programa que determine todos los años biciestos del siglo XXII. Un año es bisiesto si es multiplo de cuatro,
sin embargo los años multiplos de 100 solo son bisiestos si también son multiplos de 400*/

#include <stdio.h>

int main(){

    printf("A%cos biciestos del siglo XXII: \n",164);
    
    for (int i = 2100; i < 2200; i++){
        if ((i%100 != 0 && i%4 == 0) || i%400 == 0)  //Si es multiplo de 100 y de 4 a la vez, o multiplo de 400
            printf(" -> %d\n", i);
    }
}