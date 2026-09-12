#include<stdio.h>

void ordBurbuja(long a[], int n){
    int interruptor = 1;
    int pasada, j;
    for (pasada = 0; pasada < n-1 && interruptor; pasada++) {
        interruptor = 0;
        for (j = 0; j < n-pasada-1; j++){
            if (a[j] > a[j+1]){
                long aux;
                a[j] = a[j+1];
                a[j+1] = aux;
            }
        }
    }
}


void ordBurbuja2 (long a[], int n){
    int i, j;
    int indiceIntercambio;

    i = n-1;
    while (i > 0){
        indiceIntercambio = 0;
        for (j = 0; j < i; j++){
            if (a[j+1] < a[j]){
                long aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
                indiceIntercambio = j;
            }
        }i = indiceIntercambio;
    }
}




void ordSeleccion (double a[], int n){
    int indiceMenor, i, j;

    for (i = 0; i < n-2; i++){  // Bucle para recorrer todo el arreglo
        indiceMenor = i;
        for (j = i+1; j < n; j++){  //Bucle para recorrer la parte desordenada
            if (a[j] < a[indiceMenor]){
                indiceMenor = j;
            }
        }
        if (i != indiceMenor){
            double aux = a[i];
            a[i] = a[indiceMenor];
            a[indiceMenor] = aux;
        }
    }
}




void insercion (int a[], int n){
    int j, aux;

    for (int i = 1; i < n; i++){
        j = i;
        aux = a[i];   // Si el arreglo es [5, 3, 8, 4] y i = 1, entonces aux = 3
        while (j > 0 && aux < a[j-1]){
            a[j] = a[j-1];
            j--;
        }
    a[j] = aux;
    }
}





void quicksort(double a[], int primero, int ultimo){
    int i, j, central;
    double pivote;
    central = (primero + ultimo)/2;
    pivote = a[central];
    i = primero;
    j = ultimo;
    do {
        while (a[i] < pivote) i++;  // Busca un valor menor al pivote
        while (a[j] > pivote) j--;  // Busca un valor mayor al pivote
        //Se avanza tanto en i como en j hasta encontrar un valores que estén fuera de lugar
        if (i <= j){  //Si los indices no se han cruzado, significa que los valores no están acomodados
            double tmp;
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    }while (i <= j);
    if (primero < j)
        quicksort(a, primero, j);
    if (i < ultimo)
        quicksort(a, i, ultimo);
}

int busquedaBin(int lista[], int n, int clave){
    int central, bajo, alto;
    int valorCentral;
    bajo = 0;
    alto = n-1;
    while (bajo <= alto){
        central = (bajo + alto)/2;      /* índice de elemento central */
        valorCentral = lista[central];  /* valor del índice central */
        if (clave == valorCentral)
            return central;             /* encontrado, devuelve posición */
        else if (clave < valorCentral)
            alto = central -1;          /* ir a sublista inferior */
        else
            bajo = central + 1;         /* ir a sublista superior */
    }
    return -1;                          /* elemento no encontrado */
}