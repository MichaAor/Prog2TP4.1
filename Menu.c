#include "Menu.h"
#include "time.h"

#include "Ej1.h"
#include "Ej2.h"
#include "Ej3.h"
#include "Ej4.h"
#include "Ej5.h"
#include "Ej6.h"
#include "Ej7.h"*/

void ejecutarMenu(){
    int op;
    char rta;
    printf("/////Bienvenido al TRABAJO PRACTICO N4///// \n");
    do{
    system("cls");
    printf("--Seleccione un Ejercicio(Del 1 al 7)--\n(ingrese 0 para entrar al menu de archivos)\n");
    fflush(stdin);
    scanf("%d",&op);
    ejecutarEjercicios(op);
    printf("\n===============================================\n");
    rta = validacion();
    }while(rta == 's');

    printf("Gracias por ejecutar");
}

void ejecutarEjercicios(int op){
    char rta;
    printf("Desea ver la consigna del ejercicio seleccionado?\n(en caso de haber elegido la opcion 0, responda n)\n");
    fflush(stdin);
    scanf("%c",&rta);
    if(rta == 's'){mostrarEjercicio(op);}
    printf("\nRESOLUCION: \n");
    switch(op){
        case 0:
            ejecutarArchiEmpleado();
            break;
        case 1:
            ejecutarEj1();
            break;
        case 2:
            ejecutarEj2();
            break;
        case 3:
            ejecutarEj3();
            break;
        case 4:
            ejecutarEj4();
            break;
        case 5:
            ejecutarEj5();
            break;
        case 6:
            ejecutarEj6();
            break;
        case 7:
            ejecutarEj7();
            break;
        default:
            printf("Ingreso una respuesta invalida");
            break;
    }
}

void mostrarEjercicio(int op){
    switch(op){
        case 1:
            printf("1.Hacer un programa que lea de un archivo datos y los inserte en una lista.");
            break;
        case 2:
            printf("2.Hacer un programa que lea de un archivo datos y los inserte en una lista en forma ordenada.");
            break;
        case 3:
            printf("3.Hacer una función que retorne un 1 (uno) o 0 (cero) si existe un determinado elemento en una lista dada.");
            break;
        case 4:
            printf("4.Hacer una función que intercale en orden los elementos de dos listas ordenadas generando una nueva lista. Se deben redireccionar los punteros, no se deben crear nuevos nodos.");
            break;
        case 5:
            printf("5.Codificar el TDA Pila con las funciones necesarias, implementada con una lista enlazada (Similar al ejercicio hecho con arreglo).");
            break;
        case 6:
            printf("6.Invertir los elementos de una lista redireccionando solamente los punteros. (No se deben crear nuevos nodos)");
            break;
        case 7:
            printf("7.Utilizando el TDA Pila creado en el punto 5, cargar la pila con números enteros.\n\t a. Luego, recorrer dicha pila e insertar por orden de llegada (al final) en una lista simplemente enlazada aquellos números que sean pares. Cuidado, la función no debe perder la pila original, trabaje de forma tal que se conserven sus datos.\n\t b. Eliminar de la lista cargada en el ejercicio anterior, aquellos nodos que contengan valores menores a 10.");
            break;
        default:
            printf("Ingreso una respuesta invalida");
            break;
    }
}

