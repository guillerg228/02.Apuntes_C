#include <stdio.h>
void funcionA(char c);
void funcionB(char c);

int main(){
    printf("\n");
    funcionA('Z');
    printf("\n");
    return 0;
}

void funcionA(char c){
    if (c>='A'){
        funcionB(c);
        printf("%c", c);
    }
}

void funcionB(char c){
    funcionA(--c);
}
