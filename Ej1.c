#include "Menu.h"
#include "Empleado.h"
#include "ListEmpleado.h"

char validacion(){
    char rta;
    printf("Desea seguir? s/n   \n");
    fflush(stdin);
    scanf("%c",&rta);
return rta;
}

nodoEmpleado* archiToList(char archivo[]){
    nodoEmpleado* listEmp = inicLista();
    stEmpleado e;
    FILE *arch = fopen(archivo, "rb");
    if(arch){
        while(fread(&e, sizeof(stEmpleado), 1, arch)>0){
        nodoEmpleado*eL = crearnodoEmpleado(e);
        listEmp = agregarAlFinal(listEmp,eL);
        }
    fclose(arch);
    }
    return listEmp;
}

void ejecutarEj1(){
    char a[20];
    nodoEmpleado*lista;
    printf("\nIngrese el nombre del archivo que mudara a una lista: ");
    fflush(stdin);
    gets(a);
    lista = archiToList(a);
    mostrarLista(lista);
}

