#ifndef EQUIPO_H_INCLUDED
#define EQUIPO_H_INCLUDED
#include <stdio.h>

/// TRABAJO PRACTICO FINAL LABORATORIO 2
/// JOAQUIN ALBARRACIN, MAGALI MOURIÑO, SERGIO AREAN


typedef struct
{
    char nomEquipo[40];             // Nombre del Equipo
    int mp;                        // partidos jugados
    int gf;                       //goles a favor
    int ga;                      //goles en contra
    int win;                    //partidos ganados
    int loss;                  //partidos perdidos
    int emp;                  //Partidos Empatados
    int pts;                 //Puntos totales (3pts si gana, 1 si empata, 0 si pierde)
    float probability;      // Probabilidad del equipo de ganar el mundial

}stEquipo;

//LISTA NODO EQUIPO - CONTIENE UNA LISTA CON TODOS LOS EQUIPOS QUE PARTICIPAN EN EL MUNDIAL
typedef struct nodoEquipo
{
    stEquipo unEquipo;
    struct nodoEquipo* sig;

}nodoEquipo;


//BUSCAR PAIS POR NOMBRE EN LISTA DE EQUIPOS
int BuscarPais(nodoEquipo* listaEquipos, char pais[]);
//CARGA Y MUESTRA DE EQUIPOS CON DATOS EN 0
stEquipo CargarUnEquipo(stEquipo unEquipo);
//CARGAR ARCHIVO CON TODOS LOS EQUIPOS
void CargarEquipos(char Nombre[]);
//MOSTRAR ARCHIVO CON DATOS DE EQUIPOS
void MostrarEquipos(char Nombre[]);



//CARGA DE LISTA CON TODOS LOS EQUIPOS - NODO EQUIPO
nodoEquipo* CrearNodoEquipo(stEquipo unEquipo);
void InsertarEnListaEquipos(nodoEquipo** listaEquipos, stEquipo unEquipo);
void CargarDeArchivoALista(char Nombre[], nodoEquipo** listaEquipos);



//CARGAR PROBABILIDAD DE GANAR EL MUNDIAL A TODOS LOS EQUIPOS
void PonerProbabilidad(stEquipo* unEquipo);
void CargarProbabilidades(nodoEquipo* listaEquipos);



//MOSTRAR LISTA EQUIPOS
void MostrarEquipo(stEquipo unEquipo);
void MostrarListaEquipos(nodoEquipo* listaEquipos);
void MostrarPorBusqueda(nodoEquipo* listaEquipos, char pais[]);



//ACTUALIZA LOS VALORES DE LA ESTRUCTURA DE EQUIPOS
void ActualizarEquipoGanador(stEquipo** EqWinner, int golesGanador, int golesPerdedor, int i);
void ActualizarEquipoPerdedor(stEquipo** EqLoser, int golesPerdedor, int golesGanador, int i);

//DEVUELVE NOMBRE DE PAISES CON UN MAXIMO DE CARACTERES
void devuelveNombre_formatoTabla(stEquipo* unEquipo, char nombre_retornado[]);



#endif // EQUIPO_H_INCLUDED
