#include "Menu.h"
#include "ListEmpleado.h"
#include "Empleado.h"

nodoEmpleado* archiToListOrd(char archivo[]){
    nodoEmpleado* listEmp = inicLista();
    stEmpleado e;
    FILE *arch = fopen(archivo, "rb");
    if(arch){
        while(fread(&e, sizeof(stEmpleado), 1, arch)>0){
        nodoEmpleado*eL = crearnodoEmpleado(e);
        listEmp = agregarEnOrdenPorLegajo(listEmp,eL);
        }
    fclose(arch);
    }
    return listEmp;
}

void ejecutarEj2(){
    char a[20];
    nodoEmpleado*lista;
    printf("\nIngrese el nombre del archivo que mudara a una lista: ");
    fflush(stdin);
    gets(a);
    lista = archiToListOrd(a);
    mostrarLista(lista);
}
