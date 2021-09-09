#ifndef pilaEmpleadoEMPLEADO_H_INCLUDED
#define pilaEmpleadoEMPLEADO_H_INCLUDED

#include "Empleado.h"

typedef struct{
    stEmpleado *e;
    int v;
    int dim;
}pilaEmpleado;

void inicpilaEmpleado(pilaEmpleado *p);
void apilaEmpleador(pilaEmpleado *p, stEmpleado dato);
stEmpleado desapilaEmpleador(pilaEmpleado *p);
stEmpleado tope(pilaEmpleado *p);
int pilaEmpleadovacia(pilaEmpleado *p);


#endif // pilaEmpleadoEMPLEADO_H_INCLUDED
