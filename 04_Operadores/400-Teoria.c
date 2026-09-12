//Una expresión es una serie de operadores y operandos que especifican un cálculo

#include <stdio.h>

int main(){
    int expresion = 7 * 10 - 5 % 3 * 4 + 9;
    printf("Resultado = %d", expresion);

/* Prioridad   asociatividad
    *, /, %        ->
    +, -           ->
*/

    int n,m;
    n = 4;
    m = --n;   //se decrementa y luego se asigna
    printf("%d",m);  //m = 3
    n = 9;
    m = n++;   //Se hace la asignación y luego se incrementa
    printf("%d",m);    //m = 9

// Operador condicional
    int numero;
    printf("\nIngrese un numero: "); scanf("%d",&numero);
    (numero%2 == 0) ? printf("Numero par") : printf("Numero impar");
    //  condiion    ?    si se cumple      :   Si no se cumple     ;

// Sizeof
    printf("\n%d",sizeof(numero)); 
    //Nos ayuda a conocer el tamaño en bytes de una variable.

//Operador Coma
    int i;
    i = 12, i++, i++;
    //Nos permite combinar dos o más expresiones en una linea.

//Casting de datos
    (float)i;
    //(tipoDato)variable

}