/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

void main()
{
    char nombre[10], apellido[20];    //variables lista de caracteres   
    int edades;                         // Variable entero  
    float  altura, peso, total;         // Variables flotantes
    printf("!--------------------------------------!\n");
    printf("!         Calculando tu IMC            !");             //Imprimiendo
    printf("\n!--------------------------------------!");
    printf("\n ¿Cuál es tu nombre?");
    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");         
    scanf("%s", &nombre);                                           //Leyendo
    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("\n ¿Cuál es tu apellido?");
    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    scanf("%s", &apellido);
    printf("\n ¿Cuánto pesas (lb)?");
    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    scanf("%f", &peso);
    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("¿Cuánto mides (cm)?");
    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    scanf("%f", &altura);
    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("¿Que edad tienes?");
    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    scanf("%i",&edades);
    printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("\n \n \n \n \n \n \n \n \n \n \n \n \n");
    
    total=peso*pow(altura,2);
    
    printf("\n-------------------------------\n");
    printf("Tu nombre es:\n%s", nombre);
    printf("\n                              .\n");
    printf("Tu apellido es:\n%s", apellido);
    printf("\n                              .\n");
    printf("Tu edad es de:\n%i", edades);
    printf(" años\n");
    printf("Tu IMC es de:\n%.2f", total);
    printf("\n-------------------------------\n");
    
    
    
}
