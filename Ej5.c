#include "Menu.h"
#include "pilaEmpleado.h"
#include "Empleado.h"

pilaEmpleado archiToPil(char archivo[]){
    pilaEmpleado pilaEmp;
    inicpilaEmpleado(&pilaEmp);
    stEmpleado e;
    FILE *arch = fopen(archivo, "rb");
    if(arch){
        while(fread(&e, sizeof(stEmpleado), 1, arch)>0){
        apilaEmpleador(&pilaEmp,e);
        }
    fclose(arch);
    }
    return pilaEmp;
}

void ejecutarEj5(){
    char a[20];
    pilaEmpleado pilaEmp;
    inicpilaEmpleado(&pilaEmp);
    printf("\nIngrese el nombre del ARCHIVO que mudara a una lista: ");
    fflush(stdin);
    gets(a);
    pilaEmp = archiToPil(a);
    mostrarPila(&pilaEmp);
}





