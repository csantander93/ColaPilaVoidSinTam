#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

///Estructura y tipo de dato de la Lista
struct ColaE;
typedef struct ColaE * PtrCola;

typedef void * PtrDato;

///Estructura y tipo de dato del Nodo
struct NodoE;
typedef struct NodoE * PtrNodo;

PtrCola crearCola();
PtrNodo crearNodo(PtrDato dato);

PtrDato getDatoCola(PtrCola cola, int posicion);
int longitudCola(PtrCola cola);

//insertar
void encolar(PtrCola cola, PtrDato dato); //inserta al final

//eliminar
void desencolar(PtrCola cola); //eliminar inicio

void imprimirCola(PtrCola cola);
void imprimirColaEnteros(PtrCola cola);

#endif // COLA_H_INCLUDED
