/* Escribir un programa que solicite al usuario un caracter y que lo situe en el centro de la pantalla, el usuario debe poder a
continuacion desplazar el caracter pulsando las teclas A W S D (Izquierda, arriba, abajo, derecha, respectivamente), y F para salir 
*/

#include <stdio.h>
#include <windows.h>
#include <ctype.h>

void lugar (int x, int y);
void moverse(char c);

int main(){
    char carIng;
    printf("Ingrese un caracter: ");
    scanf("%c", &carIng);
    getchar(); // limpiar buffer
    moverse(carIng);
}

void lugar (int x, int y){
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void moverse(char c){
    int xIn = 58, yIn = 13;
    lugar(xIn, yIn);
    printf("%c", c);

    char m;
    do{
        lugar(xIn, yIn);
        printf("%c", c);
        lugar(0,0);
        m = getchar();
        m = toupper(m);
        system("cls");

        switch (m){
        case 'W':
            yIn--;
            break;
        case 'A':
            xIn--;
            break;
        case 'S':
            yIn++;
            break;
        case 'D':
            xIn++;
            break;
        case 'F':
            return;
        default:
            break;
        }
    } while (m != 'F');
    return;
}