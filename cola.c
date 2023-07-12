#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cola.h"
#include "estudiante.h"

///Estructura y tipo de dato de la Lista
struct ColaE{

    PtrNodo primero;

};

///Estructura y tipo de dato del Nodo
struct NodoE{

    PtrDato dato;
    struct NodoE * sgte;

};

PtrCola crearCola(){

    ///El constructor, lo de siempre :)
    PtrCola cola = malloc(sizeof(struct ColaE));
    cola->primero = NULL;


    return cola;

}
PtrNodo crearNodo(PtrDato dato){

    PtrNodo nodo=(PtrNodo)malloc(sizeof(struct NodoE));
    nodo->dato = dato;
    nodo->sgte = NULL;

    return nodo;

}
PtrDato getDatoCola(PtrCola cola, int posicion){

PtrNodo actual = cola->primero;
    int posicionActual = 0;

    if(actual != NULL){
        while(posicionActual < posicion && actual->sgte != NULL){
            posicionActual++;
            actual = actual->sgte;
        }
    }
    return actual->dato;

}

int longitudCola(PtrCola cola){

    int longitud = 0;

    PtrNodo actual = cola->primero;

    while( actual != NULL ){
        actual = actual->sgte;
        longitud++;
    }
    return longitud;

}

//inserta al final
void encolar(PtrCola cola, PtrDato dato){

    PtrNodo nuevoNodo = crearNodo(dato);

    // Si la cola está vacía, el nuevo nodo será el primero
    if (cola->primero == NULL) {
        cola->primero = nuevoNodo;
    } else {
        // Si la cola no está vacía, recorremos hasta el último nodo
        PtrNodo nodoActual = cola->primero;
        while (nodoActual->sgte != NULL) {
            nodoActual = nodoActual->sgte;
        }
        // Asignamos el nuevo nodo al siguiente del último nodo
        nodoActual->sgte = nuevoNodo;
    }

}

//eliminar inicio
void desencolar(PtrCola cola){

    if(cola->primero != NULL){
        PtrNodo nodoAEliminar = cola->primero;
        cola->primero = cola->primero->sgte;
        free(nodoAEliminar);
    }

}

void imprimirCola(PtrCola cola){


    printf("\n\n------ Cola con %d datos: ------\n",longitudCola(cola) );

    for(int i=0; i<longitudCola(cola); i++){
        mostrarEstudiante( (Estudiante)  getDatoCola(cola,i) );

    }

}

void imprimirColaEnteros(PtrCola cola){


    printf("\n\n------ Cola con %d datos: ------\n",longitudCola(cola) );

    for(int i=0; i<longitudCola(cola); i++){
        printf("%d ", ( (int)  getDatoCola(cola,i) ));

    }

}
