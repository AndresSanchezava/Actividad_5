/*Nombre del programador: Sanchez Avalos Andres.
Nombre del programa:
Escuela: Centro Universitario de Ciencias Exactas e Ingenierias (CUCEI), UdeG.
Fecha de programa: 00/00/2020.
Descripcion del programa: */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
int opc;
system("title Sanchez Avalos Avalos");
printf("\n /*Explicacion al usuario sobre el programa*/");
do
{
printf("\n\n /*Dame...(solicitar informacion)*/");
printf("\n\n   Menu:\n   1) For\n   2) While\n   3) Do While\n   4) Salir\n   Seleccionado: ");
scanf("%i",&opc);
switch(opc)
{
case 1:
break;
case 2:
break;
case 3:
break;
case 4:
/*salir*/
break;
default:
printf("\n   La opcion >> %i << elegida es invalida \n",opc);			
}
}
while(opc!=4);
return 0;
}
