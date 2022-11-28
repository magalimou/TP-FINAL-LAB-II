#ifndef FASE_H_INCLUDED
#define FASE_H_INCLUDED
#include "Partido.h"

/// TRABAJO PRACTICO FINAL LABORATORIO 2
/// JOAQUIN ALBARRACIN, MAGALI MOURIÑO, SERGIO AREAN

//ARREGLO QUE CONTIENE LAS 5 FASES (OCTAVOS, CUARTOS, SEMIS, TERCER PUESTO Y FINAL)
typedef struct
{
    int idFase;
    nodoPartido* partidos;
}fase;


//INICIALIZA EL ARREGLO DE LAS FASES
void InicializarFases(fase Fases[], int* validosFases);

//FUNCION PRINCIPAL DE CARGA DE TODAS LAS FASES
void CargarFases(fase Fases[], int* validosFases, Grupo ArrGrupos[]);
void CargarOctavos(nodoPartido** Octavos, Grupo ArrGrupos[]);
void CargarCuartos(nodoPartido** Cuartos, nodoPartido* Octavos);
void CagarTercerPuesto(nodoPartido** Partido3erPuesto, nodoPartido* Semis);
void CargarSemifinales(nodoPartido** Semis, nodoPartido* Cuartos);
void CargarFinal(nodoPartido** PartidoFinal, nodoPartido* Semis);

stEquipo* RetornarMayorPuntaje(nodoGrupoEquipo* listaGrupos);
stEquipo* Retornar2doMayorPuntaje(nodoGrupoEquipo* listaGrupos, char nom_primero[]);
stEquipo* Retornar3erEquipo(nodoGrupoEquipo* listaGrupos, char nom_primero[], char nom_segundo[]);
stEquipo* Retornar4toEquipo(nodoGrupoEquipo* listaGrupos, char nom_primero[], char nom_segundo[], char nom_tercero[]);

stEquipo* RetornarGanadorPartido(stPartido unPartido);
stEquipo* RetornarPerdedorPartido(stPartido unPartido);

void mostrarGruposYPartidos(Grupo ArrGrupos[], GrupoPartido ArrPartidos[]);
void mostrar_1_grupo_formatoGrupo(Grupo unaCelda);
void mostrarPartidos_xGrupo(nodoPartido* listaDePartidos);
void mostrar_1_enfrentamiento(stPartido unPartido);





#endif // FASE_H_INCLUDED
