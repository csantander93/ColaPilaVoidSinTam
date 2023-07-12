#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"
#include "estudiante.h"

///Estructura y tipo de dato de la Lista
struct PilaE{

    PtrNodo primero;

};

///Estructura y tipo de dato del Nodo
struct NodoE{

    PtrDato dato;
    struct NodoE * sgte;
};

PtrPila crearPila(){

    ///El constructor, lo de siempre :)
    PtrPila pila = malloc(sizeof(struct PilaE));
    pila->primero = NULL;


    return pila;

}

PtrNodo crearNodoPila(PtrDato dato){

    PtrNodo nodo=(PtrNodo)malloc(sizeof(struct NodoE));
    nodo->dato = dato;
    nodo->sgte = NULL;

    return nodo;

}

PtrDato getDatoPila(PtrPila pila, int posicion){

    PtrNodo actual = pila->primero;
    int posicionActual = 0;

    if(actual != NULL){
        while(posicionActual < posicion && actual->sgte != NULL){
            posicionActual++;
            actual = actual->sgte;
        }
    }
    return actual->dato;

}
int longitudPila(PtrPila pila){

    int longitud = 0;

    PtrNodo actual = pila->primero;

    while( actual != NULL ){
        actual = actual->sgte;
        longitud++;
    }
    return longitud;

}

//insertar
void apilar(PtrPila pila, PtrDato dato){

    PtrNodo nuevoNodo = crearNodoPila(dato);

    // Si la pila está vacía, el nuevo nodo será el primero
    if (pila->primero == NULL) {
        pila->primero = nuevoNodo;
    } else {
        // Si la pila no está vacía, recorremos hasta el último nodo
        PtrNodo nodoActual = pila->primero;
        while (nodoActual->sgte != NULL) {
            nodoActual = nodoActual->sgte;
        }
        // Asignamos el nuevo nodo al siguiente del último nodo
        nodoActual->sgte = nuevoNodo;
    }

}; //inserta al final

//eliminar
void desapilar(PtrPila pila){

    if(pila->primero != NULL){
        PtrNodo nodoActual = pila->primero;
        PtrNodo nodoAnterior = NULL;

        // Recorremos hasta el último nodo
        while(nodoActual->sgte != NULL){
            nodoAnterior = nodoActual;
            nodoActual = nodoActual->sgte;
        }

        // Si hay un nodo anterior, ajustamos su puntero al siguiente
        if(nodoAnterior != NULL){
            nodoAnterior->sgte = NULL;
        }
        // Si no hay un nodo anterior, el último nodo es el primero de la lista
        else{
            pila->primero = NULL;
        }

        // Liberamos la memoria del nodo a eliminar
        free(nodoActual);
    }

}; //eliminar final

void imprimirPila(PtrPila pila){

    printf("\n\n------ Pila con %d datos: ------\n",longitudPila(pila) );

    for(int i=longitudPila(pila)-1; i>-1; i--){
        mostrarEstudiante( (Estudiante)  getDatoPila(pila,i) );

    }

};
void imprimirPilaEnteros(PtrPila pila){


    printf("\n\n------ Pila con %d datos: ------\n",longitudPila(pila) );

    for(int i=longitudPila(pila)-1; i>-1; i--){
        printf("%d\n", ( (int)  getDatoPila(pila,i) ));

    }

};
