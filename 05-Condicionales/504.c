/* Escribir un programa que acepte un número de tres dígitos escrito en palabras y a continuación los
visualice como un valor de tipo entero.*/

#include <stdio.h>
#include <string.h>

int main() {
    char numero[50];
    int num = 0;
    
    printf("Ingresa un número de hasta tres cifras en palabras: ");
    fgets(numero, 50, stdin);
    
    // Eliminar salto de línea de fgets
    numero[strcspn(numero, "\n")] = 0;
    
    // CENTENAS
    if (strstr(numero, "novecientos") != NULL) num += 900;
    else if (strstr(numero, "ochocientos") != NULL) num += 800;
    else if (strstr(numero, "setecientos") != NULL) num += 700;
    else if (strstr(numero, "seiscientos") != NULL) num += 600;
    else if (strstr(numero, "quinientos") != NULL) num += 500;
    else if (strstr(numero, "cuatrocientos") != NULL) num += 400;
    else if (strstr(numero, "trescientos") != NULL) num += 300;
    else if (strstr(numero, "doscientos") != NULL) num += 200;
    else if (strstr(numero, "ciento") != NULL) num += 100;
    else if (strstr(numero, "cien") != NULL) num += 100;
    
    // CASOS ESPECIALES DE DECENAS (números del 10-29)
    if (strstr(numero, "veintinueve") != NULL) num += 29;
    else if (strstr(numero, "veintiocho") != NULL) num += 28;
    else if (strstr(numero, "veintisiete") != NULL) num += 27;
    else if (strstr(numero, "veintiseis") != NULL) num += 26;
    else if (strstr(numero, "veinticinco") != NULL) num += 25;
    else if (strstr(numero, "veinticuatro") != NULL) num += 24;
    else if (strstr(numero, "veintitres") != NULL) num += 23;
    else if (strstr(numero, "veintidos") != NULL) num += 22;
    else if (strstr(numero, "veintiuno") != NULL) num += 21;
    else if (strstr(numero, "veinte") != NULL) num += 20;
    else if (strstr(numero, "diecinueve") != NULL) num += 19;
    else if (strstr(numero, "dieciocho") != NULL) num += 18;
    else if (strstr(numero, "diecisiete") != NULL) num += 17;
    else if (strstr(numero, "dieciseis") != NULL) num += 16;
    else if (strstr(numero, "quince") != NULL) num += 15;
    else if (strstr(numero, "catorce") != NULL) num += 14;
    else if (strstr(numero, "trece") != NULL) num += 13;
    else if (strstr(numero, "doce") != NULL) num += 12;
    else if (strstr(numero, "once") != NULL) num += 11;
    else if (strstr(numero, "diez") != NULL) num += 10;
    else {
        // DECENAS NORMALES (30, 40, 50, etc.)
        if (strstr(numero, "noventa") != NULL) num += 90;
        else if (strstr(numero, "ochenta") != NULL) num += 80;
        else if (strstr(numero, "setenta") != NULL) num += 70;
        else if (strstr(numero, "sesenta") != NULL) num += 60;
        else if (strstr(numero, "cincuenta") != NULL) num += 50;
        else if (strstr(numero, "cuarenta") != NULL) num += 40;
        else if (strstr(numero, "treinta") != NULL) num += 30;
        
        // UNIDADES (solo si no hay decenas especiales)
        if (strstr(numero, "nueve") != NULL) num += 9;
        else if (strstr(numero, "ocho") != NULL) num += 8;
        else if (strstr(numero, "siete") != NULL) num += 7;
        else if (strstr(numero, "seis") != NULL) num += 6;
        else if (strstr(numero, "cinco") != NULL) num += 5;
        else if (strstr(numero, "cuatro") != NULL) num += 4;
        else if (strstr(numero, "tres") != NULL) num += 3;
        else if (strstr(numero, "dos") != NULL) num += 2;
        else if (strstr(numero, "uno") != NULL) num += 1;
    }
    
    if (num == 0) {
        printf("Número no reconocido o es cero.\n");
    } else {
        printf("Número en dígitos: %d\n", num);
    }
    
    return 0;
}
