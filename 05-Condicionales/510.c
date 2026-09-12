/* Se desea calcular el salario neto semanalde los trabajadores de una empresa de acuerdo con las 
siguientes normas: 
- Horas semanales trabajadas <38 a una tasa dada
- Horas extra (38 o más) a una tasa 50% superior a la dada 
- 0% de impuestos del el salario bruto es menor o igual a 800
- 10% de impuestos si el salario bruto es mayor a 800 */

#include <stdio.h>

int main(){
    int horas;
    float tasa, salario_fn, impuestos;

    printf("\nIngrese el pago por hora: ");
    scanf("%f", &tasa);
    printf("Ingrese el numero de horas trabajadas: ");
    scanf("%d", &horas);

//Calculo de salario total sin impuestos
    if(horas <38) salario_fn = horas*tasa;
    else if(horas>= 38){
        horas -= 38;
        salario_fn = (38*tasa) + (horas)*(tasa*1.5);
    }
//Calculo de impuestos a pagar
    if(salario_fn <= 800.0) impuestos = 0;
    else impuestos = salario_fn*0.10;

    printf("\n--> Salario sin impuestos: %.2f", salario_fn);
    printf("\n--> Impuestos aplicados: %.2f", impuestos);
    printf("\n--> Salario precibido: %.2f", salario_fn-impuestos);
}