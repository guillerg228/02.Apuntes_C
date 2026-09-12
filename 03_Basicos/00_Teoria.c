/*Directivas del preprocesador
    #include ---> Incluye archivos de cabecera, indica al procesaroe que lea e inserte el codigo en la posicion
    #define ----> Indica al preprocesador que defina un item de datos u operacion
*/
#include <stdio.h>//Standard Input Output
#define PI = 3.1416   //Las directivas del preprocesador no llevan ; ya que no son sentencias
#include <string.h>
//Declaraciones globales de variables y funciones (prototipos)
int var1;
int func(int v1, int v2);

//Tipos de datos fundamentales
char caracter = 'n';
//Enteros
int entero = 123546;
short entCorto = 102;
unsigned int entUnsgnd = 45631;
long entLargo = 1234568;
//Reales
float decimal = 10.9;
double decLargo = 12.120356;
long double dblLargo = 1e-8; 

//Constantes definidas
#define CONSTANTE_ENTERA = 145
#define CONSTANTE_REAL = 892.747
#define CONSTANTE_CHAR = 'h'
#define CONSTANTE_OCTAL = 035  //29 decimal
#define CONSTANTE_HEXAD = 0x3A //58 decimal
#define CONSTANTE_CADENA = "Guillermo Guerrero"

//Constantes enumeradas
enum Colores {Rojo, Verde, Amarillo, Morado};

//Constantes declaradas (const)
const int COS_1 = 0; 

int main(){

    //Tipo de dato logico (True/False)
    int var2 = 1; //True
    int var2 = 0; //False
    char cadena[] = "Hola mundo";

//Salida de datos
    //Podemos visualizar datos en pantalla con la función printf() incluida en la librería stdio.h
    printf("\nDecimal: %d", entero);
    printf("\nOctal: %o", entero);
    printf("\nExadecimal: %x", entCorto);
    printf("\nEntero sin signo: %u", entUnsgnd);
    printf("\nCaracter: %c", caracter);
    printf("\nFlotante notacion cientifica: %e", decLargo);
    printf("\nFlotante: %f", decimal);
    printf("\nFloat g: %g", decLargo);// Espresa el flotante sencillo o con notacion, dependiendo de la representación mas corta
    printf("\nString: %s", cadena);
    printf("\nDouble: %lf", decLargo);
    printf("\nBoolean; %i", var2);
    //Tambien podemos usar la funcion puts() para cadenas
    puts("\nCadena de caracteres");

//Entrada de datos
    char nombre[50];
    printf("\n\nIngrese el nombre: ");
    gets(nombre);
    printf("\tNombre Ingresado: %s", nombre); 

    printf("\n\nIngrese el nombre: ");
    scanf("%s", nombre);
    printf("\tNombre Ingresado: %s", nombre);  
    /*La funcion printf guarda cadenas hasta detectar un espacio por ende 
    a veces es necesario usar gets(), a demás scanf hace un salto de linea automatico
    al concluir con el escaneo    */
    
    return 0;
}

