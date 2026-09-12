/*Un sistema de ecuaciones lineales
ax+by = c
dx+ey = f
se puede resolver con las siguientes fórmulas:

x = (ce – bf) / (ae – bd)
y = (af – cd) / (ae – bd)
Diseñar un programa que lea dos conjuntos de coeficientes y visualice los valores de x y y

*/
#include <stdio.h>

int main(){

    float a, b, c, d, e, f;
    printf("\n **** Sistemas 2x2 ****\n    ax+by = c\n    dx+ey = f\n\n -->Ingrese a, b y c:\n");
    scanf("%f %f %f",&a,&b,&c);
    printf(" -->Ingrese d, e y f :\n");
    scanf("%f %f %f",&d,&e,&f);

    printf("     x = %.2f\n     y = %.2f", ((c*e)-(b*f))/((a*e)-(b*d)), ((a*f)-(c*d))/((a*e)-(b*d)));

}