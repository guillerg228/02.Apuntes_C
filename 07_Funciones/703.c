/*Escribir un funcion que determine si una cadena de caracteres es un palindromo*/

#include <stdio.h>
#include <string.h>

void invertirCadena(char cad[]);
void esPalindromo(char cadIng[], char cadInv[]);

int main(){

    char cadIng[50] = "";
    char aux[50] = "";

    printf("\nIngrese una cadena para determinar si es un palindromo: ");
    fgets(cadIng, 50, stdin);   // Se hace uso de fgets ya que se usa para lectura en flujos, y stdin es un flujo
    // Eliminar el salto de línea '\n'
    cadIng[strcspn(cadIng, "\n")] = '\0';//Busca donde se encuentra el caracter /n, lo toma como indice, lo convierte en fin de linea
    strcpy(aux, cadIng);

    invertirCadena(aux);
    esPalindromo(aux, cadIng);
}

void invertirCadena(char cad[]){

    int numChar = strlen(cad);
    int numIte = numChar;

    for (int i = 0; i < numIte/2; i++){
        numIte--;
        char aux = cad[i];
        cad[i] = cad[numIte];
        cad[numIte] = aux;
    }
    printf("\nCadena invertida: %s", cad);
}


void esPalindromo(char cadIng[], char cadInv[]){
    if (strcmp(cadIng, cadInv) == 0){
        printf("\n -> La cadena ingresada es un palindromo.");
    }else
        printf("\n -> La cadena ingresada no es un palindromo.");
}