#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED

struct EstudianteEstructura;

typedef struct EstudianteEstructura * Estudiante;

Estudiante crearEstudiante(char ap[20], char nom[20],long doc);

void mostrarEstudiante(Estudiante e);

char * getApellido(Estudiante e);
char * getNombre(Estudiante e);
long getDni(Estudiante e);

void setApellido(Estudiante e, char apellidoNuevo[20]);
void setNombre(Estudiante e, char nombreNuevo[20]);
void setDni(Estudiante e, long docNuevo);


#endif // ESTUDIANTE_H_INCLUDED
