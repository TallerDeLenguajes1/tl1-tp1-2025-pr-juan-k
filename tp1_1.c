#include <stdio.h>

int main(){
    printf("Hola mundo");
    int num = 1;
    int *punt;
    *punt = num;
    printf("\nEl contenido del puntero:%d",*punt);
    printf("\n La direccion de memoria que guarda el puntero:%p",punt);
    printf("\n La direccion de memoria de la variable:%d",&num);
    printf("\n La direccion de memoria del puntero:%d",&punt);
    printf("\n Tamanio de memoria de la variable:%d",sizeof(num));
    return 0;
}