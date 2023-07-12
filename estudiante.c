#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estudiante.h"

struct EstudianteEstructura{

    char apellido[20];
    char nombre[20];
    long dni;

};


Estudiante crearEstudiante(char ap[20], char nom[20],long doc){

    Estudiante e = malloc(sizeof(struct EstudianteEstructura));

    strcpy(e->apellido, ap);
    strcpy(e->nombre, nom);
    e->dni = doc;

    return e;
};

void mostrarEstudiante(Estudiante e){

    printf("\n\n---------Estudiante-----------\n");
    printf("APELLIDO: %s\n", e->apellido);
    printf("NOMBRE: %s\n", e->nombre);
    printf("DNI: %d\n", e->dni);

};

char * getApellido(Estudiante e){

return e->apellido;

}

char * getNombre(Estudiante e){

return e->nombre;

}

long getDni(Estudiante e){

return e->dni;

}

void setApellido(Estudiante e, char apellidoNuevo[20]){

    strcpy(e->apellido, apellidoNuevo);

};

void setNombre(Estudiante e, char nombreNuevo[20]){

    strcpy(e->nombre, nombreNuevo);

};

void setDni(Estudiante e, long docNuevo){

   e->dni =  docNuevo;

};
