#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

typedef struct{
    int id;
    char nombre[30];
    char apellido[30];
    char dni[10];
    char genero;
    int legajo;
    char cargo[20];
}stEmpleado;

void muestraUnEmpleado(stEmpleado e);
stEmpleado cargaUnEmpleado();


#endif // EMPLEADO_H_INCLUDED
