// Escribir una funcion que reciba una cadena de caracteres y la devuelva de forma inversa

#include <stdio.h>
#include <string.h>

void invertirCadena(char cad[]);

int main(){
    char cadena[100] = "";
    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, 100, stdin);
    invertirCadena(cadena);
    printf("%s", cadena);
}

void invertirCadena(char cad[]){
    int numCar = strlen(cad)-1;  // quitamos el caracter \n
    char aux;
    int n = numCar;

    for (int i = 0; i < numCar/2; i++){
        n--;
        aux = cad[i];
        cad[i] = cad[n];
        cad[n] = aux;
    }
}

/*
void invertirCadena(char cad[]) {
    int i = 0;
    int j = strlen(cad) - 1; // eliminar '\n'
    char aux;

    while (i < j) {
        aux = cad[i];
        cad[i] = cad[j];
        cad[j] = aux;
        i++;
        j--;
    }
}
*/