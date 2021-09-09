#include "pilaEmpleado.h"


void inicpilaEmpleado(pilaEmpleado*p){
       p->dim = 50;
       p->e = (stEmpleado *)malloc(p->dim*sizeof(stEmpleado));
       p->v = 0;
}

void apilaEmpleador(pilaEmpleado *p, stEmpleado dato){
    if(p->v == p->dim){
        p->dim+=50;  /// p->dim = p->dim + 50;
        p->e = (stEmpleado *)realloc(p->e, p->dim * sizeof(stEmpleado));
    }
    p->e[p->v] = dato;
    p->v++;
}

stEmpleado desapilaEmpleador(pilaEmpleado *p){
    stEmpleado z;
    if(p->v > 0){
        z = p->e[p->v -1];
        p->v--;
    }
    return z;
}

stEmpleado tope(pilaEmpleado *p)
{
    return p->e[p->v - 1];
}

int pilaEmpleadovacia(pilaEmpleado *p)
{
    return (p->v <= 0) ? 1 : 0;
}

void mostrarPila(pilaEmpleado *p){
    pilaEmpleado aux;
    inicpilaEmpleado(&aux);
    while(!pilaEmpleadovacia(p)){
        muestraUnEmpleado(tope(p));
        apilaEmpleador(&aux,desapilaEmpleador(p));
    }
}
