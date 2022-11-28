#ifndef PARTIDO_H_INCLUDED
#define PARTIDO_H_INCLUDED
#include "Grupo.h"

/// TRABAJO PRACTICO FINAL LABORATORIO 2
/// JOAQUIN ALBARRACIN, MAGALI MOURIÑO, SERGIO AREAN

//ESTRUCTURA PARTIDO - CONTIENE LAS DIRECCIONES De LOS EQUIPOS DEL PARTIDO, LOS GOLES Y PENALES
typedef struct
{
    int dia;
    int mes;
    stEquipo* equipo1;
    stEquipo* equipo2;
    int golesEq1;
    int golesEq2;
    int penales1;
    int penales2;

}stPartido;


//LISTA NODO PARTIDO - GUARDA UNA LISTA CON TODOS LOS PARTIDOS
typedef struct nodoPartido
{
    stPartido Partidos;
    struct nodoPartido* sig;

}nodoPartido;


//ESTRUCTURA DE UN ARREGLO DE PARTIDOS POR GRUPO
typedef struct
{
    char letra; // "A", "B" ...
    nodoPartido* partidos;

}GrupoPartido;

//CARGAR ARREGLO PARTIDOS
nodoPartido* CrearNodoPartido(stPartido unPartido);
void InsertarEnListaPartidos(nodoPartido** listaPartidos, stPartido unPartido);
int RetornarDia(char Eq1[], char Eq2[]);
int RetornarMes(int dia);
stPartido RetornarPartido(stEquipo* Eq1, stEquipo* Eq2);
void CargarListaPartidos(nodoPartido** listaPartidos, nodoGrupoEquipo* listaGrupos);
void InsertarArrPartidos(GrupoPartido ArrPartidos[], int* validosPartido, Grupo ArrGrupos[], int validosGrupo);

//MOSTRAR ARREGLOS DE PARTIDOS
void MostrarPartido(stPartido unPartido);
void MostrarListaPartidos(nodoPartido* listaPartidos);
void MostrarArrPartidos(GrupoPartido ArrPartidos[], int validos);
int random_int(int minimo, int maximo);



//RANDOMIZAR PARTIDOS FASE GRUPO
void JugarUnPartidoGrupo(stPartido* unPartido, char ganador[]);
void JugarPartidosMismoGrupo(nodoPartido* listaPartidos, char ganador[]);
void JugarPartidoFaseGrupos(GrupoPartido ArrPartidos[], int validos, char ganador[]);



//RANDOMIZA LOS PARTIDOS DE OCTAVOS HASTA LA FINAL
void JugarUnPartidoConPenales(stPartido* unPartido);
void mostrar_1_enfrentamiento_completo(stPartido unPartido);


#endif // PARTIDO_H_INCLUDED
