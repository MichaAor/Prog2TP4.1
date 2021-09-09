#include "Menu.h"
#include "ListEmpleado.h"
#include "Menu.h"
#include "ListEmpleado.h"
#include "Empleado.h"


nodoEmpleado* invertirLista(nodoEmpleado* lista){
    nodoEmpleado*seg = lista;
    if(seg){
        seg = invertirLista(seg->sig);
    }else{
        seg = seg->sig;
    }
    return seg;
}

void ejecutarEj6(){
    char a[20];
    nodoEmpleado*lista;
    printf("\nIngrese el nombre del ARCHIVO que mudara a una lista: ");
    fflush(stdin);
    gets(a);
    lista = archiToListOrd(a);
    lista = invertirLista(lista);
    mostrarLista(lista);
}
