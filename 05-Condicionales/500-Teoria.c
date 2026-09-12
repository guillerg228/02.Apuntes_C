/*  **** Estructuras de contros ****

Las estructuras de control regulan el flujo de la ejecución de un programa o función
*/

#include <stdio.h>

int main(){

/*La sentencia if es la principal sentencia de control, si se cumple la condición entre parentesis
se ejecuta lo que contenga el bloque siguiente */
    int n1, d1;
    printf("Introduzca dos enteros:");
    scanf("%d %d",&n1,&d1);
    if (n1%d1== 0) printf(" %d es divisible entre %d\n",n1,d1);
    
/* Podemos indicar que pasa si no se cumple dicha condición con un else*/
    int n2, d2;
    printf( "Introduzca dos enteros: ");
    scanf("%d %d",&n2,&d2);
    if (n2%d2 == 0)
        printf("%d es divisible entre %d\n",n2,d2);
    else
        printf("%d no es divisible entre %d\n",n2,d2);

/* De igual manera podemos anidar ifs dentro de else para tener más de una condición posible a cumplir*/
    float numero;
    printf( " Introduzca un número positivo o negativo: ");
    scanf("%f",&numero);
    /* comparar número con cero */
    if (numero > 0){
        printf("%.2f %s", numero, "es mayor que cero\n");
        puts( "Pruebe de nuevo introduciendo un número negativo");
    }else if (numero < 0){
        printf("%.2f %s", numero, "es menor que cero\n");
        puts( "pruebe de nuevo introduciendo un número positivo");
    }else{
        printf("%.2f %s", numero, "es igual a cero\n");
    }

/* La sentencia switch se utiliza para seleccionar una de entre muchas alternativas, es util cuando la condición se basa en valor de una
variable o expresión simple, llamada expresión de control*/

    char nota;
    printf("Introduzca calificación (A-F) y pulse Intro:");
    scanf("%c",&nota);

    switch (nota){
    case 'A': puts("Excelente. Examen superado");
        break;  //El compilador al encontrar el break termina con la ejecución del switch
    case 'B': puts("Notable. Suficiencia");
        break;
    case 'C': puts("Aprobado");
        break;
    case 'D':   //Aquí se olvidó el brak, por lo que el compilador pasa a la siguiente opción y la ejecuta hasta encontrar el break
    case 'F': puts("Reprobado");
        break;
    default:
        puts("No es posible esta nota");
    }


/* Operador ternadio condicion? expresion1 : expresion2; */
    int n1, n2;
    printf("Introduzca dos números positivos o negativos:");
    scanf("%d %d",&n1,&n2);
    
    /* selección con if-else */
    if (n1 > n2)
        printf("%d > %d",n1,n2);
    else
    printf("%d <= %d",n1,n2);
    
    /* operador condicional */
    n1 > n2 ? printf("%d > %d",n1,n2): printf("%d <= %d",n1,n2);

/* Evaluación en corto circuito
    Este tipo de evaluación significa que puede se detener la evaluacion de una expresión lógica tan pronto su valor pueda ser
    determinado con total certeza 
    
    C realiza evaluación en cortocircuito con los operadores && y ||, de modo que evalúa primero la expresión más a la izquierda
    de las dos expresiones unidas por && o bien por ||
    
    Si x es cero, la condición
    if ((x != 0.0) && (y/x > 7.5))
    es falsa ya que (x != 0.0) es falsa. Por consiguiente, no hay necesidad de evaluar la expresión (y/x> 7.5) ya que va a ser falsa*/

    return 0;
}