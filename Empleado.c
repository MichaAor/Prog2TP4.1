#include "Empleado.h"
#include "Menu.h"

char aceptado(stEmpleado e){
    char rta;
    printf("\nEl empleado creado es el siguiente\n");
    muestraUnEmpleado(e);
    printf("\nDesea guardarlo?\n");
    fflush(stdin);
    scanf("%c",&rta);
return rta;
}

void muestraUnEmpleado(stEmpleado e){
    printf("\nId.........................: %6d", e.id);
    printf("\nNombre.........................: %s", e.nombre);
    printf("\nApellido.........................: %s", e.apellido);
    printf("\nDni.........................: %s", e.dni);
    printf("\nGenero.........................: %c", e.genero);
    printf("\nLegajo.....................: %6d", e.legajo);
    printf("\nCargo......................: %s\n", e.cargo);
}

stEmpleado cargaUnEmpleado(){
    stEmpleado e;
        printf("\n///---CARGA DE EMPLEADOS---\\\"\n");
        printf("\nIngrese la ID del empleado: ");
        fflush(stdin);
        scanf("%d",&e.id);
        printf("\nIngrese el NOMBRE del empleado: ");
        fflush(stdin);
        scanf("%s",e.nombre);
        printf("\nIngrese el APELLIDO del empleado: ");
        fflush(stdin);
        scanf("%s",e.apellido);
        printf("\nIngrese el DNI del empleado: ");
        fflush(stdin);
        scanf("%s",e.dni);
        printf("\nIngrese el GENERO del empleado: ");
        fflush(stdin);
        scanf("%c",&e.genero);
        printf("\nIngrese el LEGAJO del empleado: ");
        fflush(stdin);
        scanf("%d",&e.legajo);
        printf("\nIngrese el CARGO del empleado: ");
        fflush(stdin);
        scanf("%s",e.cargo);
    return e;
}
