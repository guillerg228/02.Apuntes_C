/* En una empresa de computadoras los salarios de los empleados se van a aumentar segun su contrato actual: 
    0     a 9000 ---> 20%
    9001  a 15000 --> 10%
    15001 a 20000 --> 5%
    mas de 20000 ---> 0%
Escribir un programa que solicite el salario actual del empleado y calcule y visualice el nuevo salario
*/
#include <stdio.h>

int main(){

    int salario = 0;
    printf("Ingrese el salario antual del empleado:");

    if (salario > 0 && salario <9001){
        salario = salario + salario*(0.20);
    }else if (salario > 9000 && salario <15001){
        salario = salario + salario*(0.10);
    }else if (salario > 15000 && salario <20001){
        salario = salario + salario*(0.10);
    }else if (salario > 20000){
        printf("No aplica aumento de salario");
    }else{
        printf("Salario no valido");
    }
    
    

}