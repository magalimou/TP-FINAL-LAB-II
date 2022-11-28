#include "Partido.h"

/// TRABAJO PRACTICO FINAL LABORATORIO 2
/// JOAQUIN ALBARRACIN, MAGALI MOURIÑO, SERGIO AREAN

//CARGAR ARREGLO PARTIDOS
nodoPartido* CrearNodoPartido(stPartido unPartido)
{
    nodoPartido* nuevo = (nodoPartido*)malloc(sizeof(nodoPartido));
    nuevo->Partidos = unPartido;
    nuevo->sig = NULL;

    return nuevo;
}

void InsertarEnListaPartidos(nodoPartido** listaPartidos, stPartido unPartido)
{
    nodoPartido* recorredora;
    nodoPartido* nuevo = CrearNodoPartido(unPartido);

    if(*listaPartidos == NULL)
    {
        *listaPartidos = nuevo;

    }else
    {
        recorredora = *listaPartidos;

        while(recorredora->sig != NULL)
        {
            recorredora = recorredora->sig;
        }

        recorredora->sig = nuevo;
    }
}

int RetornarDia(char Eq1[], char Eq2[])
{
    if(strcmpi(Eq1, "Qatar") == 0 && strcmpi(Eq2, "Ecuador") == 0)
    {
        return 20;

    }
    else if(strcmpi(Eq1, "Senegal") == 0 && strcmpi(Eq2, "Paises Bajos") == 0)
    {
        return 21;

    }
    else if(strcmpi(Eq1, "Inglaterra") == 0 && strcmpi(Eq2, "Iran") == 0)
    {
        return 21;

    }
    else if(strcmpi(Eq1, "Estados Unidos") == 0 && strcmpi(Eq2, "Gales") == 0)
    {
        return 21;

    }
    else if(strcmpi(Eq1, "Argentina") == 0 && strcmpi(Eq2, "Arabia Saudita") == 0)
    {
        return 22;

    }
    else if(strcmpi(Eq1, "Mexico") == 0 && strcmpi(Eq2, "Polonia") == 0)
    {
        return 22;

    }
    else if(strcmpi(Eq1, "Dinamarca") == 0 && strcmpi(Eq2, "Tunez") == 0)
    {
        return 22;

    }
    else if(strcmpi(Eq1, "Francia") == 0 && strcmpi(Eq2, "Australia") == 0)
    {
        return 22;

    }
    else if(strcmpi(Eq1, "Marruecos") == 0 && strcmpi(Eq2, "Croacia") == 0)
    {
        return 23;

    }
    else if(strcmpi(Eq1, "Belgica") == 0 && strcmpi(Eq2, "Canada") == 0)
    {
        return 23;

    }
    else if(strcmpi(Eq1, "Alemania") == 0 && strcmpi(Eq2, "Japon") == 0)
    {
        return 23;

    }
    else if(strcmpi(Eq1, "Espania") == 0 && strcmpi(Eq2, "Costa Rica") == 0)
    {
        return 23;

    }
    else if(strcmpi(Eq1, "Suiza") == 0 && strcmpi(Eq2, "Camerun") == 0)
    {
        return 24;

    }
    else if(strcmpi(Eq1, "Brasil") == 0 && strcmpi(Eq2, "Serbia") == 0)
    {
        return 24;

    }
    else if(strcmpi(Eq1, "Uruguay") == 0 && strcmpi(Eq2, "Corea del Sur") == 0)
    {
        return 24;

    }
    else if(strcmpi(Eq1, "Portugal") == 0 && strcmpi(Eq2, "Ghana") == 0)
    {
        return 24;

    }
    else if(strcmpi(Eq1, "Inglaterra") == 0 && strcmpi(Eq2, "Estados Unidos") == 0)
    {
        return 25;

    }
    else if(strcmpi(Eq1, "Iran") == 0 && strcmpi(Eq2, "Gales") == 0)
    {
        return 25;

    }
    else if(strcmpi(Eq1, "Qatar") == 0 && strcmpi(Eq2, "Senegal") == 0)
    {
        return 25;

    }
    else if(strcmpi(Eq1, "Ecuador") == 0 && strcmpi(Eq2, "Paises Bajos") == 0)
    {
        return 25;

    }
    else if(strcmpi(Eq1, "Argentina") == 0 && strcmpi(Eq2, "Mexico") == 0)
    {
        return 26;

    }
    else if(strcmpi(Eq1, "Arabia Saudita") == 0 && strcmpi(Eq2, "Polonia") == 0)
    {
        return 26;

    }
    else if(strcmpi(Eq1, "Francia") == 0 && strcmpi(Eq2, "Dinamarca") == 0)
    {
        return 26;

    }
    else if(strcmpi(Eq1, "Australia") == 0 && strcmpi(Eq2, "Tunez") == 0)
    {
        return 26;

    }
    else if(strcmpi(Eq1, "Espania") == 0 && strcmpi(Eq2, "Alemania") == 0)
    {
        return 27;

    }
    else if(strcmpi(Eq1, "Costa Rica") == 0 && strcmpi(Eq2, "Japon") == 0)
    {
        return 27;

    }
    else if(strcmpi(Eq1, "Belgica") == 0 && strcmpi(Eq2, "Marruecos") == 0)
    {
        return 27;

    }
    else if(strcmpi(Eq1, "Canada") == 0 && strcmpi(Eq2, "Croacia") == 0)
    {
        return 27;

    }
    else if(strcmpi(Eq1, "Brasil") == 0 && strcmpi(Eq2, "Suiza") == 0)
    {
        return 28;

    }
    else if(strcmpi(Eq1, "Serbia") == 0 && strcmpi(Eq2, "Camerun") == 0)
    {
        return 28;

    }
    else if(strcmpi(Eq1, "Portugal") == 0 && strcmpi(Eq2, "Uruguay") == 0)
    {
        return 28;

    }
    else if(strcmpi(Eq1, "Ghana") == 0 && strcmpi(Eq2, "Corea del Sur") == 0)
    {
        return 28;

    }
    else if(strcmpi(Eq1, "Qatar") == 0 && strcmpi(Eq2, "Paises Bajos") == 0)
    {
        return 29;

    }
    else if(strcmpi(Eq1, "Ecuador") == 0 && strcmpi(Eq2, "Senegal") == 0)
    {
        return 29;

    }
    else if(strcmpi(Eq1, "Inglaterra") == 0 && strcmpi(Eq2, "Gales") == 0)
    {
        return 29;

    }
    else if(strcmpi(Eq1, "Iran") == 0 && strcmpi(Eq2, "Estados Unidos") == 0)
    {
        return 29;

    }
    else if(strcmpi(Eq1, "Argentina") == 0 && strcmpi(Eq2, "Polonia") == 0)
    {
        return 30;

    }
    else if(strcmpi(Eq1, "Arabia Saudita") == 0 && strcmpi(Eq2, "Mexico") == 0)
    {
        return 30;

    }
    else if(strcmpi(Eq1, "Francia") == 0 && strcmpi(Eq2, "Tunez") == 0)
    {
        return 30;

    }
    else if(strcmpi(Eq1, "Australia") == 0 && strcmpi(Eq2, "Dinamarca") == 0)
    {
        return 30;

    }
    else if(strcmpi(Eq1, "Espania") == 0 && strcmpi(Eq2, "Japon") == 0)
    {
        return 1;

    }
    else if(strcmpi(Eq1, "Costa Rica") == 0 && strcmpi(Eq2, "Alemania") == 0)
    {
        return 1;

    }
    else if(strcmpi(Eq1, "Belgica") == 0 && strcmpi(Eq2, "Croacia") == 0)
    {
        return 1;

    }
    else if(strcmpi(Eq1, "Canada") == 0 && strcmpi(Eq2, "Marruecos") == 0)
    {
        return 1;

    }
    else if(strcmpi(Eq1, "Brasil") == 0 && strcmpi(Eq2, "Camerun") == 0)
    {
        return 2;

    }
    else if(strcmpi(Eq1, "Serbia") == 0 && strcmpi(Eq2, "Suiza") == 0)
    {
        return 2;

    }
    else if(strcmpi(Eq1, "Portugal") == 0 && strcmpi(Eq2, "Corea del Sur") == 0)
    {
        return 2;

    }
    else if(strcmpi(Eq1, "Ghana") == 0 && strcmpi(Eq2, "Uruguay") == 0)
    {
        return 2;
    }
}

int RetornarMes(int dia)
{
    if(dia < 5)
    {
        return 12;

    }else
    {
        return 11;
    }
}

stPartido RetornarPartido(stEquipo* Eq1, stEquipo* Eq2)
{
    stPartido unPartido;

    unPartido.equipo1 = Eq1;
    unPartido.equipo2 = Eq2;
    unPartido.dia = RetornarDia((*unPartido.equipo1).nomEquipo, (*unPartido.equipo2).nomEquipo);
    unPartido.mes = RetornarMes(unPartido.dia);
    unPartido.golesEq1 = 0;
    unPartido.golesEq2 = 0;
    unPartido.penales1 = 0;
    unPartido.penales2 = 0;

    return unPartido;
}

void CargarListaPartidos(nodoPartido** listaPartidos, nodoGrupoEquipo* listaGrupos)
{
    stEquipo* Aux1, *Aux2, *Aux3, *Aux4;

    if(listaGrupos != NULL)
    {
        Aux1 = listaGrupos->Equipo;
        listaGrupos = listaGrupos->sig;
    }

    if(listaGrupos != NULL)
    {
        Aux2 = listaGrupos->Equipo;
        listaGrupos = listaGrupos->sig;
    }

    if(listaGrupos != NULL)
    {
        Aux3 = listaGrupos->Equipo;
        listaGrupos = listaGrupos->sig;
    }

    if(listaGrupos != NULL)
    {
        Aux4 = listaGrupos->Equipo;
        listaGrupos = listaGrupos->sig;
    }

    stPartido Partido1 = RetornarPartido(Aux1, Aux2);
    InsertarEnListaPartidos(listaPartidos, Partido1);

    stPartido Partido2 = RetornarPartido(Aux3, Aux4);
    InsertarEnListaPartidos(listaPartidos, Partido2);

    stPartido Partido3 = RetornarPartido(Aux1, Aux3);
    InsertarEnListaPartidos(listaPartidos, Partido3);

    stPartido Partido4 = RetornarPartido(Aux2, Aux4);
    InsertarEnListaPartidos(listaPartidos, Partido4);

    stPartido Partido5 = RetornarPartido(Aux1, Aux4);
    InsertarEnListaPartidos(listaPartidos, Partido5);

    stPartido Partido6 = RetornarPartido(Aux2, Aux3);
    InsertarEnListaPartidos(listaPartidos, Partido6);
}

void InsertarArrPartidos(GrupoPartido ArrPartidos[], int* validosPartido, Grupo ArrGrupos[], int validosGrupo)
{
    int i = 0;

    while(i < 8)
    {
        GrupoPartido nuevoPartido;
        nuevoPartido.letra = ArrGrupos[i].letra;
        nuevoPartido.partidos = NULL;

        ArrPartidos[i] = nuevoPartido;
        CargarListaPartidos(&(ArrPartidos[i].partidos), ArrGrupos[i].EquiposMismoGrupo);
        i++;
    }

    *validosPartido = i;
}


//MOSTRAR ARREGLOS DE PARTIDOS
void MostrarPartido(stPartido unPartido)
{
    printf("\n  ------------------------");
    printf("\n  Equipo 1: %s", (*unPartido.equipo1).nomEquipo);
    printf("\n  Equipo 2: %s", (*unPartido.equipo2).nomEquipo);
    printf("\n  Fecha: %d/%d/%d", unPartido.dia, unPartido.mes, 2022);
    printf("\n  Goles Equipo 1: %d", unPartido.golesEq1);
    printf("\n  Goles Equipo 2: %d", unPartido.golesEq2);
    printf("\n  Penales Equipo 1: %d", unPartido.penales1);
    printf("\n  Penales Equipo 2: %d", unPartido.penales1);
    printf("\n  ------------------------");
}

void MostrarListaPartidos(nodoPartido* listaPartidos)
{
    while(listaPartidos != NULL)
    {
        MostrarPartido(listaPartidos->Partidos);
        listaPartidos = listaPartidos->sig;
    }
}

void MostrarArrPartidos(GrupoPartido ArrPartidos[], int validos)
{
    for(int i=0; i<validos; i++)
    {
        printf("\n\n\n GRUPO %c : ", ArrPartidos[i].letra);
        MostrarListaPartidos(ArrPartidos[i].partidos);
    }
}

int random_int(int minimo, int maximo)
{
    return minimo + rand()%(maximo+1 - minimo);
}


//SE JUEGAN PARTIDOS FASE GRUPO
void JugarUnPartidoGrupo(stPartido* unPartido, char ganador[]) ///
{
    float pEquipo1 = random_int(0, 500)*(*unPartido).equipo1->probability; //probabilidades de ganar equipo1
    float pEquipo2 = random_int(0, 500)*(*unPartido).equipo2->probability; //probabilidades de ganar equipo2

    int GolesGanador = random_int(3, 7);
    int GolesPerdedor = random_int(0, 2);

    if(pEquipo1 == pEquipo2)
    {
        int num = random_int(0, 1);

        if(num == 0)
        {
            pEquipo1 = pEquipo1 + 7;

        }else
        {
            pEquipo2 = pEquipo2 + 7;
        }
    }

    if(strcmpi((*unPartido).equipo1->nomEquipo, ganador) == 0) //si el equipo1 tiene el nombre del ganador de grupos
    {
        (*unPartido).golesEq1 = GolesGanador;
        ActualizarEquipoGanador(&(*unPartido).equipo1, GolesGanador, GolesPerdedor, 1); //se asegura q gane

        (*unPartido).golesEq2 = GolesPerdedor;
        ActualizarEquipoPerdedor(&(*unPartido).equipo2, GolesPerdedor, GolesGanador, 1);

        mostrar_1_enfrentamiento_conFormato(*unPartido);

    }else
    {
        if(strcmpi((*unPartido).equipo2->nomEquipo, ganador) == 0) //si el equipo2 es el ganador
        {
            (*unPartido).golesEq2 = GolesGanador;
            ActualizarEquipoGanador(&(*unPartido).equipo2, GolesGanador, GolesPerdedor, 1); //se asegura q gane

            (*unPartido).golesEq1 = GolesPerdedor;
            ActualizarEquipoPerdedor(&(*unPartido).equipo1, GolesPerdedor, GolesGanador, 1);

            mostrar_1_enfrentamiento_conFormato(*unPartido);

        }else
        {
            if(pEquipo1 > pEquipo2) //si no esta el nombre del ganador se gana en base a las probabilidades del principip
            {
                (*unPartido).golesEq1 = GolesGanador;
                ActualizarEquipoGanador(&(*unPartido).equipo1, GolesGanador, GolesPerdedor, 0);

                (*unPartido).golesEq2 = GolesPerdedor;
                ActualizarEquipoPerdedor(&(*unPartido).equipo2, GolesPerdedor, GolesGanador, 0);

                mostrar_1_enfrentamiento_conFormato(*unPartido);

            }else      ///no hay empate en la fase de grupos
            {
                (*unPartido).golesEq2 = GolesGanador;
                ActualizarEquipoGanador(&(*unPartido).equipo2, GolesGanador, GolesPerdedor, 0);

                (*unPartido).golesEq1 = GolesPerdedor;
                ActualizarEquipoPerdedor(&(*unPartido).equipo1, GolesPerdedor, GolesGanador, 0);

                mostrar_1_enfrentamiento_conFormato(*unPartido);
            }
        }
    }
}

void JugarPartidosMismoGrupo(nodoPartido* listaPartidos, char ganador[])
{
    while(listaPartidos != NULL)
    {
        JugarUnPartidoGrupo(&listaPartidos->Partidos, ganador);

        listaPartidos = listaPartidos->sig;
    }
}

void JugarPartidoFaseGrupos(GrupoPartido ArrPartidos[], int validos, char ganador[])
{
    int i = 0;

    while(i < validos)
    {
        printf("\n\n");
        printf("\n\t\t\t                                           ==========================");
        printf("\n\t\t\t                                                     GRUPO %c ",ArrPartidos[i].letra);
        printf("\n\t\t\t                                           ==========================");
        JugarPartidosMismoGrupo(ArrPartidos[i].partidos, ganador);
        i++;

    }
}


//SE JUEGAN LOS PARTIDOS DE OCTAVOS HASTA LA FINAL
void JugarUnPartidoConPenales(stPartido* unPartido) ///
{
    ///Inicializo Penales ya que se trata de un nuevo partido por jugar
    unPartido->penales1 = 0;
    unPartido->penales2 = 0;

    float pEquipo1 = random_int(0, 500)*(*unPartido).equipo1->probability; //probabilidades de ganar equipo1
    float pEquipo2 = random_int(0, 500)*(*unPartido).equipo2->probability; //probabilidades de ganar equipo2

    int GolesGanador = random_int(3, 7);
    int GolesPerdedor = random_int(0, 3);

    int azar, resultado_por_azar, cantidad_por_azar;

    if(pEquipo1 == pEquipo2) ///Con esto evitamos que las probabilidades sean iguales
    {
        azar = random_int(0, 1);

        if(azar == 0)
        {
            pEquipo1 = pEquipo1 + 7;

        }else
        {
            pEquipo2 = pEquipo2 + 7;
        }
    }

    if(GolesGanador!=GolesPerdedor)  ///si no hay empates, pienso en terminos de ganador y perdedor
    {
        if(pEquipo1 > pEquipo2) ///si el primer equipo tiene mas chances que el 2do, se le asigna los goles ganadores
        {
            (*unPartido).golesEq1 = GolesGanador;
            (*unPartido).golesEq2 = GolesPerdedor;

            unPartido->equipo1->gf = (unPartido->equipo1->gf) + GolesGanador;
            unPartido->equipo1->ga = (unPartido->equipo1->ga) + GolesPerdedor;
            unPartido->equipo1->win = (unPartido->equipo1->win) + 1;
            unPartido->equipo1->pts = (unPartido->equipo1->pts) + 3;

            unPartido->equipo2->loss = (unPartido->equipo2->loss) + 1;
            unPartido->equipo2->gf = (unPartido->equipo2->gf) + GolesPerdedor;
            unPartido->equipo2->ga = (unPartido->equipo2->ga) + GolesGanador;

        }else
        {
            (*unPartido).golesEq1 = GolesPerdedor;
            (*unPartido).golesEq2 = GolesGanador;

            unPartido->equipo2->gf = (unPartido->equipo2->gf) + GolesGanador;
            unPartido->equipo2->ga = (unPartido->equipo2->ga) + GolesPerdedor;
            unPartido->equipo2->win = (unPartido->equipo2->win) + 1;
            unPartido->equipo2->pts = (unPartido->equipo2->pts) + 3;

            unPartido->equipo1->loss = (unPartido->equipo1->loss) + 1;
            unPartido->equipo1->gf = (unPartido->equipo1->gf) + GolesPerdedor;
            unPartido->equipo1->ga = unPartido->equipo1->ga + GolesGanador;
        }

        unPartido->equipo1->mp = (unPartido->equipo1->mp) + 1;
        unPartido->equipo2->mp = (unPartido->equipo2->mp) + 1;

    }else ///si ambos tienen la misma cantidad de goles, se trata de una DEFINICION POR PENALES
    {

        ///Primero actualizo sus datos del Partido
        unPartido->equipo1->gf = (unPartido->equipo1->gf) + GolesGanador;
        unPartido->equipo1->ga = (unPartido->equipo1->ga) + GolesPerdedor;

        unPartido->equipo2->gf = (unPartido->equipo2->gf) + GolesGanador;
        unPartido->equipo2->ga = (unPartido->equipo2->ga) + GolesPerdedor;

        ///Ahora si, a los Penales
        azar = random_int(1, 4); ///equipo que gana depende del azar, lo cual en penales es totalmente valido
        resultado_por_azar = random_int(1,5);

        if(azar%2==0) //gana el equipo 1
        {
            if(resultado_por_azar==1)  /// 5-4
            {
                unPartido->penales1 = 5;
                unPartido->penales2 = 4;
            }
            else if (resultado_por_azar==2)  ///5-3
            {
                unPartido->penales1 = 5;
                unPartido->penales2 = 3;
            }
            else if(resultado_por_azar==3)  ///6-5
            {
                unPartido->penales1=6;
                unPartido->penales2=5;
            }
            else if(resultado_por_azar==4) ///4-2
            {
                unPartido->penales1=4;
                unPartido->penales2=2;
            }
            else if(resultado_por_azar==5)  ///mas goles, con resultado realista
            {
                cantidad_por_azar = random_int(6,11);
                unPartido->penales1= cantidad_por_azar;
                unPartido->penales2= (cantidad_por_azar - 1);
            }

            ///Actualizamos Datos
            unPartido->equipo1->win = (unPartido->equipo1->win) + 1;
            unPartido->equipo1->pts = (unPartido->equipo1->pts) + 3;
            unPartido->equipo2->loss = (unPartido->equipo2->loss) + 1;

        }else  //gana el equipo 2
        {
           if(resultado_por_azar==1)  /// 5-4
            {
                unPartido->penales2 = 5;
                unPartido->penales1 = 4;

            }else if (resultado_por_azar==2)  ///5-3
            {
                unPartido->penales2 = 5;
                unPartido->penales1 = 3;

            }else if(resultado_por_azar==3)  ///6-5
            {
                unPartido->penales2=6;
                unPartido->penales1=5;

            }else if(resultado_por_azar==4) ///4-2
            {
                unPartido->penales2=4;
                unPartido->penales1=2;

            }else if(resultado_por_azar==5)  ///mas goles, con resultado realista
            {
                cantidad_por_azar = random_int(6,11);
                unPartido->penales2= cantidad_por_azar;
                unPartido->penales1= (cantidad_por_azar - 1);
            }

            ///Actualizamos Datos
            unPartido->equipo2->win = (unPartido->equipo2->win) + 1;
            unPartido->equipo2->pts = (unPartido->equipo2->pts) + 3;
            unPartido->equipo1->loss = (unPartido->equipo1->loss) + 1;
        }
        unPartido->equipo1->mp = (unPartido->equipo1->mp) + 1; ///actualizo que ambos jugaron 1 partido mas
        unPartido->equipo2->mp = (unPartido->equipo2->mp) + 1;
    }

    mostrar_1_enfrentamiento_conFormato(*unPartido);
}


//MOSTRAR ENFRENTAMIENTO CON 2 EQUIPOS CON DATOS COMPLETOS
void mostrar_1_enfrentamiento_completo(stPartido unPartido)
{
    printf("\n                                              =====================================================================");
    printf("\n                                                      | EQUIPO 1 :  %s |       | EQUIPO 2 : %s |", unPartido.equipo1->nomEquipo, unPartido.equipo2->nomEquipo);
    printf("\n                                              =====================================================================");
    printf("\n                                              RESULTADO:     %2d              ||   	       %2d", unPartido.golesEq1, unPartido.golesEq2);
    printf("\n                                              ---------------------------------------------------------------------");
    printf("\n                                                  MP:            %2d           ||   	       %2d", unPartido.equipo1->mp, unPartido.equipo2->mp);
    printf("\n                                              ---------------------------------------------------------------------");
    printf("\n                                                  GF:            %2d           ||   	       %2d", unPartido.equipo1->gf, unPartido.equipo2->gf);
    printf("\n                                              ---------------------------------------------------------------------");
    printf("\n                                                  GA:            %2d           ||   	       %2d", unPartido.equipo1->ga, unPartido.equipo2->ga);
    printf("\n                                              ---------------------------------------------------------------------");
    printf("\n                                                  WN:            %2d           ||   	       %2d", unPartido.equipo1->win, unPartido.equipo2->win);
    printf("\n                                              ---------------------------------------------------------------------");
    printf("\n                                                  LS:            %2d           ||   	       %2d", unPartido.equipo1->loss, unPartido.equipo2->loss);
    printf("\n                                              ---------------------------------------------------------------------");
    printf("\n                                                  EM:            %2d           ||   	       %2d", unPartido.equipo1->emp, unPartido.equipo2->emp);
    printf("\n                                              ---------------------------------------------------------------------");
    printf("\n                                                  PT:            %2d           ||   	       %2d", unPartido.equipo1->pts, unPartido.equipo2->pts);

    if(unPartido.penales1 != 0)
    {
        printf("\n\n                                                                              * Partido definido por Penales\n");
        printf("\n                                                                                        %s (%d)  -  (%d) %s", unPartido.equipo1->nomEquipo, unPartido.penales1, unPartido.penales2, unPartido.equipo2->nomEquipo);
    }
    printf("\n\n\n");
}


