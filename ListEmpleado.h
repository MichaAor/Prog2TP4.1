#ifndef LISTEMPLEADO_H_INCLUDED
#define LISTEMPLEADO_H_INCLUDED

#include "Empleado.h"

typedef struct{

    stEmpleado dato;
    struct nodoEmpleado*sig;

}nodoEmpleado;

nodoEmpleado* inicLista();
nodoEmpleado* crearnodoEmpleado(stEmpleado e);
nodoEmpleado* agregarAlPrincipio(nodoEmpleado* lista, nodoEmpleado* nuevonodoEmpleado);
nodoEmpleado* agregarAlFinal(nodoEmpleado* lista, nodoEmpleado* nuevo);
nodoEmpleado* buscaUltimo(nodoEmpleado* lista);
nodoEmpleado* buscaEmpleado(nodoEmpleado* lista, char apellido[]);

#endif // LISTEMPLEADO_H_INCLUDED
