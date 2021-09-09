#include "Archivo.h"
#include "Menu.h"
#include "Empleado.h"

void ejecutarArchiEmpleado(){
    int rta;
    char archi[20];
    printf("\nQue desea realizar? \n1.Ver el archivo \n2.Agregar un Empleado \n3.Iniciar un archivo desde cero.\n");
    fflush(stdin);
    scanf("%d",&rta);
    printf("\nIngrese el nombre del archivo que desea abrir(o crear,segun sea el caso)\n");
    fflush(stdin);
    gets(archi);
    switch(rta){
        case 1:
            muestraArchivoEmpleados(archi);
            break;
        case 2:
            agregarUnEmpleadoArchi(archi);
            break;
        case 3:
            generaArchivoEmpleados(archi);
            break;
        default:
            printf("Ingreso una opcion invalida");
    }
}
void agregarUnEmpleadoArchi(char archivo[]){
    stEmpleado e;
    char rta = 's';
    FILE*pArchi = fopen(archivo,"ab");
    if(pArchi!=NULL){
        e = cargaUnEmpleado();
        rta = aceptado(e);
        if(rta == 's'){
            fwrite(&e,sizeof(stEmpleado), 1, pArchi);
        }
        fclose(pArchi);
    }
}

void generaArchivoEmpleados(char archivo[]){
    FILE *archi = fopen(archivo, "wb");
    stEmpleado e;
    char rta,val = 's';
    if(archi){
        while(val == 's'){
            e = cargaUnEmpleado();
            rta = aceptado(e);
            if(rta == 's'){
            fwrite(&e,sizeof(stEmpleado), 1, archi);
            }
            val = validacion();
        }
        fclose(archi);
    }
}


void muestraArchivoEmpleados(char archivo[]){
    stEmpleado e;
    FILE *arch = fopen(archivo, "rb");
    if(arch){
        while(fread(&e, sizeof(stEmpleado), 1, arch)>0){
            muestraUnEmpleado(e);
        }
        fclose(arch);
    }
}

