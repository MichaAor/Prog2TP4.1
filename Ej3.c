#include "Menu.h"
#include "ListEmpleado.h"
#include "Empleado.h"

void ejecutarEj3(){
    char a[20];
    int b;
    nodoEmpleado*lista;
    printf("\nIngrese el nombre del ARCHIVO que mudara a una lista: ");
    fflush(stdin);
    gets(a);
    lista = archiToListOrd(a);
    mostrarLista(lista);
    printf("\nIngrese el legajo del EMPLEADO que desea saber si existe: ");
    fflush(stdin);
    scanf("%d",&b);
    b = buscaEmpleadoFlag(lista,b);
    if(b == 1){
        printf("\nEl empleado existe");
    }else{
        printf("\nEl empleado no existe");
    }
}
