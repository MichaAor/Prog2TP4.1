#include "Menu.h"
#include "ListEmpleado.h"
#include "Empleado.h"

void ejecutarEj4(){
    char a[20];
    nodoEmpleado*lista;nodoEmpleado*lista2;
    printf("\nIngrese el nombre del ARCHIVO que mudara a una lista: ");
    fflush(stdin);
    gets(a);
    lista = archiToListOrd(a);
    mostrarLista(lista);
    printf("\nIngrese el nombre del ARCHIVO que mudara a una lista2: ");
    fflush(stdin);
    gets(a);
    lista2 = archiToListOrd(a);
    mostrarLista(lista2);


}

nodoEmpleado*listaInterOrder(nodoEmpleado*lista,nodoEmpleado*lista2){
    if(!lista){   /// if(lista==NULL)
        lista=lista2;
    }else{
        if(lista2->dato.legajo < lista->dato.legajo){
            nodoEmpleado*aux = lista2;
            lista2 = lista2->sig;
            lista = agregarAlPrincipio(lista,aux);
        }else{
            nodoEmpleado* ante = lista;
            nodoEmpleado* seg = lista->sig;
            while(seg != NULL && lista2->dato.legajo > seg->dato.legajo){
                ante = seg;
                seg = seg->sig;
            }
            ante->sig = lista2;
            lista2->sig = seg;
        }
    }

    return lista;
}
