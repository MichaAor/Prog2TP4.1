#include "Menu.h"
#include "pilaEmpleado.h"
#include "Empleado.h"
#include "ListEmpleado.h"


void ejecutarEj7(){
    char a[20];
    pilaEmpleado pilaEmp;
    inicpilaEmpleado(&pilaEmp);
    printf("\nIngrese el nombre del ARCHIVO que mudara a una Pila: ");
    fflush(stdin);
    gets(a);
    pilaEmp = archiToPil(a);
    mostrarPila(&pilaEmp);
}

nodoEmpleado* pilaToList(pilaEmpleado*p,nodoEmpleado*list){
    pilaEmpleado aux;
    inicpilaEmpleado(&aux);
    while(!pilaEmpleadovacia(p)){
            nodoEmpleado*nuevo  = inicLista();
            nuevo->dato = tope(p);
            agregarAlFinal(list,nuevo);
            apilaEmpleador(&aux,desapilaEmpleador(p));
        }
        return list;
    }

nodoEmpleado* eliminarValRecu(nodoEmpleado*list){
    nodoEmpleado*aBorrar = inicLista();
    if(list){
        if(list->dato.legajo == 10){
            aBorrar = list;
            list = list->sig;
            free(aBorrar);
        }else{
            list->sig = eliminarValRecu(list->sig);
        }
    }
}
