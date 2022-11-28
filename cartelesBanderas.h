#ifndef CARTELESBANDERAS_H_INCLUDED
#define CARTELESBANDERAS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include "Fase.h"

#define BLACK   "\x1B[30m"
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define WHITE   "\x1B[37m"
#define ORANGE  "\x1B[38;2;255;128;0m"
#define ROSE    "\x1B[38;2;255;151;203m"
#define LBLUE   "\x1B[38;2;53;149;240m"
#define LGREEN  "\x1B[38;2;17;245;120m"
#define GRAY    "\x1B[38;2;176;174;174m"
#define RESET   "\x1b[0m"
#define BG_BLACK   "\x1B[40m"
#define BG_RED     "\x1B[41m"
#define BG_GREEN   "\x1B[42m"
#define BG_YELLOW  "\x1B[43m"
#define BG_BLUE    "\x1B[44m"
#define BG_MAGENTA "\x1B[45m"
#define BG_CYAN    "\x1B[46m"
#define BG_WHITE   "\x1B[47m"
#define BG_ORANGE  "\x1B[48;2;255;128;0m"
#define BG_LBLUE   "\x1B[48;2;53;149;240m"
#define BG_LGREEN  "\x1B[48;2;17;245;120m"
#define BG_GRAY    "\x1B[48;2;176;174;174m"
#define BG_ROSE    "\x1B[48;2;255;151;203m"

/// TRABAJO PRACTICO FINAL LABORATORIO 2
/// JOAQUIN ALBARRACIN, MAGALI MOURIÑO, SERGIO AREAN

///DE INTERACCION CON USUARIO
void bienvenida ();
void apostarPorUnPais (char nombre_pais[]);

///CARTELES
void coloresEnSanguche_2colores  (char nombreDePais[],char color_1[], char color_2[]);
int devuelveNro_segunColor(char color[]);
void devuelvePrintSegunPais (char pais[30]);
void cartelQatar(char nombreDePais[]);
void cartelEcuador (char nombreDePais[]);
void cartelSenegal (char nombreDePais[]);
void cartelPaisesBajos (char nombreDePais[]);
void cartelInglaterra (char nombreDePais[]);
void cartelIran (char nombrePais[]);
void cartelUsa (char nombreDePais[]);
void cartelGales (char nombreDePais[]);
void cartelArabia (char nombreDePais[]);
void cartelMexico (char nombreDePais[]);
void cartelPolonia (char nombreDePais[]);
void cartelFrancia (char nombreDePais[]);
void cartelAustralia (char nombreDePais[]);
void cartelDinamarca (char nombreDePais[]);
void cartelTunez  (char nombreDePais[]);
void cartelEspania (char nombreDePais[]);
void cartelCostaRica (char nombreDePais[]);
void cartelAlemania (char nombreDePais[]);
void cartelJapon (char nombreDePais[]);
void cartelBelgica(char nombreDePais[]);
void cartelCanada (char nombreDePais[]);
void cartelMarruecos (char nombreDePais[]);
void cartelCroacia (char nombreDePais[]);
void cartelBrasil (char nombreDePais[]);
void cartelSerbia (char nombreDePais[]);
void cartelSuiza (char nombreDePais[]);
void cartelCamerun (char nombreDePais[]);
void cartelPortugal  (char nombreDePais[]);
void cartelGhana (char nombreDePais[]);
void cartelUruguay (char nombreDePais[]);
void cartelArgentina (char nombreDePais[]);
void cartelCorea (char nombreDePais[]);

void devuelvePrintSegunPais (char pais[30]);


///BANDERAS
void bandera_argentina ();
void bandera_argentina_conSol();
void bandera_francia ();
void bandera_alemania ();

void bandera_qatar ();
void bandera_ecuador();
void bandera_senegal () ;
void bandera_paisesBajos ();

void bandera_Inglaterra();
void bandera_iran ();
void bandera_eeuu ();
void bandera_gales ();

void bandera_arabia();
void bandera_mexico();
void bandera_polonia();

void bandera_australia ();
void bandera_dinamarca();
void bandera_espania();
void bandera_costaRica ();

void bandera_japon ();
void bandera_belgica ();
void bandera_canada();
void bandera_marruecos();
void bandera_croacia ();

void bandera_brasil();
void bandera_Serbia ();
void bandera_suiza();
void bandera_camerun();

void bandera_portugal();
void bandera_ghana();
void bandera_uruguay();
void bandera_corea();


void devuelveBanderaSegunPais (char pais[30]);


///FICHAS TECNICAS
void fichaTecnica_Argentina(char nombre_pais[]);
void fichaTecnica_Qatar(char nombre_pais[]);
void fichaTecnica_Ecuador(char nombre_pais[]);
void fichatecnica_PaisesBajos(char nombre_pais[]);
void fichatecnica_senegal(char nombre_pais[]);
void fichatecnica_Inglaterra(char nombre_pais[]);
void fichatecnica_iran(char nombre_pais[]);
void fichatecnica_estadosUnidos(char nombre_pais[]);
void fichatecnica_gales(char nombre_pais[]);
void fichatecnica_arabia(char nombre_pais[]);
void fichatecnica_polonia(char nombre_pais[]);
void fichatecnica_francia(char nombre_pais[]);
void fichatecnica_australia(char nombre_pais[]);
void fichatecnica_dinamarca(char nombre_pais[]);
void fichatecnica_tunez(char nombre_pais[]);
void fichatecnica_espania(char nombre_pais[]);
void fichatecnica_costaRica(char nombre_pais[]);
void fichatecnica_alemania(char nombre_pais[]);
void fichatecnica_belgica(char nombre_pais[]);
void fichatecnica_canada(char nombre_pais[]);
void fichatecnica_marruecos(char nombre_pais[]);
void fichatecnica_croacia(char nombre_pais[]);
void fichatecnica_brasil(char nombre_pais[]);
void fichatecnica_serbia(char nombre_pais[]);
void fichatecnica_suiza(char nombre_pais[]);
void fichatecnica_camerun(char nombre_pais[]);
void fichatecnica_portugal(char nombre_pais[]);
void fichatecnica_ghana(char nombre_pais[]);
void fichatecnica_uruguay(char nombre_pais[]);
void fichatecnica_coreaDelSur(char nombre_pais[]);

void ToFichaTecnica_segunPais (char pais[]);

///Mensajes de fichas tecnicas con Formato
void mensaje_en_forma_pro(char frase[]);
void mensaje_ultra_Rapido(char frase[]);
void mensajeDeEntrada(char nombre_pais[]);
void mensaje_de_confirmacion(char nombre_pais[]);
void mensaje_ultra_Rapido_amarillo(char frase[]);
void mensaje_ultra_Rapido_violeta(char frase[]);
void mensaje_ultra_Rapido_verdeClaro(char frase[]);
void mensaje_ultra_Rapido_azulClaro(char frase[]);
void mensaje_ultra_Rapido_verde(char frase[]);
void mensaje_ultra_Rapido_blanco(char frase[]);
void mensaje_ultra_Rapido_celeste(char frase[]);
void mensaje_ultra_Rapido_gris(char frase[]);
void mensaje_ultra_Rapido_rosa(char frase[]);


///Funciones extra Sleep
void pocos_segundos();
void retrasa_mas_segundos();

///Funciones extra (Varias)
void insertarEnArregloDiagrama (nodoPartido* partido, stPartido nuevoArregloDePartidos[16], int* validos);
void DiagramaFinal (fase arregloDeFases[],stPartido nuevoArregloDePartidos[16], int* validos);
void partidosToDiagrama(stPartido nuevoArregloDePartidos[16]);
void devuelveNombredelGanador(stPartido unPartido, char ganador[30]);
void ToMayusculas (char nombre[]);
void muestraCampeon(char nombre_campeon[]);
void mostrar_1_enfrentamiento_conFormato(stPartido unPartido);

int ExisteEquipo(char nom[]);
void recorrido_busquedaPartidosGrupo (nodoPartido* listaPartidosGrupo, char equipo_buscado[]);
void recorrido_busquedaPartidosFases (nodoPartido* listaDePartidosFases,char equipo_buscado[]);
void recorridoPorMundial (char pais[], nodoEquipo* listaDeEquipos,GrupoPartido arregloPartidosGrupo[], int validosGrupos, fase arregloDeFases[], int validosFases);

void mostrarEquipo_conFormato (stEquipo* equipo);
void MostrarListaEquipos_conFormato(nodoEquipo* listaEquipos) ;
void mostrar_1_enfrentamiento_conFormatoYFecha(stPartido unPartido);




#endif // CARTELESBANDERAS_H_INCLUDED
