/* Un bucle es cualquier construcción de programa que repite una sentensia o secuencia de sentencias un 
número de veces*/

#include <math.h>
#include <stdio.h>
#define f(x) exp(2*x) - x  //Esta es una función de linea

int main(){
/*Uno de los bucles más usados es el while, este evalua una condición dada, de modo que ejetuta el 
bloque de código contenido mientras dicha condición se cumpla.*/

    int contador = 0;  // inicialización
    while (contador < 8){ // prueba/condición
        printf(" * ");
    } contador++;   // actualización (incrementa en uno contador)
    /* fin de while */

//Si la variable de control no se actualiza , el bucle será infinito

/*  *** Operadores de incremento y decremento ***
        ++variable    preincremento
        variable++    postincremento
        --variable    predecremento
        variable--    postdecremento
*/
    int k,i=3;
    k = i++;    /* asigna el valor 3 a k y 4 a i */
    k = ++i;    /* asigna el valor 5 a k y 5 a i */
    k = i--;    /* asigna el valor 5 a k y 4 a i */
    k = --i;    /* asigna el valor 3 a k y 3 a i */
    printf("%d",k);

/* *** Bucles controlados por centinelas ***
Un bucle controlado por centinela es funcional cuando no se conoce la cantidad de iteraciones que se
realizarán al ejecutarse el bucle, por lo que podemos tener una variable centinela con el valor de 
salida del bucle, es decir que mientras la condición sea diferente al centinela se ejecutará */

    const int centinela = -1;
    int nota, cuenta,suma;

    printf("Introduzca primera nota:");
    scanf("%d",&nota);

    while (nota != centinela){  //Mientras nota != -1 (El valor centinela)
        cuenta++;
        suma += nota;
        printf("Introduzca siguiente nota: ");
        scanf("%d",&nota);
    } /* fin de while */

/* ***Bucles controlados por banderas***
Un bucle controlado por bandera se ejecuta hasta que se produce el suceso anticipado y se cambia el valor
del indicador.

La variable que controla al bucle cambia dentro del mismo si las condiciones son correctas*/

    int digito_leido = 0;
    char car;
    /* no se ha leído ningún dato */
    while (!digito_leido){
        printf("Introduzca un carácter: ");
        scanf("%c",&car);
        digito_leido = (('0' <= car) && (car <= '9'));//Si el caracter ingresado es un número digito_leido=1
    }

/* La sentencia break puede ser utilizada ocacionalmente en bucles while para realizar una terminación
anormal del bucle en curso, a pesar de no ser tan recomendable ya que puede llegar a hacer dificil
la comprención del código*/

    int clave = -9;
    int entrada;
    while (scanf("%d",&entrada)){ //El bucle siempre va a estar leyendo un número
        if (entrada != clave)
            printf("%d\n",entrada);  //Si la entrada es diferente a la clave se sigue ejecutando
        else
            break;  //Cuando la entrada sea igual a la clave terminará su ejecución
    }

/*  *** Bucles for ***
El bucle for es el más indicado para implementar bucles controlados por un contador, podemos resumirlo en una
frase: por cada valor de una variable_contador de un rango especifico: ejecutar sentencias.
*/

//Programa que imprime 15 valores de la función f(x) = e2x – x. Funcion definida en la linea 6

    double x;
    for (int i = 1; i <= 15; i++){
        printf("Valor de x: ");
        scanf("%lf",&x);
        printf("f(%.1lf) = %.4g\n",x ,f(x) );
    }

    int c;
    for (c = 'A'; c <= 'Z'; c++)  //Imprimira los valores ASCII de la A a la Z
        printf("%c ",c);

// el rango puede ser de incremento o decremento, y puede incrementarse en cualquier valor

    for (int i = 9; i >= 0; i -= 3) // Decrece de 3 en 3
        printf("%d ",( i * i));

    for (i = 1; i < 100; i *= 2) //Se multiplica *2
        printf("%d ",i);

    int j=0;
    for (int i = 0, j = 25; i < j; i++, j--) // desde i=0 y j=25, y mientras i<j, i incremente y j decrementa
        printf("%d ",(i + 2 * j));

//Podemos tener bucles for infinitos

    int clave = -999;
    int num;
    for (;;){
        printf("Introduzca un número, (%d) para terminar",clave);
        scanf("%d ",&num);
        if (num == clave) break; //El bucle se ejecutará infinitamente hasta que se ingrese la clave
    }
/* De igual manera podemos hacer uso de las sentencias break y continue en un bucle for
Cuando el compilador encuentra la sentencia break dentro de un for, termina la ejecución del bucle 
automáticamente.
Cuando el compilador encuentra le sentencia continue pasa directamente a la siguiente iteración, ignorando
por completo las sentencias o expresiones siguientes*/

    int clave2,i;
    puts("Introduce -9 para acabar.");
    
    clave = 1;
    for (i = 0; i < 8; i++) {
        if (clave2 == -9) continue; //Lee 7 veces y si el número ingresado es diferente de -9, lo imprime
        scanf("%d",&clave2);
    printf("clave %d\n",clave2);
    }printf("VALORES FINALES i = %d clave2 = %d",i,clave2);

/* El bucle do while es lo mismo que el while, se ejecuta mientras una condición se cumpla, sin embargo,
el contenido que tiene dentro se ejecuta como mínimo una vez.*/

    char digito;
    do{
        printf("Introduzca un dígito (0-9): ");  //Lee por lo menos una vez 
        scanf("%c",&digito);
    } while ((digito < '0') || ('9' < digito));  // Se ejecuta mientras el digito ingresado sea un número

/* Existen tres maneras de salir de un bucle
1) Que el bucle llegue al final de su iteración
2) Preguntando antes de una iteración
3) Por medio de un valor centinela
El único que no se ha ejemplificado ha sido el segundo inciso, por lo que se mostrará un ejemplo
*/

    int numer, sum = 0;
    char resp = 'S';
    while ((resp == 'S' || resp == 's')){
        printf("Introduzca un número: ");
        scanf("%d%*c",&numer);
        sum += numer;
        printf("¿Existen más números?(S para Si, N para No): ");
        scanf("%c",&resp);
    }

/*Al igual que con los condicionales, es posible anidad bucles, de forma que un bucle anidado consta de un
bucle interno y uno externo, de modo que cada que se itera sobre el externo, se repiten las iteraciones de
los bucles internos*/

    int nu = 0;
    printf("Ingrese el numero de filas que desea que tenga la piramide: ");
    scanf("%i", &nu);

    int l = 1;
    for (int i = nu; i>=0; i--){  // Cada que se itera sobre este bucle, los bucles internos se repiten
        for (int j = i; j>0; j--){
            printf(" ");
        }        
        for (int k = 1; k<=l; k++){
            printf("*");
        }
        l+=2;
        printf("\n"); 
    }

// Un enum es un tipo definido por el programador con costantes simbólicas de tipo entero

    enum dias_semana{
        LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO
    };
//Podemos usar los enums en bucles
    enum dias_semana dia;  //la variable dia es un tipo de dato enum
    for (dia = LUNES; dia <= DOMINGO; dia++){
        printf("%d ",dia);
    }
}

