/* Visualizar en pantalla una figura similar a la siguiente:
*
**
***
****
*****
el número de líneas que se pueden introducir es variable.
*/

#include <stdio.h>

int main(){
    int n;

    printf("Ingrese el numero de renglones: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }
}