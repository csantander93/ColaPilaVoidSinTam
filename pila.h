#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

///Estructura y tipo de dato de la Lista
struct PilaE;
typedef struct PilaE * PtrPila;

typedef void * PtrDato;

///Estructura y tipo de dato del Nodo
struct NodoE;
typedef struct NodoE * PtrNodo;

PtrPila crearPila();
PtrNodo crearNodoPila(PtrDato dato);

PtrDato getDatoPila(PtrPila pila, int posicion);
int longitudPila(PtrPila pila);

//insertar
void apilar(PtrPila pila, PtrDato dato); //inserta al final

//eliminar
void desapilar(PtrPila pila); //eliminar final

void imprimirPila(PtrPila pila);
void imprimirPilaEnteros(PtrPila pila);

#endif // PILA_H_INCLUDED
