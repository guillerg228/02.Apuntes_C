#include <stdio.h>

struct CD{ // Declaramos la estructura
        char titulo[30];
        char artista[25];
        int num_canciones;
        float precio;
        char fecha_compra[8];
    } cd1, cd2, cd3;   //Definimos estructuras

    struct complejo{  
        float pr;
        float pi;
        float modulo;
    };
    
    struct complejo com1, com2, com3; //Definimos la estructura

    //Para inicializar los valores de una estructura
    struct info_libro{
        char titulo[60];
        char autor[30];
        char editorial[30];
        int anio;
    }libro1={"Maravilla del saber ","Lucas Garcia", "McGraw-Hill", 1999};//Ccreamos un libro con los datos ingresados

    struct CD cd1 = {  //Otra forma para inicializar una estructura es fuera de su declaración
        "El humo nubla tus ojos",
        "Col Porter",
        15,
        2545,
        "02/6/99"
    };

struct persona{
    char nombre[30];
    int edad;
    float altura;
    float peso;
};

struct estudiante{
    char Nombre[41];
    int Num_Estudiante;
    int Anyo_de_matricula;
    float Nota;
};

// codigo para el paso por valor y por referencia de una estructura a una función
struct info_persona
{ char nombre[20];
char calle[30];
char ciudad[25];
char provincia[25];
char codigopostal[6];
};

void entrad_pna(struct info_persona* pp);
void ver_info(struct info_persona p);

int main(){  
    //Podemos asigmar una estructura a otra
    com1 = com2;

    struct persona mar;
    printf("Sizeof(persona): %d \n",sizeof(mar)); //Usamos el operador sizeof para conocer el tamaño de una estructura

    strcpy(cd1.titulo,"Granada");   //Podemos asignarle valores a una estructura mediante el operador (.) o (->)
    cd1.precio = 3450.75;
    cd1.num_canciones = 7;

/*El operador apuntador,1 ->, sirve para acceder a los datos de la estructura a partir de un apuntador. Para
 utilizar este operador se debe definir primero una variable apuntador para apuntar a la estructura  */

    struct estudiante *ptr_est;
    struct estudiante mejor;

    ptr_est = &mejor; /* ptr_est tiene la dirección(apunta a) mejor */
    strcpy(ptr_est -> Nombre, "Pepe alomdra");
    ptr_est -> Num_Estudiante = 3425;
    ptr_est -> Nota = 8.5;

/*Se recupera información de una estructura utilizando el operador de asignación o una sentencia de salida
(printf(), puts(), ...).
Para acceder a los miembros se utiliza el operador punto o el operador flecha (apuntador).*/

    float x,y;
    struct complejo z;
    struct complejo *pz;
    pz = &z; 
    x = z.pr; y = z.pi;

    printf("\nNúmero complejo (%.1f,%.1f), módulo: %.2f",
    pz->pr ,pz->pi, pz->modulo);

//  typedef permite al programador crear un sinónimo de un tipo de dato definido por el usuario o de un tipo ya existente.
//  Sintaxis:  typedef tipo_dato_definido nuevo_nombre
    typedef double Longitud;  // Ahora longitud se puede usar como sinónimo de double

    struct complejo{  // Podemos definir una estructura con un nombre
        float x,y;
    };
    typedef struct complejo Complex;

    typedef struct racional{  // Esta es otra manera de definirla
        int numerador;
        int denominador;
    } Racional;

    struct numero{  // Ahora podemos usarlas como tipos de datos
        Complex a;
        Racional r;
    };
    
//Podemos usar estructuras como elementos de arreglos, esto es idoneo para almacenar una gran cantidad de datos.
    struct info_libro libros[100];   // Declaramos una estructura con 100 elementos de tipo info_libro
    strcpy(libros[0].titulo, "C++ a su alcance");
    strcpy(libros[0].autor, "Luis Joyanes");
    strcpy(libros[0].editorial, "McGraw-Hill");
    libros[0].anio = 1999;

    //Tambien pordemos inicializar el arreglo con valores entre llaves
    struct info_libro libros[3] = { "C++ a su alcance", "Luis Joyanes","McGraw-Hill", 1999,
                                    "Estructura de datos", "Luis Joyanes", "McGraw-Hill", 1999, 
                                    "Problemas en Pascal", "Angel Hermoso", "McGraw-Hill", 1997};


/*C permite pasar estructuras a funciones, bien por valor o bien por referencia utilizando el operador &
//Cuando le pasamos por referencia una estructura a una funcion es necesario hacer uso del operador &, y para acceder a los
elementos de la estructura se usa el operador ->
*/
    struct info_persona reg_dat;
    entrad_pna(&reg_dat);  /* Pasa por referencia la variable */

    ver_info(reg_dat);
    printf( "\nPulsa cualquier carácter para continuar\n");  /* Pasa por valor */
    getchar();


return 0;
}

void entrad_pna(struct info_persona* pp)
{
puts("\n Entrada de los datos de una persona\n");
/* Para acceder a los campos se utiliza el selector -> */
printf("Nombre: "); gets(pp->nombre);
printf("Calle: "); gets(pp->calle);
printf("Ciudad: "); gets(pp->ciudad);
printf("Provincia: "); gets(pp->provincia);
printf("Código postal: "); gets(pp->codigopostal);
}
void ver_info(struct info_persona p)
{
puts("\n\tInformación relativa a la persona");
puts(p.nombre);
puts(p.calle);
puts(p.ciudad);
puts(p.provincia);
puts(p.codigopostal);
}