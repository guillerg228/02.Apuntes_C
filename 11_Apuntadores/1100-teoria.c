// Podemos obtener el valor y la direccion de memoria de una variable

#include <stdio.h>

void incrementar5(int *i);

void registrotemp(struct temperatura *t);

struct temperatura {
    float alta;
    float baja;
};


struct persona{
    char nombre[30];
    int edad;
    int altura;
    int peso;
};




int main(){
    int n = 75;
    printf("n = %d \n", n);
    printf("&n = %p \n", &n);


//El tipo de variable que almacena una direccion de memoria se llama apuntador
    int *p = &n;
    printf("p = %p\n", p);


//El operador & devuelve la direccion de memoria  de la variable a la cual se aplica
//Podemos inicializar apuntadores de distintas formas:
    int edad = 50;
    int *p_edad = &edad;

    char *p2;
    char alfa = 'A';
    p2 = &alfa;
    printf("%p\n", p2);


    char cd[] = "Compacto";
    char *c;
    c = cd; // Esto ya que una cadena es un apuntador al primer elemento del arreglo
    printf("%p\n", c);


// Indireccion de apuntadores: podemos acceder al valor de la variable a la que se apunta usando el operador *
    printf("%d\n", *p_edad);
    *p_edad = 75;
    printf("%d\n", *p_edad);



//C  requiere que las variables apuntador direccionen a variables del mismo tipo de dato que esta ligado a sus decalaraciones
// Un apuntador no inicializado, como cualquier variable, tiene un valor nulo aleatorio hasta que se inicializa
// Un apuntador nulo no apunta a ninguna parte

    char *pn = NULL;
// Este tipo de apuntadores se unsa para test condicionales que determinan si un apuntador se ha inicializado


// Tambien es posible tener apuntadores a apuntadores
    int valor_e = 100;
    int *ptr1 = &valor_e;
    int **ptr2 = &ptr1;
//Podemos asignar valores a valor_e de la siguiente forma
    valor_e = 95;
    printf("%d\n", valor_e);
    *ptr1 = 90;
    printf("%d\n", *ptr1);
    **ptr2 = 85;
    printf("%d\n", **ptr2);


//Un nombre de un arreglo es simplemente un apuntador, por lo que podemos usar notacion de subindices o notacion de apuntadores para
//acceder a los elementos del arreglo

    float v[10];
    float *p3;
    //float x = 100.5;
    int j;

    for(j = 0; j < 10; j++){
        *(v+j) = j*10.0;   //(v+j) es notacion de apuntadores
    }p3 = v+4;

    printf("\n");
    for(j=0; j<10; j++){
        printf("%.2f, ", *(v+j));
    }printf("\n%.2f", *p3);

    //No podemos modificar un puntero constante
    //v = &x;

    // Las cadenas de caracteres tambien son apuntadores constantes, por lo que no son mutables




    //Tambien podemos hacer arreglos cuyos elementos sean apuntadores
    int *ptr[10];   /* reserva un array de 10 apuntadores a enteros */
    ptr[5] = &edad; /* ptr[5] apunta a la dirección de edad */
    ptr[4] = NULL;  /* ptr[4] no contiene dirección alguna */

    char *puntos[25]; /* array de 25 apuntadores a carácter */
    int (*ptr10) [ ]; /* apuntador a un arreglo de enteros*/
    //(*ptr10)            es un puntero
    //(*ptr10) [ ]        es un puntero a un array
    //int (*ptr10) [ ]    es un puntero a un array de int


    //Arreglo de apuntadores a candenas
    char *nombres_meses[12] = { "Enero", "Febrero", "Marzo",
                                "Abril", "Mayo", "Junio",
                                "Julio", "Agosto", "Septiembre",
                                "Octubre", "Noviembre",
                                "Diciembre" };

    // Es posible considerar dos tipos de definiciones para cadenas
    char cadena1[ ]="Hola viejo mundo";
    char *cptr = "C a su alcance";

/*
int *ptr1[ ];           Arreglo de apuntadores a int
int (*ptr2) [ ];        Apuntador a un arreglo de elementos int
int * (*ptr3) [ ];      Apuntador a un arreglo de apuntadores a int
*/






//Existe la aritmetica de apuntadores
    int v1[10];
    int *ptr4;

    p = v;
    (v+4);          /* apunta al 5º elemento */
    p = p+6;        /* contiene la dirección del 7º elemento */
// Es algo asi como lo que hacemos con cadenas, unicamente se puede summar, no es posible otra operacion




// Podemos tratar constantes con apuntadores:
// Apuntadores constantes
    int x;
    int y;
    int *const p10 = &x;
    //p10 es constante, pero *p1 es posible modificarlo

// Apuntadores a constantes
    const int x1 = 25;
    const int y1 = 50;
    const int *p11 = &x1;
    //x1 es una constante, por lo que no puede ser modificada, pero p11 si

// Apuntadores constantes a constantes
    const int x2 = 25;
    const int *const p12 = &x;
    // En este caso no es posible modificar ni el apuntador, ni la variable a la que apunta



//Realizando la llamada a la funcion
    int i = 10;
    incrementar5(&i); // usamos la direccion de memoria


    int *pi = &i;
    int (*pf)(int *l); /* define puntero pf a función int con argumento int */
    pf = incrementar5;
    (*pf)(pi)




//Podemos apuntar a estructuras
    struct persona empleado = {"Amigo, Pepe", 47, 182, 85};
    struct persona *p;  /* se crea un puntero de estructura */
    p = &empleado;






//Asignacion dinamica de memoria

// malloc() para asignar memoria a un puntero
    
    /*
    tipo *puntero;
    puntero =(tipo *)malloc(tamaño en bytes);
    */
    long* p;
    p = (long*) malloc(32);
    // En el caso de que no haya memoria disponible, malloc() devuelve NULL

    int *r;
    r = (int*) malloc(10*sizeof(int));  




// free para liberar memoria
    //free(apuntador);
    free(r);


// calloc() y realoc() para reasignacion de memoria
    //calloc():
    // puntero = calloc(número elementos,tamaño de cada elemento);
    float *pf = NULL;
    pf = (float *) calloc(num, sizeof(float));


    //realoc()
    // puntero = realloc(puntero a bloque,tamaño en bytes);
    int n = 10;
    long* pl;
    pl = (long*) calloc(n,sizeof(long));
    pl = realloc(pl,0);
}





//Podemos pasar un apuntaror a una variable como argumeto de una funcion
void incrementar5 (int *i){
    *i += 5;
}

// le pasamos como parametro una estructura a una funcion, lo que hacemos
// es que el parametro es la direccion de memoria de dicha struct
void registrotemp(struct temperatura *t){
    float actual;
    // leertempactual(actual);
    if (actual > t -> alta)
        t -> alta = actual;
    else if (actual < t -> baja)
    t -> baja = actual; // usamos -> ya que estamos pasando por direccion
}


// Los apuntadores de funciones apuntan a codigo ejecutable




