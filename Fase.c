#include "Fase.h"

/// TRABAJO PRACTICO FINAL LABORATORIO 2
/// JOAQUIN ALBARRACIN, MAGALI MOURIÑO, SERGIO AREAN

//INICIALIZA EL ARREGLO DE LAS FASES
void InicializarFases(fase Fases[], int* validosFases)
{
    int i = 0;

    while(i < 5)
    {
        Fases[i].idFase = i;
        Fases[i].partidos = NULL;
        i++;
    }
    *validosFases = 5;
}

//FUNCION PRINCIPAL DE CARGA DE TODAS LAS FASES
void CargarFases(fase Fases[], int* validosFases, Grupo ArrGrupos[])
{
    InicializarFases(Fases, validosFases);

    CargarOctavos(&(Fases[0].partidos), ArrGrupos);
    printf("\n\n");
    system("pause");
    system("cls");

    CargarCuartos(&(Fases[1].partidos), Fases[0].partidos);
    printf("\n\n");
    system("pause");
    system("cls");

    CargarSemifinales(&(Fases[2].partidos), Fases[1].partidos);
    printf("\n\n");
    system("pause");
    system("cls");

    CagarTercerPuesto(&(Fases[3].partidos),Fases[2].partidos);
    printf("\n\n");
    system("pause");
    system("cls");

    CargarFinal(&(Fases[4].partidos), Fases[2].partidos);
}

void CargarOctavos(nodoPartido** Octavos, Grupo ArrGrupos[])
{

    stPartido Partido1, Partido2, Partido3, Partido4, Partido5, Partido6, Partido7, Partido8;

    stEquipo* A1 = RetornarMayorPuntaje(ArrGrupos[0].EquiposMismoGrupo);
    stEquipo* A2 = Retornar2doMayorPuntaje(ArrGrupos[0].EquiposMismoGrupo, A1->nomEquipo);

    stEquipo* B1 = RetornarMayorPuntaje(ArrGrupos[1].EquiposMismoGrupo);
    stEquipo* B2 = Retornar2doMayorPuntaje(ArrGrupos[1].EquiposMismoGrupo, B1->nomEquipo);

    stEquipo* C1 = RetornarMayorPuntaje(ArrGrupos[2].EquiposMismoGrupo);
    stEquipo* C2 = Retornar2doMayorPuntaje(ArrGrupos[2].EquiposMismoGrupo, C1->nomEquipo);

    stEquipo* D1 = RetornarMayorPuntaje(ArrGrupos[3].EquiposMismoGrupo);
    stEquipo* D2 = Retornar2doMayorPuntaje(ArrGrupos[3].EquiposMismoGrupo, D1->nomEquipo);

    stEquipo* E1 = RetornarMayorPuntaje(ArrGrupos[4].EquiposMismoGrupo);
    stEquipo* E2 = Retornar2doMayorPuntaje(ArrGrupos[4].EquiposMismoGrupo, E1->nomEquipo);

    stEquipo* F1 = RetornarMayorPuntaje(ArrGrupos[5].EquiposMismoGrupo);
    stEquipo* F2 = Retornar2doMayorPuntaje(ArrGrupos[5].EquiposMismoGrupo, F1->nomEquipo);

    stEquipo* G1 = RetornarMayorPuntaje(ArrGrupos[6].EquiposMismoGrupo);
    stEquipo* G2 = Retornar2doMayorPuntaje(ArrGrupos[6].EquiposMismoGrupo, G1->nomEquipo);

    stEquipo* H1 = RetornarMayorPuntaje(ArrGrupos[7].EquiposMismoGrupo);
    stEquipo* H2 = Retornar2doMayorPuntaje(ArrGrupos[7].EquiposMismoGrupo, H1->nomEquipo);

    printf("\n                                                                   ===========================");
    printf("\n                                                                        OCTAVOS DE FINAL");
    printf("\n                                                                   ===========================\n");

    Partido1 = RetornarPartido(A1, B2);
    Partido1.dia = 3;
    Partido1.mes = 12;
    JugarUnPartidoConPenales(&Partido1);
    InsertarEnListaPartidos(Octavos, Partido1);

    Partido2 = RetornarPartido(C1, D2);
    Partido2.dia = 3;
    Partido2.mes = 12;
    JugarUnPartidoConPenales(&Partido2);
    InsertarEnListaPartidos(Octavos, Partido2);


    Partido3 = RetornarPartido(E1, F2);
    Partido3.dia = 5;
    Partido3.mes = 12;
    JugarUnPartidoConPenales(&Partido3);
    InsertarEnListaPartidos(Octavos, Partido3);


    Partido4 = RetornarPartido(G1, H2);
    Partido4.dia = 5;
    Partido4.mes = 12;
    JugarUnPartidoConPenales(&Partido4);
    InsertarEnListaPartidos(Octavos, Partido4);


    Partido5 = RetornarPartido(B1, A2);
    Partido5.dia = 4;
    Partido5.mes = 12;
    JugarUnPartidoConPenales(&Partido5);
    InsertarEnListaPartidos(Octavos, Partido5);

    Partido6 = RetornarPartido(D1, C2);
    Partido6.dia = 4;
    Partido6.mes = 12;
    JugarUnPartidoConPenales(&Partido6);
    InsertarEnListaPartidos(Octavos, Partido6);


    Partido7 = RetornarPartido(F1, E2);
    Partido7.dia = 6;
    Partido7.mes = 12;
    JugarUnPartidoConPenales(&Partido7);
    InsertarEnListaPartidos(Octavos, Partido7);

    Partido8 = RetornarPartido(H1, G2);
    Partido8.dia = 6;
    Partido8.mes = 12;
    JugarUnPartidoConPenales(&Partido8);
    InsertarEnListaPartidos(Octavos, Partido8);
}

void CargarCuartos(nodoPartido** Cuartos, nodoPartido* Octavos)
{
    stPartido Partido1, Partido2, Partido3, Partido4; ///Partidos a Jugar en Cuartos
    stEquipo* ganadorP1, *ganadorP2, *ganadorP3, *ganadorP4, *ganadorP5, *ganadorP6, *ganadorP7, *ganadorP8;

    if(Octavos != NULL)
    {
        ganadorP1 = RetornarGanadorPartido(Octavos->Partidos);
        Octavos = Octavos->sig;
    }

    if(Octavos != NULL)
    {
        ganadorP2 = RetornarGanadorPartido(Octavos->Partidos);
        Octavos = Octavos->sig;
    }

    if(Octavos != NULL)
    {
        ganadorP3 = RetornarGanadorPartido(Octavos->Partidos);
        Octavos = Octavos->sig;
    }

    if(Octavos != NULL)
    {
        ganadorP4 = RetornarGanadorPartido(Octavos->Partidos);
        Octavos = Octavos->sig;
    }

    if(Octavos != NULL)
    {
        ganadorP5 = RetornarGanadorPartido(Octavos->Partidos);
        Octavos = Octavos->sig;
    }

    if(Octavos != NULL)
    {
        ganadorP6 = RetornarGanadorPartido(Octavos->Partidos);
        Octavos = Octavos->sig;
    }

    if(Octavos != NULL)
    {
        ganadorP7 = RetornarGanadorPartido(Octavos->Partidos);
        Octavos = Octavos->sig;
    }

    if(Octavos != NULL)
    {
        ganadorP8 = RetornarGanadorPartido(Octavos->Partidos);
    }

    printf("\n                                                                   ===========================");
    printf("\n                                                                         CUARTOS DE FINAL");
    printf("\n                                                                   ===========================\n");
    printf("\n");

    Partido1 = RetornarPartido(ganadorP1, ganadorP2);
    Partido1.dia = 9;
    Partido1.mes = 12;
    JugarUnPartidoConPenales(&Partido1);
    InsertarEnListaPartidos(Cuartos, Partido1);
    ganadorP1 = RetornarGanadorPartido(Partido1);

    Partido2 = RetornarPartido(ganadorP3, ganadorP4);
    Partido2.dia = 9;
    Partido2.mes = 12;
    JugarUnPartidoConPenales(&Partido2);
    InsertarEnListaPartidos(Cuartos, Partido2);
    ganadorP2 = RetornarGanadorPartido(Partido2);

    Partido3 = RetornarPartido(ganadorP5, ganadorP6);
    Partido3.dia = 10;
    Partido3.mes = 12;
    JugarUnPartidoConPenales(&Partido3);
    InsertarEnListaPartidos(Cuartos, Partido3);
    ganadorP3 = RetornarGanadorPartido(Partido3);

    Partido4 = RetornarPartido(ganadorP7, ganadorP8);
    Partido4.dia = 10;
    Partido4.mes = 12;
    JugarUnPartidoConPenales(&Partido4);
    InsertarEnListaPartidos(Cuartos, Partido4);
    ganadorP4 = RetornarGanadorPartido(Partido4);
}

void CagarTercerPuesto(nodoPartido** Partido3erPuesto, nodoPartido* Semis)
{
    stEquipo* PerdedorS1, *PerdedorS2;
    stPartido TercerPuesto;

    if(Semis != NULL)
    {
        PerdedorS1 = RetornarPerdedorPartido(Semis->Partidos);
        Semis = Semis->sig;
    }

    if(Semis != NULL)
    {
        PerdedorS2 = RetornarPerdedorPartido(Semis->Partidos);
    }

    TercerPuesto = RetornarPartido(PerdedorS1, PerdedorS2);
    TercerPuesto.dia = 17;
    TercerPuesto.mes = 12;
    printf("\n                                                                   ===========================");
    printf("\n                                                                          TERCER PUESTO       ");
    printf("\n                                                                   ===========================\n");
    printf("\n");
    JugarUnPartidoConPenales(&TercerPuesto);
    InsertarEnListaPartidos(Partido3erPuesto, TercerPuesto);
}

void CargarSemifinales(nodoPartido** Semis, nodoPartido* Cuartos)
{
    stEquipo* GanadorP1, *GanadorP2, *GanadorP3, *GanadorP4;

    stPartido Partido1, Partido2;

    if(Cuartos != NULL) ///Asignacion de los Partidos de Semifinales tomando la lista de los ganadores de Cuartos
    {
        GanadorP1 = RetornarGanadorPartido(Cuartos->Partidos);
        Cuartos = Cuartos->sig;
    }

    if(Cuartos != NULL)
    {
        GanadorP2 = RetornarGanadorPartido(Cuartos->Partidos);
        Cuartos = Cuartos->sig;
    }

    if(Cuartos != NULL)
    {
        GanadorP3 = RetornarGanadorPartido(Cuartos->Partidos);
        Cuartos = Cuartos->sig;
    }

    if(Cuartos != NULL)
    {
        GanadorP4 = RetornarGanadorPartido(Cuartos->Partidos);
    }

    printf("\n                                                                   ===========================");
    printf("\n                                                                           SEMIFINALES");
    printf("\n                                                                   ===========================\n");
    printf("\n");


    Partido1 = RetornarPartido(GanadorP1, GanadorP2); ///Creacion de Semifinal 1
    Partido1.dia = 13;
    Partido1.mes = 12;
    JugarUnPartidoConPenales(&Partido1);///Se juega Semifinal 1
    InsertarEnListaPartidos(Semis, Partido1);

    Partido2 = RetornarPartido(GanadorP3, GanadorP4); ///Creacion de Semifinal 2
    Partido2.dia = 14;
    Partido2.mes = 12;
    JugarUnPartidoConPenales(&Partido2); ///Se juega Semifinal 2
    InsertarEnListaPartidos(Semis, Partido2);
}

void CargarFinal(nodoPartido** PartidoFinal, nodoPartido* Semis)
{
    stEquipo* GanadorP1, *GanadorP2;
    stPartido Partido1;

    if(Semis != NULL)
    {
        GanadorP1 = RetornarGanadorPartido(Semis->Partidos);
        Semis = Semis->sig;
    }

    if(Semis != NULL)
    {
        GanadorP2 = RetornarGanadorPartido(Semis->Partidos);
    }

    Partido1 = RetornarPartido(GanadorP1, GanadorP2);
    Partido1.dia = 18;
    Partido1.mes = 12;
    printf("\n                                                                   ===========================");
    printf("\n                                                                              FINAL           ");
    printf("\n                                                                   ===========================\n");
    JugarUnPartidoConPenales(&Partido1);
    InsertarEnListaPartidos(PartidoFinal, Partido1);

}



stEquipo* RetornarMayorPuntaje(nodoGrupoEquipo* listaGrupos)
{
    /**La funcion no contempla si el empate es total,
    es decir, si hay empate en puntos, en diferencia de gol y en goles realizados
    la solucion a esto seria hacer un rand y dejarlo librado al azar,
    lo cual es lo mismo que no hacer nada mas de lo q esta hecho, y si existe tal
    empate en todas las instancias, la definicion del mayor tambien seria azarosa**/

    stEquipo* equipo_mayor;
    int puntaje_mayor, diferenciaDeGol_mayor, diferenciaDeGol;

    if(listaGrupos != NULL) //defino como referencia el primero
    {
        equipo_mayor = listaGrupos->Equipo;
        puntaje_mayor = listaGrupos->Equipo->pts;
        listaGrupos = listaGrupos->sig;

        while(listaGrupos != NULL)
        {
            if(puntaje_mayor<listaGrupos->Equipo->pts) //si el que analizo tiene mas puntos
            {
                puntaje_mayor = listaGrupos->Equipo->pts;
                equipo_mayor = listaGrupos->Equipo;

            }else
            {
                if (puntaje_mayor == listaGrupos->Equipo->pts) //si el que analizo tiene igual cantidad de puntos
                {
                    diferenciaDeGol_mayor = (equipo_mayor->gf) - (equipo_mayor->ga);
                    diferenciaDeGol = (listaGrupos->Equipo->gf) - (listaGrupos->Equipo->ga);

                    if (diferenciaDeGol>diferenciaDeGol_mayor)  //definicion por diferencia de gol
                    {
                        puntaje_mayor = listaGrupos->Equipo->pts;
                        equipo_mayor = listaGrupos->Equipo;

                    }else
                    {
                        if (diferenciaDeGol == diferenciaDeGol_mayor) //si igualan en diferencia de gol, se define por goles realizados
                        {
                            if(listaGrupos->Equipo->gf > equipo_mayor->gf)
                            {
                                puntaje_mayor = listaGrupos->Equipo->pts;
                                equipo_mayor = listaGrupos->Equipo;
                            }
                        }
                    }
                }

            }
            listaGrupos = listaGrupos->sig;
        }
    }

    return equipo_mayor;
}

stEquipo* Retornar2doMayorPuntaje(nodoGrupoEquipo* listaGrupos, char nom_primero[])
{
    /**La funcion no contempla si el empate es total,
    es decir, si hay empate en puntos, en diferencia de gol y en goles realizados
    la solucion a esto seria hacer un rand y dejarlo librado al azar,
    lo cual es lo mismo que no hacer nada mas de lo q esta hecho, y si existe tal
    empate en todas las instancias, la definicion del mayor tambien seria azarosa**/

    stEquipo* equipo_mayor;
    int puntaje_mayor, diferenciaDeGol_mayor, diferenciaDeGol;

    if(listaGrupos != NULL && strcmpi(listaGrupos->Equipo->nomEquipo,nom_primero) == 0)//si el primero de la lista es el primer ganador, se saltea
    {
        listaGrupos = listaGrupos->sig;
    }

    if(listaGrupos != NULL)
    {
        equipo_mayor = listaGrupos->Equipo;
        puntaje_mayor = listaGrupos->Equipo->pts;
        listaGrupos = listaGrupos->sig;

        while(listaGrupos != NULL)
        {
            if(strcmpi(listaGrupos->Equipo->nomEquipo,nom_primero)!=0)
            {
                if(puntaje_mayor<listaGrupos->Equipo->pts) //si el que analizo tiene mas puntos
                {
                    puntaje_mayor = listaGrupos->Equipo->pts;
                    equipo_mayor = listaGrupos->Equipo;

                }else if (puntaje_mayor == listaGrupos->Equipo->pts)
                {
                    diferenciaDeGol_mayor = (equipo_mayor->gf) - (equipo_mayor->ga);
                    diferenciaDeGol = (listaGrupos->Equipo->gf) - (listaGrupos->Equipo->ga);

                    if (diferenciaDeGol>diferenciaDeGol_mayor)
                    {
                        puntaje_mayor = listaGrupos->Equipo->pts;
                        equipo_mayor = listaGrupos->Equipo;

                    }else if (diferenciaDeGol == diferenciaDeGol_mayor)
                    {
                        if(listaGrupos->Equipo->gf > equipo_mayor->gf)
                        {
                            puntaje_mayor = listaGrupos->Equipo->pts;
                            equipo_mayor = listaGrupos->Equipo;
                        }
                    }
                }
                listaGrupos = listaGrupos->sig;

            }else
            {
                listaGrupos = listaGrupos->sig;
            }

        }

    }

    return equipo_mayor;
}

stEquipo* Retornar3erEquipo(nodoGrupoEquipo* listaGrupos, char nom_primero[], char nom_segundo[])
{
    stEquipo* equipo_mayor;
    int puntaje_mayor, diferenciaDeGol_mayor, diferenciaDeGol;

    while(listaGrupos != NULL && (strcmpi(listaGrupos->Equipo->nomEquipo,nom_primero) == 0 || strcmpi(listaGrupos->Equipo->nomEquipo,nom_segundo) == 0))
    {
        listaGrupos = listaGrupos->sig;
    }

    if(listaGrupos != NULL)
    {
        equipo_mayor = listaGrupos->Equipo;
        puntaje_mayor = listaGrupos->Equipo->pts;
        listaGrupos = listaGrupos->sig;

        while(listaGrupos)
        {
            if(strcmpi(listaGrupos->Equipo->nomEquipo,nom_primero) != 0 && strcmpi(listaGrupos->Equipo->nomEquipo,nom_segundo) != 0)
            {
                if(puntaje_mayor < listaGrupos->Equipo->pts) //si el que analizo tiene mas puntos
                {
                    puntaje_mayor = listaGrupos->Equipo->pts;
                    equipo_mayor = listaGrupos->Equipo;

                }else if (puntaje_mayor==listaGrupos->Equipo->pts)
                {
                    diferenciaDeGol_mayor = (equipo_mayor->gf) - (equipo_mayor->ga);
                    diferenciaDeGol = (listaGrupos->Equipo->gf) - (listaGrupos->Equipo->ga);

                    if (diferenciaDeGol > diferenciaDeGol_mayor)
                    {
                        puntaje_mayor = listaGrupos->Equipo->pts;
                        equipo_mayor = listaGrupos->Equipo;

                    }else if(diferenciaDeGol == diferenciaDeGol_mayor)
                    {
                        if(listaGrupos->Equipo->gf > equipo_mayor->gf)
                        {
                            puntaje_mayor = listaGrupos->Equipo->pts;
                            equipo_mayor = listaGrupos->Equipo;
                        }
                    }
                }
                listaGrupos = listaGrupos->sig;

            }else
            {
                listaGrupos = listaGrupos->sig;
            }

        }

    }

    return equipo_mayor;
}

stEquipo* Retornar4toEquipo(nodoGrupoEquipo* listaGrupos, char nom_primero[], char nom_segundo[], char nom_tercero[])
{
    stEquipo* equipo_mayor;
    int puntaje_mayor, diferenciaDeGol_mayor, diferenciaDeGol;

    while(listaGrupos != NULL && (strcmpi(listaGrupos->Equipo->nomEquipo, nom_primero) == 0 || strcmpi(listaGrupos->Equipo->nomEquipo, nom_segundo) == 0|| strcmpi(listaGrupos->Equipo->nomEquipo, nom_tercero) == 0))
    {
        listaGrupos = listaGrupos->sig;
    }

    if(listaGrupos != NULL)
    {
        equipo_mayor = listaGrupos->Equipo;
        puntaje_mayor = listaGrupos->Equipo->pts;
        listaGrupos= listaGrupos->sig;

        while(listaGrupos != NULL)
        {
            if(strcmpi(listaGrupos->Equipo->nomEquipo, nom_primero) != 0 && strcmpi(listaGrupos->Equipo->nomEquipo, nom_segundo) != 0 && strcmpi(listaGrupos->Equipo->nomEquipo, nom_tercero) != 0)
            {
                if(puntaje_mayor < listaGrupos->Equipo->pts) //si el que analizo tiene mas puntos
                {
                    puntaje_mayor = listaGrupos->Equipo->pts;
                    equipo_mayor = listaGrupos->Equipo;

                }else if(puntaje_mayor == listaGrupos->Equipo->pts)
                {
                    diferenciaDeGol_mayor = (equipo_mayor->gf) - (equipo_mayor->ga);
                    diferenciaDeGol = (listaGrupos->Equipo->gf) - (listaGrupos->Equipo->ga);

                    if(diferenciaDeGol > diferenciaDeGol_mayor)
                    {
                        puntaje_mayor = listaGrupos->Equipo->pts;
                        equipo_mayor = listaGrupos->Equipo;

                    }else if(diferenciaDeGol == diferenciaDeGol_mayor)
                    {
                        if(listaGrupos->Equipo->gf > equipo_mayor->gf)
                        {
                            puntaje_mayor = listaGrupos->Equipo->pts;
                            equipo_mayor = listaGrupos->Equipo;
                        }
                    }
                }
                listaGrupos = listaGrupos->sig;

            }else
            {
                listaGrupos = listaGrupos->sig;
            }

        }

    }

    return equipo_mayor;
}




stEquipo* RetornarGanadorPartido(stPartido unPartido)
{
    stEquipo* EqGanador;

    if(unPartido.golesEq1 > unPartido.golesEq2)
    {
        EqGanador = unPartido.equipo1;

    }else
    {
        if(unPartido.golesEq1 == unPartido.golesEq2)
        {
            if(unPartido.penales1 > unPartido.penales2)
            {
                EqGanador = unPartido.equipo1;

            }else
            {
                EqGanador = unPartido.equipo2;
            }
        }else
        {
            EqGanador = unPartido.equipo2;
        }
    }

    return EqGanador;
}

//HACIENDO FUNCION INVERSA A LA ANTERIOR PARA EL 3ER PUESTO
stEquipo* RetornarPerdedorPartido(stPartido unPartido)
{
    stEquipo* EqPerdedor;

    if(unPartido.golesEq1 > unPartido.golesEq2)
    {
        EqPerdedor = unPartido.equipo2;

    }else
    {
        if (unPartido.golesEq1 == unPartido.golesEq2)
        {
            if(unPartido.penales1 > unPartido.penales2)
            {
                EqPerdedor = unPartido.equipo2;

            }else
            {
                EqPerdedor = unPartido.equipo1;
            }
        }else
        {
            EqPerdedor = unPartido.equipo1;
        }
    }

    return EqPerdedor;
}



void mostrarGruposYPartidos(Grupo ArrGrupos[], GrupoPartido ArrPartidos[])
{
    for(int i=0; i<8; i++)
    {
        mostrar_1_grupo_formatoGrupo(ArrGrupos[i]);
        mostrarPartidos_xGrupo(ArrPartidos[i].partidos);
    }
}

void mostrar_1_grupo_formatoGrupo(Grupo unaCelda)
{
    stEquipo *primero, *segundo, *tercero, *cuarto;

    primero = RetornarMayorPuntaje(unaCelda.EquiposMismoGrupo);
    segundo = Retornar2doMayorPuntaje(unaCelda.EquiposMismoGrupo, primero->nomEquipo);
    tercero = Retornar3erEquipo(unaCelda.EquiposMismoGrupo, primero->nomEquipo, segundo->nomEquipo);
    cuarto = Retornar4toEquipo(unaCelda.EquiposMismoGrupo, primero->nomEquipo, segundo->nomEquipo, tercero->nomEquipo);

    char nombreDelPrimero[20];
    char nombreDelSegundo[20];
    char nombreDelTercero[20];
    char nombreDelCuarto[20];
    char nombre_espacio[]="         ";

    devuelveNombre_formatoTabla(primero, nombreDelPrimero);
    devuelveNombre_formatoTabla(segundo, nombreDelSegundo);
    devuelveNombre_formatoTabla(tercero, nombreDelTercero);
    devuelveNombre_formatoTabla(cuarto, nombreDelCuarto);


    printf("\n                                           ===========================================================================================================");
    printf("\n                                                                                            GRUPO %c				 	           ",unaCelda.letra);
    printf("\n                                           -----------------------------------------------------------------------------------------------------------");
    printf("\n                                           %s                           |  MP  |   W   |    D   |   L   |   GF   |   GA   |   GD   |   PTS   ",nombre_espacio);
    printf("\n                                           -----------------------------------------------------------------------------------------------------------");
    printf("\n                                           %s                             %2d      %2d       %2d      %2d       %2d       %2d       %2d       %2d    ",nombreDelPrimero,primero->mp,primero->win,primero->emp,primero->loss,primero->gf,primero->ga,((primero->gf)-(primero->ga)),primero->pts);
    printf("\n                                           -----------------------------------------------------------------------------------------------------------");
    printf("\n                                           %s                             %2d      %2d       %2d      %2d       %2d       %2d       %2d       %2d    ",nombreDelSegundo,segundo->mp,segundo->win,segundo->emp,segundo->loss,segundo->gf,segundo->ga,((segundo->gf)-(segundo->ga)),segundo->pts);
    printf("\n                                           -----------------------------------------------------------------------------------------------------------");
    printf("\n                                           %s                             %2d      %2d       %2d      %2d       %2d       %2d       %2d       %2d    ",nombreDelTercero,tercero->mp,tercero->win,tercero->emp,tercero->loss,tercero->gf,tercero->ga,((tercero->gf)-(tercero->ga)),tercero->pts);
    printf("\n                                           -----------------------------------------------------------------------------------------------------------");
    printf("\n                                           %s                             %2d      %2d       %2d      %2d       %2d       %2d       %2d       %2d    ",nombreDelCuarto,cuarto->mp,cuarto->win,cuarto->emp,cuarto->loss,cuarto->gf,cuarto->ga,((cuarto->gf)-(cuarto->ga)),cuarto->pts);
    printf("\n                                           ===========================================================================================================");
    printf("\n");
}



void mostrarPartidos_xGrupo(nodoPartido* listaDePartidos)
{
    while(listaDePartidos != NULL)
    {
        mostrar_1_enfrentamiento_conFormato(listaDePartidos->Partidos);
        listaDePartidos = listaDePartidos->sig;
    }
    printf("\n\n\n\n\n\n");
}

void mostrar_1_enfrentamiento(stPartido unPartido)
{
    char nombre_equipo1[20];
    char nombre_equipo2[20];

    devuelveNombre_formatoTabla (unPartido.equipo1, nombre_equipo1);
    devuelveNombre_formatoTabla (unPartido.equipo2, nombre_equipo2);

    printf("\n\t\t\t                                %s	 | %d  | %d |    %s",nombre_equipo1,unPartido.golesEq1,unPartido.golesEq2,nombre_equipo2);
    printf("\n\t\t\t                    ----------------------------------------------------------");
}

