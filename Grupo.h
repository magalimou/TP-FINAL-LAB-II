#ifndef GRUPO_H_INCLUDED
#define GRUPO_H_INCLUDED
#include "Equipo.h"

/// TRABAJO PRACTICO FINAL LABORATORIO 2
/// JOAQUIN ALBARRACIN, MAGALI MOURIÑO, SERGIO AREAN

//LISTA NODO GrupoEquipo - CONTIENE LAS DIRECCIONES DE LOS EQUIPOS EN LA LISTA DE NODO EQUIPO
typedef struct nodoGrupoEquipo
{
    stEquipo* Equipo;
    struct nodoGrupoEquipo* sig;

}nodoGrupoEquipo;


//ARREGLO CON LOS GRUPOS DEl "A" HASTA "H"
typedef struct
{
    char letra; //"A", "B", ...
    struct nodoGrupoEquipo* EquiposMismoGrupo;

}Grupo;


//CARGAR ARREGLO CON LA LISTA DE GRUPOS DESDE "A HASTA "H"
nodoGrupoEquipo* CrearNodoGrupo(stEquipo* unEquipo);
stEquipo* RetornarEquipo(nodoEquipo* listaEquipos, char nom[]);
void InsertarEnListaGrupos(nodoGrupoEquipo** listaGrupos, stEquipo* unEquipo);
void CargarListaGrupos(nodoGrupoEquipo** listaGrupos, nodoEquipo* listaEquipos, char nom1[], char nom2[], char nom3[], char nom4[]);
void CargarGrupos(nodoGrupoEquipo** listaGrupos, nodoEquipo* listaEquipos, int i);
char CargarLetraGrupo(int i);
void InsertarGrupos(Grupo ArrGrupos[], int* validos, nodoEquipo* listaEquipos);


//MOSTRAR ARREGLO GRUPOS
void MostrarListaGrupos(nodoGrupoEquipo* listaGrupos);
void MostrarArrGrupos(Grupo ArrGrupos[], int validos);


#endif // GRUPO_H_INCLUDED
