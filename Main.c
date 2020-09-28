#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    char nombre[100];
    int edad;
    printf("Hola mundo\n");
    printf("Nombre:");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s", nombre);
    printf("Edad: ");
    scanf("%u", &edad);
    printf("Vas a cumplir %u", edad + 1);
    return 0;
}