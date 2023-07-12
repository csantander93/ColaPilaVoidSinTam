#include <stdio.h>
#include <stdlib.h>
#include "cola.h"
#include "pila.h"
#include "estudiante.h"

int main()
{
    PtrCola cola = crearCola();
    PtrCola colaEnteros = crearCola();

    Estudiante e1 = crearEstudiante("Oviedo", "Kevin", 12345678);
    Estudiante e2 = crearEstudiante("Pico", "Juan", 11111111);
    Estudiante e3 = crearEstudiante("Santander", "Cristian", 22222222);

    encolar(colaEnteros, 2);
    encolar(colaEnteros, 3);
    encolar(colaEnteros, 10);

    encolar(cola, e1);
    encolar(cola, e2);
    encolar(cola, e3);

    imprimirCola(cola);
    desencolar(cola);
    imprimirCola(cola);

    imprimirColaEnteros(colaEnteros);

    printf("\n\n-----------PILA-----------\n");

    PtrPila pila = crearPila();
    apilar(pila, e1);
    apilar(pila, e2);
    apilar(pila, e3);
    imprimirPila(pila);
    desapilar(pila);
    imprimirPila(pila);

    printf("\n Pila ENTEROS");
    PtrPila pilaEnteros = crearPila();
    apilar(pilaEnteros, 8);
    apilar(pilaEnteros, 15);
    apilar(pilaEnteros, 22);
    apilar(pilaEnteros, 1);
    imprimirPilaEnteros(pilaEnteros);

    return 0;
}
