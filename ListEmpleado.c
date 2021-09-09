#include "ListEmpleado.h"
#include <stddef.h>

nodoEmpleado* inicLista(){
    return NULL;
}

nodoEmpleado* crearnodoEmpleado(stEmpleado dato){
    nodoEmpleado* nuevo = (nodoEmpleado*)malloc(sizeof(nodoEmpleado));
    nuevo->dato = dato;
    nuevo->sig = NULL;
    return nuevo;
}

nodoEmpleado* agregarAlPrincipio(nodoEmpleado* lista, nodoEmpleado* nuevonodoEmpleado){
    nuevonodoEmpleado->sig = lista;
    return nuevonodoEmpleado;
}

void mostrarLista(nodoEmpleado* lista){
    nodoEmpleado* seg = lista;
    while(seg!=NULL){
        muestraUnnodoEmpleado(seg);
        seg = seg->sig;
    }
}

void muestraUnnodoEmpleado(nodoEmpleado* nodoEmpleado){
    muestraUnEmpleado(nodoEmpleado->dato);
}

nodoEmpleado* agregarAlFinal(nodoEmpleado* lista, nodoEmpleado* nuevo){
    if(lista == NULL){
        lista = nuevo;
    }else{
        nodoEmpleado* ultimo = buscaUltimo(lista);
        ultimo->sig = nuevo;
    }

    return lista;
}

nodoEmpleado* buscaUltimo(nodoEmpleado* lista){
    nodoEmpleado* seg = lista;
    while(seg->sig!=NULL){
        seg=seg->sig;
    }
    return seg;
}

int cuentaLista(nodoEmpleado* lista){
    int cont=0;
    nodoEmpleado* seg = lista;
    while(seg!=NULL){
        cont++;
        seg = seg->sig;
    }
    return cont;
}

nodoEmpleado* buscaEmpleado(nodoEmpleado* lista, char apellido[]){
    nodoEmpleado* seg = lista;

    while(seg!=NULL && strcmp(seg->dato.apellido,apellido)!=0){
        seg = seg->sig;
    }

    return seg;
}

int buscaEmpleadoFlag(nodoEmpleado* lista,int legajo){
    nodoEmpleado* seg = lista;
    int flag=0;

    while(seg!=NULL){
            if(seg->dato.legajo == legajo){
                flag = 1;
                break;
            }
        seg = seg->sig;
    }
    return flag;
}

nodoEmpleado* agregarEnOrdenPorLegajo(nodoEmpleado* lista, nodoEmpleado* nuevonodoEmpleado){
    if(!lista){   /// if(lista==NULL)
        lista=nuevonodoEmpleado;
    }else{
        if(nuevonodoEmpleado->dato.legajo < lista->dato.legajo){
            lista = agregarAlPrincipio(lista, nuevonodoEmpleado);
        }else{
            nodoEmpleado* ante = lista;
            nodoEmpleado* seg = lista->sig;
            while(seg != NULL && nuevonodoEmpleado->dato.legajo > seg->dato.legajo){
                ante = seg;
                seg = seg->sig;
            }
            ante->sig = nuevonodoEmpleado;
            nuevonodoEmpleado->sig = seg;
        }
    }

    return lista;
}

nodoEmpleado* borrarLista(nodoEmpleado* lista){
    nodoEmpleado* proximo=NULL;
    nodoEmpleado* seg=NULL;

    seg = lista;
    while(seg){
        proximo = seg->sig;
        free(seg);
        seg=proximo;
    }
    return seg;
}
